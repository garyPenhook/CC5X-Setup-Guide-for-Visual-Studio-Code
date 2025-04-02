// *************************************************
// 32 bit basic floating point math operations
// Copyright (c) B Knudsen Data, Norway, 2000 - 2009
// *************************************************

#pragma library 1
/* PROTOTYPES for page definition in application header file:
float32 operator* _fmul32( float32 arg1f32, float32 arg2f32);
float32 operator/ _fdiv32( float32 arg1f32, float32 arg2f32);
float32 operator+ _fadd32( float32 arg1f32, float32 arg2f32);
float32 operator- _fsub32( float32 arg1f32, float32 arg2f32);
float32 operator= _int32ToFloat32( int32 arg1f32);
int32 operator= _float32ToInt32( float32 arg1f32);
bit operator< _f32_LT_f32( float32 arg1f32, float32 arg2f32);
bit operator>= _f32_GE_f32( float32 arg1f32, float32 arg2f32);
bit operator> _f32_GT_f32( float32 arg1f32, float32 arg2f32);
bit operator<= _f32_LE_f32( float32 arg1f32, float32 arg2f32);
*/

// DEFINABLE SYMBOLS (in the application code):
//#define FP_OPTIM_SPEED  // optimize for SPEED: default
//#define FP_OPTIM_SIZE   // optimize for SIZE
//#define DISABLE_ROUNDING   // disable rounding and save code space

#define float32ToIEEE754(a) { a.midH8=rl(a.midH8); a.high8=rr(a.high8);\
                              a.midH8=rr(a.midH8); }
#define IEEE754ToFloat32(a) { a.midH8=rl(a.midH8); a.high8=rl(a.high8);\
                              a.midH8=rr(a.midH8); }

/*  32 bit floating point format:

  address  ID
    X      a.low8  : LSB, bit 0-7 of mantissa
    X+1    a.midL8 : bit 8-15 of mantissa
    X+2    a.midH8 : bit 16-22 of mantissa, bit 23 is the sign bit
    X+3    a.high8 : MSB, bit 0-7 of exponent, with bias 0x7F

    bit 23 of mantissa is a hidden bit, always equal to 1
    zero (0.0) :  a.high8 = 0 (mantissa & sign ignored)

   MSB       LSB
    7F 00 00 00  : 1.0   =  1.0  * 2**(0x7F-0x7F) = 1.0 * 1
    7F 80 00 00  : -1.0  = -1.0  * 2**(0x7F-0x7F) = -1.0 * 1
    80 00 00 00  : 2.0   =  1.0  * 2**(0x80-0x7F) = 1.0 * 2
    80 40 00 00  : 3.0   =  1.5  * 2**(0x80-0x7F) = 1.5 * 2
    7E 60 00 00  : 0.875 =  1.75 * 2**(0x7E-0x7F) = 1.75 * 0.5
    7F 60 00 00  : 1.75  =  1.75 * 2**(0x7E-0x7F) = 1.75 * 1
    7F 7F FF FF  : 1.9999998808
    00 7C E3 5A  : 0.0 (mantissa & sign ignored)
    01 00 00 00  : 1.1754943508e-38 =  1.0 * 2**(0x01-0x7F)
    FE 7F FF FF  : 3.4028234664e+38 =  1.9999998808 * 2**(0xFE-0x7F)
    FF 00 00 00  : +INF : positive infinity
    FF 80 00 00  : -INF : negative infinity
*/                 

#define  FpBIAS  0x7F

