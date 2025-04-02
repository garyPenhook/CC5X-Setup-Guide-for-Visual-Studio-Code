// *************************************************
// 16 bit basic floating point math operations
// Copyright (c) B Knudsen Data, Norway, 2000 - 2009
// *************************************************

#pragma library 1
/* PROTOTYPES for page definition in application header file:
float16 operator* _fmul16( float16 arg1f16, float16 arg2f16);
float16 operator/ _fdiv16( float16 arg1f16, float16 arg2f16);
float16 operator+ _fadd16( float16 arg1f16, float16 arg2f16);
float16 operator- _fsub16( float16 arg1f16, float16 arg2f16);
float16 operator= _int32ToFloat16( int32 arg32);
int16 operator= _float16ToInt16( float16 arg1f16);
bit operator< _f16_LT_f16( float16 arg1f16, float16 arg2f16);
bit operator>= _f16_GE_f16( float16 arg1f16, float16 arg2f16);
bit operator> _f16_GT_f16( float16 arg1f16, float16 arg2f16);
bit operator<= _f16_LE_f16( float16 arg1f16, float16 arg2f16);
*/

// DEFINABLE SYMBOLS (in the application code):
//#define FP_OPTIM_SPEED  // optimize for SPEED: default
//#define FP_OPTIM_SIZE   // optimize for SIZE
//#define DISABLE_ROUNDING   // disable rounding and save code space

/*  16 bit floating point format:

  address  ID
    X      a.low8  : LSB, bit 0-6 of mantissa, bit 7 is the sign bit
    X+1    a.high8 : MSB, bit 0-7 of exponent, with bias 0x7F

    bit 7 of mantissa is a hidden bit, always equal to 1
    zero (0.0) :  a.high8 = 0 (mantissa & sign ignored)

   MSB LSB
    7F 00 : 1.0   =  1.0  * 2**(0x7F-0x7F) = 1.0 * 1
    7F 80 : -1.0  = -1.0  * 2**(0x7F-0x7F) = -1.0 * 1
    80 00 : 2.0   =  1.0  * 2**(0x80-0x7F) = 1.0 * 2
    80 40 : 3.0   =  1.5  * 2**(0x80-0x7F) = 1.5 * 2
    7E 60 : 0.875 =  1.75 * 2**(0x7E-0x7F) = 1.75 * 0.5
    7F 60 : 1.75  =  1.75 * 2**(0x7E-0x7F) = 1.75 * 1
    7F 7F : 1.9921875
    00 7C : 0.0 (mantissa & sign ignored)
    01 00 : 1.175494-38 =  1.0 * 2**(0x01-0x7F)
    FE 7F : 3.389531+38 =  1.9921875 * 2**(0xFE-0x7F)
    FF 00 : +INF : positive infinity
    FF 80 : -INF : negative infinity
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


float16 operator* _fmul16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    uns8 aarg;
    W = arg1f16.low8;
    aarg = W;

    // save sign
    char sign = arg2f16.low8 ^ W;  // before first overflow test

    W = arg1f16.high8;
    if (!Zero_)
        W = arg2f16.high8;
    if (Zero_)
        goto RES0;

    arg1f16.high8 += W /* arg2f16.high8 */;
    W = FpBIAS-1;
    if (Carry)  {
        arg1f16.high8 -= W;
        if (Carry)
            goto OVERFLOW;
    }
    else  {
        arg1f16.high8 -= W;
        if (!Carry)
            goto UNDERFLOW;
    }


    aarg.7 = 1;
    arg2f16.7 = 1;

    arg1f16.low8 = 0;

    char counter = sizeof(aarg)*8;

    W = arg2f16.low8;
    do  {
        aarg = rr( aarg);
        if (Carry)
            arg1f16.low8 += W;
        arg1f16.low8 = rr( arg1f16.low8);
    } while (-- counter > 0);

    if (!arg1f16.7)  {
        // catch Carry bit that was shifted out previously
        arg1f16.low8 = rl( arg1f16.low8);
        if (arg1f16.high8 == 0)
            goto UNDERFLOW;
        arg1f16.high8 -= 1;
        W = rl( aarg);
        // restore bit behind LSB in Carry
    }

   #ifndef DISABLE_ROUNDING
    if (FpRounding  &&  Carry)  {
        arg1f16.low8 += 1;
        if (!arg1f16.low8)  {
            // Carry = 1; //OK
            arg1f16.low8 = rr( arg1f16.low8);
            arg1f16.high8 += 1;
            if (Zero_)
                goto OVERFLOW;
        }
    }
   #endif
    goto SET_SIGN;

  UNDERFLOW:
    FpUnderFlow = 1;
  RES0:
    arg1f16.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
    arg1f16.high8 = 0xFF;
  MANTISSA:
    arg1f16.low8 = 0x80;

  SET_SIGN:
    if (!(sign & 0x80))
        arg1f16.7 = 0;
    return arg1f16;
}