#ifndef FpFlags_defined
 #define FpFlags_defined

 char FpFlags;
 //bit IOV         @ FpFlags.0; // integer overflow flag: NOT USED
 bit FpOverflow    @ FpFlags.1; // floating point overflow flag
 bit FpUnderFlow   @ FpFlags.2; // floating point underflow flag
 bit FpDiv0        @ FpFlags.3; // floating point divide by zero flag
 //bit FpNAN       @ FpFlags.4; // not-a-number exception flag: NOT USED
 bit FpDomainError @ FpFlags.5; // domain error exception flag
 bit FpRounding    @ FpFlags.6; // floating point rounding flag, 0=truncation
                                // 1 = unbiased rounding to nearest LSB
 //bit FpSaturate  @ FpFlags.7; // floating point saturate flag: NOT USED

 #pragma floatOverflow FpOverflow
 #pragma floatUnderflow FpUnderFlow

 #define InitFpFlags()  FpFlags = 0x40 /* enable rounding as default */
#endif

#ifdef DISABLE_ROUNDING
 #pragma floatRounding 0
#endif

#if __CoreSet__ < 1410
 #define genAdd(r,a) W=a; btsc(Carry); W=incsz(a); r+=W
 #define genSub(r,a) W=a; btss(Carry); W=incsz(a); r-=W
 #define genAddW(r,a) W=a; btsc(Carry); W=incsz(a); W=r+W
 #define genSubW(r,a) W=a; btss(Carry); W=incsz(a); W=r-W
#else
 #define genAdd(r,a) W=a; r=addWFC(r)
 #define genSub(r,a) W=a; r=subWFB(r)
 #define genAddW(r,a) W=a; W=addWFC(r)
 #define genSubW(r,a) W=a; W=subWFB(r)
#endif


float32 operator* _fmul32( sharedM float32 arg1f32, sharedM float32 arg2f32)
// CYCLES: 24 + 21*24 + 30 + 7 = 565
{
    uns24 aarg;
    W = arg1f32.midH8;
    aarg.high8 = W;

    // save sign
    char sign = arg2f32.midH8 ^ W;  // before first overflow test

    W = arg1f32.high8;
    if (!Zero_)
        W = arg2f32.high8;
    if (Zero_)
        goto RES0;

    arg1f32.high8 += W /* arg2f32.high8 */;
    W = FpBIAS-1;
    if (Carry)  {
        arg1f32.high8 -= W;
        if (Carry)
            goto OVERFLOW;
    }
    else  {
        arg1f32.high8 -= W;
        if (!Carry)
            goto UNDERFLOW;
    }
    aarg.low16 = arg1f32.low16;

    aarg.23 = 1;
    arg2f32.23 = 1;

    arg1f32.low24 = 0;

    char counter = sizeof(aarg)*8;

    do  {
        aarg = rr( aarg);
        if (Carry)  {
            arg1f32.low8 += arg2f32.low8;
            genAdd( arg1f32.midL8, arg2f32.midL8);
            genAdd( arg1f32.midH8, arg2f32.midH8);
        }
        arg1f32.low24 = rr( arg1f32.low24);
    } while (-- counter > 0);

    if (!arg1f32.23)  {
        // catch Carry bit that was shifted out previously
        arg1f32.low24 = rl( arg1f32.low24);
        if (arg1f32.high8 == 0)
            goto UNDERFLOW;
        arg1f32.high8 -= 1;
        W = rl( aarg.high8);
        // restore bit behind LSB in Carry
    }

   #ifndef DISABLE_ROUNDING
    if (FpRounding  &&  Carry)  {
        arg1f32.low8 += 1;
        if (!arg1f32.low8)  {
            arg1f32.midL8 += 1;
            if (!arg1f32.midL8)  {
                arg1f32.midH8 += 1;
                if (!arg1f32.midH8)  {
                    // Carry = 1; //OK
                    arg1f32.low24 = rr( arg1f32.low24);
                    arg1f32.high8 += 1;
                    if (Zero_)
                        goto OVERFLOW;
                }
            }
        }
    }
   #endif
    goto SET_SIGN;

  UNDERFLOW:
    FpUnderFlow = 1;
  RES0:
    arg1f32.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
    arg1f32.high8 = 0xFF;
  MANTISSA:
    arg1f32.low24 = 0x800000;

  SET_SIGN:
    if (!(sign & 0x80))
        arg1f32.23 = 0;
    return arg1f32;
}