float16 operator/ _fdiv16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    uns8 aarg;
    W = arg1f16.low8;
    aarg = W;

    // save sign
    char sign = arg2f16.low8 ^ W;  // before first overflow test

    W = arg2f16.high8;
    if (Zero_)
        goto Div0;
    if (!arg1f16.high8)
        goto RES0;

    arg1f16.high8 -= arg2f16.high8;
    W = FpBIAS;
    if (!Carry)  {
        arg1f16.high8 += W;
        if (!Carry)
            goto UNDERFLOW;
    }
    else  {
        arg1f16.high8 += W;
        if (Carry)
            goto OVERFLOW;
    }


    aarg.7 = 1;
    arg2f16.7 = 1;

    // division: shift & add
    char counter = 8;
    arg1f16.low8 = 0;  // speedup


#if defined FP_OPTIM_SPEED || !defined FP_OPTIM_SIZE  // SPEED

    W = arg2f16.low8;
    goto START_ML;

// MAIN LOOP
    do  {
       LOOP_ML:
        if (!Carry)  {
           START_ML:
            aarg -= W;
            if (Carry)
                goto SHIFT_IN_CARRY;
            aarg += W;
            Carry = 0;
            arg1f16.low8 = rl( arg1f16.low8);
            // Carry = 0;  // ok, speedup
            aarg = rl( aarg);
            if (-- counter == 0)
                goto EXIT_LOOP;
            goto LOOP_ML;
        }
        aarg -= W;
        Carry = 1;
      SHIFT_IN_CARRY:
        arg1f16.low8 = rl( arg1f16.low8);
        // Carry = 0;  // ok, speedup
        aarg = rl( aarg);
    } while (-- counter > 0);

   EXIT_LOOP:



#else

    goto START_ML;

// MAIN LOOP
    do  {
      LOOP_ML:
        if (Carry)
            goto SUBTRACT;
      START_ML:
        W = aarg - arg2f16.low8;
        if (!Carry)
            goto SKIP_SUB;
       SUBTRACT:
        aarg -= arg2f16.low8;
        Carry = 1;
       SKIP_SUB:
        arg1f16.low8 = rl( arg1f16.low8);
        // Carry = 0;  // ok
        aarg = rl( aarg);
    } while (-- counter > 0);