float32 operator/ _fdiv32( sharedM float32 arg1f32, sharedM float32 arg2f32)
// CYCLES: 28 + 23(++)*24 + 8+23(++)(align) + 37(round) = 648++
{
    uns24 aarg;
    W = arg1f32.midH8;
    aarg.high8 = W;

    // save sign
    char sign = arg2f32.midH8 ^ W;  // before first overflow test

    W = arg2f32.high8;
    if (Zero_)
        goto Div0;
    if (!arg1f32.high8)
        goto RES0;

    arg1f32.high8 -= arg2f32.high8;
    W = FpBIAS;
    if (!Carry)  {
        arg1f32.high8 += W;
        if (!Carry)
            goto UNDERFLOW;
    }
    else  {
        arg1f32.high8 += W;
        if (Carry)
            goto OVERFLOW;
    }

    aarg.low16 = arg1f32.low16;
    aarg.23 = 1;
    arg2f32.23 = 1;

    // division: shift & add
    char counter = 24;
    arg1f32.low24 = 0;  // speedup

#if defined FP_OPTIM_SPEED || !defined FP_OPTIM_SIZE  // SPEED

    // CYCLES :  23 * 25 = 575
    // cycles pr loop:
    //   23 if Carry = 1
    //   28 if aarg.MSB > arg2f32.MSB
    //   18 if aarg.MSB < arg2f32.MSB
    //         aarg.MSB = arg2f32.MSB : 7 (init) + 9 (goto_shift_in_carry)
    //   31: 16+15 aarg.low16 >= arg2f32.low16
    //   25: 16+9 aarg.low16 < arg2f32.low16

    goto START_ML;

  TEST_ZERO_L:
    W = aarg.low8 - arg2f32.low8;
    genSubW( aarg.mid8, arg2f32.midL8);
    if (!Carry)
        goto SHIFT_IN_CARRY;
    aarg.mid8 = W;
    aarg.high8 = 0;
    aarg.low8 -= arg2f32.low8;
    goto SET_AND_SHIFT_IN_CARRY;

// MAIN LOOP
    do  {
      LOOP_ML:
        if (!Carry)  {
           START_ML:
            W = aarg.high8 - arg2f32.midH8;
            if (Zero_)
                goto TEST_ZERO_L;
            if (!Carry)
                goto SHIFT_IN_CARRY;
        }
        aarg.low8 -= arg2f32.low8;
        genSub( aarg.mid8, arg2f32.midL8);
        genSub( aarg.high8, arg2f32.midH8);
      SET_AND_SHIFT_IN_CARRY:
        Carry = 1;
      SHIFT_IN_CARRY:
        arg1f32.low24 = rl( arg1f32.low24);
        // Carry = 0;  // ok, speedup
        aarg = rl( aarg);
    } while (-- counter > 0);



#else  // SIZE

    goto START_ML;

// MAIN LOOP
    do  {
      LOOP_ML:
        if (Carry)
            goto SUBTRACT;
      START_ML:
        W = aarg.low8 - arg2f32.low8;
        genSubW( aarg.mid8, arg2f32.midL8);
        genSubW( aarg.high8, arg2f32.midH8);
        if (!Carry)
            goto SKIP_SUB;
       SUBTRACT:
        aarg.low8 -= arg2f32.low8;
        genSub( aarg.mid8, arg2f32.midL8);
        genSub( aarg.high8, arg2f32.midH8);
        Carry = 1;
       SKIP_SUB:
        arg1f32.low24 = rl( arg1f32.low24);
        // Carry = 0;  // ok
        aarg = rl( aarg);
    } while (-- counter > 0);

#endif

    if (!arg1f32.23)  {
        if (!arg1f32.high8)
            goto UNDERFLOW;
        arg1f32.high8 --;
        counter ++;
        goto LOOP_ML;
    }

   #ifndef DISABLE_ROUNDING
    if (FpRounding)  {
        if (Carry)
            goto ADD_1;
        aarg.low8 -= arg2f32.low8;
        genSub( aarg.mid8, arg2f32.midL8);
        genSub( aarg.high8, arg2f32.midH8);
        if (Carry)  {
          ADD_1:
            arg1f32.low8 += 1;
            if (!arg1f32.low8)  {
                arg1f32.midL8++;
                if (!arg1f32.midL8)  {
                    arg1f32.midH8 ++;
                    if (!arg1f32.midH8)  {
                        arg1f32.low24 = rr( arg1f32.low24);
                        arg1f32.high8 ++;
                        if (!arg1f32.high8)
                            goto OVERFLOW;
                    }
                }
            }
        }
    }
   #endif
    goto SET_SIGN;

  Div0:
    FpDiv0 = 1;
    goto SATURATE;

  UNDERFLOW:
    FpUnderFlow = 1;
  RES0:
    arg1f32.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
  SATURATE:
    arg1f32.high8 = 0xFF;
  MANTISSA:
    arg1f32.low24 = 0x800000;

  SET_SIGN:
    if (!(sign & 0x80))
        arg1f32.23 = 0;
    return arg1f32;
}