#endif

    if (!arg1f16.7)  {
        if (!arg1f16.high8)
            goto UNDERFLOW;
        arg1f16.high8 --;
        counter ++;
        goto LOOP_ML;
    }

   #ifndef DISABLE_ROUNDING
    if (FpRounding)  {
        if (Carry)
            goto ADD_1;
        aarg.low8 -= arg2f16.low8;
        if (Carry)  {
          ADD_1:
            arg1f16.low8 += 1;
            if (!arg1f16.low8)  {
                arg1f16.low8 = rr( arg1f16.low8);
                arg1f16.high8 ++;
                if (!arg1f16.high8)
                    goto OVERFLOW;
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
    arg1f16.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
  SATURATE:
    arg1f16.high8 = 0xFF;
  MANTISSA:
    arg1f16.low8 = 0x80;

  SET_SIGN:
    if (!(sign & 0x80))
        arg1f16.7 = 0;
    return arg1f16;
}


float16 operator+ _fadd16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    char xtra, temp;
    char expo = arg1f16.high8 - arg2f16.high8;
    if (!Carry)  {
        expo = -expo;
        temp = arg1f16.high8;
        arg1f16.high8 = arg2f16.high8;
        arg2f16.high8 = temp;
        temp = arg1f16.low8;
        arg1f16.low8 = arg2f16.low8;
        arg2f16.low8 = temp;
    }
    if (expo > sizeof(arg1f16)*8-7)
        goto _RETURN_MF;
    if (!arg2f16.high8)
        goto _RETURN_MF;   // result is arg1f16

    xtra = 0;

    temp = arg1f16.low8;
    char sign = arg2f16.low8 ^ arg1f16.low8;
    arg1f16.7 = 1;
    arg2f16.7 = 1;

    while (1)  {
        W = 8;
        expo -= W;
        if (!Carry)
            break;
        xtra = arg2f16.low8;
        arg2f16.low8 = 0;
    }
    expo += W;
    if (expo)  {
        do  {
            Carry = 0;
            arg2f16.low8 = rr( arg2f16.low8);
            xtra = rr( xtra);
        } while (--expo > 0);
    }


    if (sign & 0x80)  {
        // SUBTRACT
        arg1f16.low8 -= arg2f16.low8;
        if (!Carry)  {  // arg2f16 > arg1f16
            arg1f16.low8 = -arg1f16.low8;
            // xtra == 0 because arg1f16.exp == arg2f16.exp
            temp ^= 0x80;  // invert sign
        }
        xtra = -xtra;
        if (xtra)
            arg1f16.low8 --;
        // adjust result left
        if (!arg1f16.low8)  {
            arg1f16.low8 = xtra;
            if (xtra == 0)
                goto RES0;
            xtra = 0;
            arg1f16.high8 -= 8;
            if (!Carry)
                goto RES0;
        }
        while (!arg1f16.7)  {
            Carry = 0;
            xtra = rl( xtra);
            arg1f16.low8 = rl( arg1f16.low8);
            arg1f16.high8 --;
            if (!arg1f16.high8)
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
        // ADD arg1f16 and arg2f16
        arg1f16.low8 += arg2f16.low8;
        if (Carry)  {
          ADJUST_RIGHT:
            arg1f16.low8 = rr( arg1f16.low8);
            xtra = rr( xtra);
            arg1f16.high8 += 1;  // exp
            if (!arg1f16.high8)
                goto OVERFLOW;
        }
       #ifndef DISABLE_ROUNDING
        if (FpRounding  &&  (xtra & 0x80))  {
          INCREMENT:
            arg1f16.low8 += 1;
            if (!arg1f16.low8)  {
                Carry = 1; // prepare for shift
                arg1f16.0 = 0;  // disable recursion
                goto ADJUST_RIGHT;
            }
        }
       #endif
    }
    goto SET_SIGN;

//  UNDERFLOW:
//    FpUnderFlow = 1;
  RES0:
    arg1f16.high8 = 0;
    goto MANTISSA;

  OVERFLOW:
    FpOverflow = 1;
    arg1f16.high8 = 0xFF;
  MANTISSA:
    arg1f16.low8 = 0x80;

  SET_SIGN:
    if (!(temp & 0x80))
        arg1f16.7 = 0;

  _RETURN_MF:
    return arg1f16;
}


// SUBTRACTION

float16 operator- _fsub16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    arg2f16.low8 ^= 0x80;
    arg1f16 += arg2f16;
    return arg1f16;
}


float16 operator=( int8 arg) @
float16 operator=( uns8 arg) @
float16 operator=( int16 arg) @
float16 operator=( uns16 arg) @
float16 operator=( int24 arg) @
float16 operator=( uns24 arg) @
float16 operator= _int32ToFloat16( int32 arg32)
{
    char expo = FpBIAS + 8 - 1;
    char xtra @ arg32.high8;
    char sign = 0;
    if (arg32 < 0)  {
        arg32 = -arg32;
        sign |= 0x80;
    }
    if (arg32.high8)  {
        expo += 8;
        arg32.low8 = arg32.midL8;
        arg32.midL8 = arg32.midH8;
        arg32.midH8 = arg32.high8;
        arg32.high8 = 0;
    }
    if (arg32.midH8)  {
        expo += 8;
        xtra = arg32.low8;
        arg32.low8 = arg32.midL8;
        arg32.midL8 = arg32.midH8;
    }
    if (arg32.midL8)  {
        expo += 8;
        xtra = arg32.low8;
        arg32.low8 = arg32.midL8;
    }
    if (!arg32.low8)
        goto _RETURN_MF;

    // arg32.low8 != 0
    goto TEST_ARG_B7;
    do  {
        xtra = rl( xtra);
        arg32.low8 = rl( arg32.low8);
        expo --;
      TEST_ARG_B7:
    } while (!arg32.7);

   #ifndef DISABLE_ROUNDING
    if (FpRounding && (xtra & 0x80))  {
        arg32.low8 += 1;
        if (!arg32.low8)  {
            arg32.low8 |= 0x80;
            expo ++;
        }
    }
   #endif

    arg32.midL8 = expo;
    if (!(sign & 0x80))
        arg32.7 = 0;

  _RETURN_MF:
    float16 rval @ arg32;
    rval.low16 = arg32.low16;
    return rval;
}


uns8 operator=( sharedM float16 arg1f16) @
int8 operator=( sharedM float16 arg1f16) @
int16 operator= _float16ToInt16( sharedM float16 arg1f16)
{
    sharedM float16 arg2f16;   // unused, but required
    char sign = arg1f16.low8;
    char expo = arg1f16.high8 - (FpBIAS-1);
    if (!Carry)
        goto RES0;
    arg1f16.7 = 1;

    arg1f16.high8 = 0;
   #ifndef DISABLE_ROUNDING
    char xtra = 0;
   #endif

    // (a): expo = 0..8 : shift 0 byte
    // (b): expo = 9..16: shift 1 byte to the left
   #if __CoreSet__ / 100 == 12
    expo -= 9;
    expo = 0xFF - expo;  // COMF (Carry unchanged)
    if (Carry)  {  // (b)
   #else
    expo = 8 - expo;
    if (!Carry)  {  // (b)
   #endif
        expo += 8;
        if (!Carry)
            goto OVERFLOW;
        arg1f16.high8 = arg1f16.low8;
        arg1f16.low8 = 0;
    }
    if (expo)  {
        do  {
            Carry = 0;
            arg1f16.high8 = rr( arg1f16.high8);
            arg1f16.low8 = rr( arg1f16.low8);
           #ifndef DISABLE_ROUNDING
            xtra = rr( xtra);
           #endif
        } while (--expo);
    }
    if (arg1f16.15)  {
       OVERFLOW:
        FpOverflow = 1;
        W = 0xFF;
        goto ASSIGNW;
       RES0:
        W = 0;
       ASSIGNW:
        arg1f16.low8 = W;
        arg1f16.high8 = W;
        arg1f16.15 = 0;
    }
    else  {
       #ifndef DISABLE_ROUNDING
        if (FpRounding && (xtra & 0x80))
            arg1f16.low8 += 1;
       #endif
        if (sign & 0x80)
            arg1f16.low16 = -arg1f16.low16;
    }
    int16 rval @ arg1f16;
    rval = arg1f16.low16;
    return rval;
}


bit operator< _f16_LT_f16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    Carry = 0;
    if (!(arg1f16.high8 | arg2f16.high8))
        return Carry;
    if (!arg1f16.7)  {
        if (arg2f16.7)
            return Carry;
        W = arg1f16.low8 - arg2f16.low8;
        genSubW( arg1f16.high8, arg2f16.high8);
        goto _RETURN_MF;
    }
    if (!arg2f16.7)
        goto _RETURN_MF;
    W = arg2f16.low8 - arg1f16.low8;
    genSubW( arg2f16.high8, arg1f16.high8);
  _RETURN_MF:
    if (Carry)
        return 0;
    return 1;
}


bit operator>= _f16_GE_f16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    Carry = 1;
    if (!(arg1f16.high8 | arg2f16.high8))
        return Carry;
    if (!arg1f16.7)  {
        if (arg2f16.7)
            return Carry;
        W = arg1f16.low8 - arg2f16.low8;
        genSubW( arg1f16.high8, arg2f16.high8);
        return Carry;
    }
    Carry = 0;
    if (!arg2f16.7)
        return Carry;
    W = arg2f16.low8 - arg1f16.low8;
    genSubW( arg2f16.high8, arg1f16.high8);
    return Carry;
}