float32 operator+ _fadd32( sharedM float32 arg1f32, sharedM float32 arg2f32)
// CYCLES: 6+21+11+5+ (A8)*13 +3 + A1*8 + 61 ++
{
    char xtra, temp;
    char expo = arg1f32.high8 - arg2f32.high8;
    if (!Carry)  {
        expo = -expo;
        temp = arg1f32.high8;
        arg1f32.high8 = arg2f32.high8;
        arg2f32.high8 = temp;
        temp = arg1f32.midH8;
        arg1f32.midH8 = arg2f32.midH8;
        arg2f32.midH8 = temp;
        temp = arg1f32.midL8;
        arg1f32.midL8 = arg2f32.midL8;
        arg2f32.midL8 = temp;
        temp = arg1f32.low8;
        arg1f32.low8 = arg2f32.low8;
        arg2f32.low8 = temp;
    }
    if (expo > sizeof(arg1f32)*8-7)
        goto _RETURN_MF;
    if (!arg2f32.high8)
        goto _RETURN_MF;   // result is arg1f32

    xtra = 0;

    temp = arg1f32.midH8;
    char sign = arg2f32.midH8 ^ arg1f32.midH8;
    arg1f32.23 = 1;
    arg2f32.23 = 1;

    while (1)  {
        W = 8;
        expo -= W;
        if (!Carry)
            break;
        xtra = arg2f32.low8;
        arg2f32.low8 = arg2f32.midL8;
        arg2f32.midL8 = arg2f32.midH8;
        arg2f32.midH8 = 0;
    }
    expo += W;
    if (expo)  {
        do  {
            Carry = 0;
            arg2f32.low24 = rr( arg2f32.low24);
            xtra = rr( xtra);
        } while (--expo > 0);
    }


    if (sign & 0x80)  {
        // SUBTRACT
        arg1f32.low8 -= arg2f32.low8;
        genSub( arg1f32.midL8, arg2f32.midL8);
        genSub( arg1f32.midH8, arg2f32.midH8);
        if (!Carry)  {  // arg2f32 > arg1f32
            arg1f32.low24 = -arg1f32.low24;
            // xtra == 0 because arg1f32.exp == arg2f32.exp
            temp ^= 0x80;  // invert sign
        }
        xtra = -xtra;
        if (xtra)
            arg1f32.low24 --;
        // adjust result left
       #define counter expo
        counter = 4;
        while (!arg1f32.midH8)  {
            arg1f32.midH8 = arg1f32.midL8;
            arg1f32.midL8 = arg1f32.low8;
            arg1f32.low8 = xtra;
            xtra = 0;
            arg1f32.high8 -= 8;
            if (!Carry)
                goto RES0;
            if (--counter == 0)  // max 3 iterations
                goto RES0;
        }
       #undef counter
        while (!arg1f32.23)  {
            Carry = 0;
            xtra = rl( xtra);
            arg1f32.low24 = rl( arg1f32.low24);
            arg1f32.high8 --;
            if (!arg1f32.high8)
                goto RES0;   // UNDERFLOW?
        }
       #ifndef DISABLE_ROUNDING
        if (FpRounding  &&  (xtra & 0x80))  {
            xtra = 0; // disable recursion
            goto INCREMENT;
        }
       #endif
    }
    else  {
        // ADD arg1f32 and arg2f32
        arg1f32.low8 += arg2f32.low8;
        genAdd( arg1f32.midL8, arg2f32.midL8);
        genAdd( arg1f32.midH8, arg2f32.midH8);
        if (Carry)  {
          ADJUST_RIGHT:
            arg1f32.low24 = rr( arg1f32.low24);
            xtra = rr( xtra);
            arg1f32.high8 += 1;  // exp
            if (!arg1f32.high8)
                goto OVERFLOW;
        }
       #ifndef DISABLE_ROUNDING
        if (FpRounding  &&  (xtra & 0x80))  {
          INCREMENT:
            arg1f32.low8 += 1;
            if (!arg1f32.low8)  {
                arg1f32.midL8 += 1;
                if (!arg1f32.midL8)  {
                    arg1f32.midH8 += 1;
                    if (!arg1f32.midH8)  {
                        Carry = 1; // prepare for shift
                        arg1f32.0 = 0;  // disable recursion
                        goto ADJUST_RIGHT;
                    }
                }
            }
        }
       #endif
    }
    goto SET_SIGN;

//  UNDERFLOW:
//    FpUnderFlow = 1;
  RES0:
    arg1f32.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
    arg1f32.high8 = 0xFF;
  MANTISSA:
    arg1f32.low24 = 0x800000;

  SET_SIGN:
    if (!(temp & 0x80))
        arg1f32.23 = 0;

  _RETURN_MF:
    return arg1f32;
}


// SUBTRACTION

float32 operator- _fsub32( sharedM float32 arg1f32, sharedM float32 arg2f32)
{
    arg2f32.midH8 ^= 0x80;
    arg1f32 += arg2f32;
    return arg1f32;
}


float32 operator=( int8 arg) @
float32 operator=( uns8 arg) @
float32 operator=( int16 arg) @
float32 operator=( uns16 arg) @
float32 operator=( int24 arg) @
float32 operator=( uns24 arg) @
float32 operator= _int32ToFloat32( sharedM int32 arg1f32)
{
    sharedM float32 arg2f32;   // unused, but required
    char expo = FpBIAS + 24 - 1;
    char xtra = 0;
    char sign = 0;
    if (arg1f32 < 0)  {
        arg1f32 = -arg1f32;
        sign |= 0x80;
    }
    if (arg1f32.high8)  {
        expo += 8;
        xtra = arg1f32.low8;
        arg1f32.low8 = arg1f32.midL8;
        arg1f32.midL8 = arg1f32.midH8;
        arg1f32.midH8 = arg1f32.high8;
    }
    else if (!arg1f32.midH8)  {
        expo -= 8;
        W = arg1f32.midL8;
        if (!W)  {
            expo -= 8;
            W = arg1f32.low8;
            if (!W)
                goto _RETURN_MF;
            arg1f32.low8 = 0;
        }
        arg1f32.midH8 = W;
        arg1f32.midL8 = arg1f32.low8;
        arg1f32.low8 = 0;
    }

    // arg1f32.midH8 != 0
    goto TEST_ARG1_B23;
    do  {
        xtra = rl( xtra);
        arg1f32.low24 = rl( arg1f32.low24);
        expo --;
      TEST_ARG1_B23:
    } while (!arg1f32.23);

   #ifndef DISABLE_ROUNDING
    if (FpRounding && (xtra & 0x80))  {
        arg1f32.low8 += 1;
        if (!arg1f32.low8)  {
            arg1f32.midL8 += 1;
            if (!arg1f32.midL8)  {
                arg1f32.midH8 += 1;
                if (!arg1f32.midH8)  {
                    Carry = 1;
                    arg1f32.high24 = rr( arg1f32.high24);
                    expo ++;
                }
            }
        }
    }
   #endif

    arg1f32.high8 = expo;
    if (!(sign & 0x80))
        arg1f32.23 = 0;

  _RETURN_MF:
    float32 rval @ arg1f32;
    rval.low32 = arg1f32.low32;
    return rval;
}