bit operator> _f16_GT_f16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    Carry = 0;
    if (!(arg1f16.high8 | arg2f16.high8))
        return Carry;
    if (!arg1f16.7)  {
        if (arg2f16.7)
            goto _RETURN_MF;
        W = arg2f16.low8 - arg1f16.low8;
        genSubW( arg2f16.high8, arg1f16.high8);
        goto _RETURN_MF;
    }
    if (!arg2f16.7)
        return Carry;
    W = arg1f16.low8 - arg2f16.low8;
    genSubW( arg1f16.high8, arg2f16.high8);
  _RETURN_MF:
    if (Carry)
        return 0;
    return 1;
}



bit operator<= _f16_LE_f16( sharedM float16 arg1f16, sharedM float16 arg2f16)
{
    Carry = 1;
    if (!(arg1f16.high8 | arg2f16.high8))
        return Carry;
    if (!arg1f16.7)  {
        Carry = 0;
        if (arg2f16.7)
            return Carry;
        W = arg2f16.low8 - arg1f16.low8;
        genSubW( arg2f16.high8, arg1f16.high8);
        return Carry;
    }
    if (!arg2f16.7)
        return Carry;
    W = arg1f16.low8 - arg2f16.low8;
    genSubW( arg1f16.high8, arg2f16.high8);
    return Carry;
}




#undef genAdd
#undef genSub
#undef genAddW
#undef genSubW

#pragma library 0