uns8 operator=( sharedM float32 arg1f32) @
int8 operator=( sharedM float32 arg1f32) @
uns16 operator=( sharedM float32 arg1f32) @
int16 operator=( sharedM float32 arg1f32) @
uns24 operator=( sharedM float32 arg1f32) @
int24 operator=( sharedM float32 arg1f32) @
int32 operator= _float32ToInt32( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;   // unused, but required
    char sign = arg1f32.midH8;
    char expo = arg1f32.high8 - (FpBIAS-1);
    if (!Carry)
        goto RES0;
    arg1f32.23 = 1;

    arg1f32.high8 = 0;
   #ifndef DISABLE_ROUNDING
    char xtra = 0;
   #endif

    // (a): expo = 0..8 : shift 2 byte to the right
    // (b): expo = 9..16: shift 1 byte to the right
    // (c): expo = 17..24: shift 0 byte
    // (d): expo = 25..32: shift 1 byte to the left
   #if __CoreSet__ / 100 == 12
    expo -= 25;
    expo = 0xFF - expo;  // COMF (Carry unchanged)
    if (Carry)  {  // (d)
   #else
    expo = 24 - expo;
    if (!Carry)  {  // (d)
   #endif
        expo += 8;
        if (!Carry)
            goto OVERFLOW;
        arg1f32.high8 = arg1f32.midH8;
        arg1f32.midH8 = arg1f32.midL8;
        arg1f32.midL8 = arg1f32.low8;
        arg1f32.low8 = 0;
    }
    else  {  // (a) (b) (c)
        // expo = 0 .. 24
        while (1)  {
            W = 8;
            expo -= W;
            if (!Carry)
                break;
           #ifndef DISABLE_ROUNDING
            xtra = arg1f32.low8;
           #endif
            arg1f32.low8 = arg1f32.midL8;
            arg1f32.midL8 = arg1f32.midH8;
            arg1f32.midH8 = 0;
        }
        expo += W;
    }
    if (expo)  {
        do  {
            Carry = 0;
            arg1f32.high8 = rr( arg1f32.high8);
            arg1f32.low24 = rr( arg1f32.low24);
           #ifndef DISABLE_ROUNDING
            xtra = rr( xtra);
           #endif
        } while (--expo);
    }
    if (arg1f32.31)  {
       OVERFLOW:
        FpOverflow = 1;
        W = 0xFF;
        goto ASSIGNW;
       RES0:
        W = 0;
       ASSIGNW:
        arg1f32.low8 = W;
        arg1f32.midL8 = W;
        arg1f32.midH8 = W;
        arg1f32.high8 = W;
        arg1f32.31 = 0;
    }
    else  {
       #ifndef DISABLE_ROUNDING
        if (FpRounding && (xtra & 0x80))  {
            arg1f32.low8 += 1;
            if (!arg1f32.low8)  {
                arg1f32.midL8 += 1;
                if (!arg1f32.midL8)
                    arg1f32.midH8 += 1;
            }
        }
       #endif
        if (sign & 0x80)
            arg1f32.low32 = -arg1f32.low32;
    }
    int32 rval @ arg1f32;
    rval = arg1f32.low32;
    return rval;
}

bit operator< _f32_LT_f32( sharedM float32 arg1f32, sharedM float32 arg2f32)
{
    Carry = 0;
    if (!(arg1f32.high8 | arg2f32.high8))
        return Carry;
    if (!arg1f32.23)  {
        if (arg2f32.23)
            return Carry;
        W = arg1f32.low8 - arg2f32.low8;
        genSubW( arg1f32.midL8, arg2f32.midL8);
        genSubW( arg1f32.midH8, arg2f32.midH8);
        genSubW( arg1f32.high8, arg2f32.high8);
        goto _RETURN_MF;
    }
    if (!arg2f32.23)
        goto _RETURN_MF;
    W = arg2f32.low8 - arg1f32.low8;
    genSubW( arg2f32.midL8, arg1f32.midL8);
    genSubW( arg2f32.midH8, arg1f32.midH8);
    genSubW( arg2f32.high8, arg1f32.high8);
  _RETURN_MF:
    if (Carry)
        return 0;
    return 1;
}


bit operator>= _f32_GE_f32( sharedM float32 arg1f32, sharedM float32 arg2f32)
{
    Carry = 1;
    if (!(arg1f32.high8 | arg2f32.high8))
        return Carry;
    if (!arg1f32.23)  {
        if (arg2f32.23)
            return Carry;
        W = arg1f32.low8 - arg2f32.low8;
        genSubW( arg1f32.midL8, arg2f32.midL8);
        genSubW( arg1f32.midH8, arg2f32.midH8);
        genSubW( arg1f32.high8, arg2f32.high8);
        return Carry;
    }
    Carry = 0;
    if (!arg2f32.23)
        return Carry;
    W = arg2f32.low8 - arg1f32.low8;
    genSubW( arg2f32.midL8, arg1f32.midL8);
    genSubW( arg2f32.midH8, arg1f32.midH8);
    genSubW( arg2f32.high8, arg1f32.high8);
    return Carry;
}



bit operator> _f32_GT_f32( sharedM float32 arg1f32, sharedM float32 arg2f32)
{
    Carry = 0;
    if (!(arg1f32.high8 | arg2f32.high8))
        return Carry;
    if (!arg1f32.23)  {
        if (arg2f32.23)
            goto _RETURN_MF;
        W = arg2f32.low8 - arg1f32.low8;
        genSubW( arg2f32.midL8, arg1f32.midL8);
        genSubW( arg2f32.midH8, arg1f32.midH8);
        genSubW( arg2f32.high8, arg1f32.high8);
        goto _RETURN_MF;
    }
    if (!arg2f32.23)
        return Carry;
    W = arg1f32.low8 - arg2f32.low8;
    genSubW( arg1f32.midL8, arg2f32.midL8);
    genSubW( arg1f32.midH8, arg2f32.midH8);
    genSubW( arg1f32.high8, arg2f32.high8);
  _RETURN_MF:
    if (Carry)
        return 0;
    return 1;
}



bit operator<= _f32_LE_f32( sharedM float32 arg1f32, sharedM float32 arg2f32)
{
    Carry = 1;
    if (!(arg1f32.high8 | arg2f32.high8))
        return Carry;
    if (!arg1f32.23)  {
        Carry = 0;
        if (arg2f32.23)
            return Carry;
        W = arg2f32.low8 - arg1f32.low8;
        genSubW( arg2f32.midL8, arg1f32.midL8);
        genSubW( arg2f32.midH8, arg1f32.midH8);
        genSubW( arg2f32.high8, arg1f32.high8);
        return Carry;
    }
    if (!arg2f32.23)
        return Carry;
    W = arg1f32.low8 - arg2f32.low8;
    genSubW( arg1f32.midL8, arg2f32.midL8);
    genSubW( arg1f32.midH8, arg2f32.midH8);
    genSubW( arg1f32.high8, arg2f32.high8);
    return Carry;
}



#undef genAdd
#undef genSub
#undef genAddW
#undef genSubW

#pragma library 0
