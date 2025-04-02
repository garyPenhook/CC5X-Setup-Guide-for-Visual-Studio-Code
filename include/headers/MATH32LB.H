// *************************************************
// 32 bit floating point math functions
// Copyright (c) B Knudsen Data, Norway, 2000 - 2009
// *************************************************

#pragma library 1
/* PROTOTYPES for page definition in application header file:
float32 log( float32 arg1f32);
float32 log10( float32 arg1f32);
float32 exp10( float32 arg1f32);
float32 exp( float32 arg1f32);
float32 cos( float32 arg1f32);
float32 sin( float32 arg1f32);
float32 sqrt( float32 arg1f32);
*/

#ifndef FpFlags_defined
 #error The basic 32 bit floating point math library must be included first
#endif

#if __CoreSet__ / 100 == 12
 #error Math functions (exp,log,..) are not adapted to 12 bit core devices
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


float32 log( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;

    if (arg1f32.midH8 & 0x80)  // test for negative argument
        goto _DOMERR;
    if (!arg1f32.high8)   // test for zero argument
        goto _DOMERR;

    char savedFlags = FpFlags;   //  save rounding flag
    FpFlags |= 0x40;  //  enable rounding

    char xexp = arg1f32.high8 - (FpBIAS-1);
    arg1f32.high8 = FpBIAS-1;

    arg2f32 = 1.0;

    //  .70710678118655 = 7E3504F3
    W = arg1f32.low8 - 0xF3;
    W = 0x04;
    if (!Carry)
        W = 0x04+1;
    W = arg1f32.midL8 - W;
    W = 0x35;
    if (!Carry)
        W = 0x35+1;
    W = arg1f32.midH8 - W;

    if (Carry)
        arg1f32 -= arg2f32;
    else  {
        arg1f32.high8 += 1;  /* arg1f32 *= 2; */
        arg1f32 -= arg2f32;
        xexp -= 1;
    }

    float32 d = arg1f32;  //  save z

    // Q(z)
    arg1f32 += 0.33339502905E+1; /* LOG32Q1 */
    arg1f32 *= d;
    arg1f32 += 0.24993759223E1;  /* LOG32Q0 */
    float32 c = arg1f32;

    // minimax rational approximation  z-.5*z*z+z*(z*z*P(z)/Q(z))
    // P(z)
    arg1f32 = d;
    arg1f32 *= 0.48646956294; /* LOG32P1 */
    arg1f32 += 0.83311400452; /* LOG32P0 */
    c = arg1f32 / c;   //  P(z)/Q(z)

    arg1f32.high8 = d.high8;
    arg2f32.high8 = d.high8;
    arg1f32.midH8 = d.midH8;
    arg2f32.midH8 = d.midH8;
    arg1f32.midL8 = d.midL8;
    arg2f32.midL8 = d.midL8;
    arg1f32.low8 = d.low8;
    arg2f32.low8 = d.low8;
    arg1f32 *= arg2f32;       // z * z;

    float32 e = arg1f32;
    arg1f32 *= c;          //  z*z*P(z)/Q(z)
    arg1f32 *= d;          //  z*(z*z*P(z)/Q(z))

    arg2f32 = e;
    if (arg2f32.high8)
        arg2f32.high8 --;  // arg2f32 *= 0.5;
    arg1f32 -= arg2f32;       //  -.5*z*z + z*(z*z*P(z)/Q(z))
    arg1f32 += d;          //  z -.5*z*z + z*(z*z*P(z)/Q(z))

    if (!xexp)
        goto _RETURN_MF;

    e = arg1f32;  //  save

    // integer to floating point conversion
    arg1f32 = (int8) xexp;

    d = arg1f32;  //  save k

    arg1f32 *= -0.000212194440055;

    arg1f32 += e;   //  log(1+z) + k*log(2)

    e = arg1f32;  //  save

    arg1f32 = d * 0.693359375;

    arg1f32 += e;      //  log(1+z) + k*log(2)

    if (!(savedFlags & 0x40))
        FpFlags &= ~0x40;   //  restore rounding flag
    goto _RETURN_MF;

  _DOMERR:
    FpDomainError = 1;   //  domain error

  _RETURN_MF:
    return arg1f32;
}



float32 log10( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;      // allocation 'trick'

    char flags = FpFlags;
    FpFlags |= 0x40;

    arg1f32 = log( arg1f32);

    arg1f32 *= 0.43429448190325;  //  log10(e);

    if (!(flags & 0x40))
        FpFlags &= ~0x40;

    return arg1f32;
}





char floorMaskTable32( char i)
{
    if (i & 4)  {
        if (i & 2)  {
            if (i & 1)
                return 128;
            return 192;
        }
        if (i & 1)
            return 224;
        return 240;
    }
    if (i & 2)  {
        if (i & 1)
            return 248;
        return 252;
    }
    if (i & 1)
        return 254;
    return 255;
}

float32 floor32( sharedM float32 arg1f32)
{
    if (!arg1f32.high8)  //  test for zero argument
        goto _RETURN_MF;

    uns24 ma = arg1f32.low24;  //  save mantissa

    W = arg1f32.high8 - 127;
    char tmp = W;
    if (tmp & 0x80)
        goto FLOOR32ZERO;

    //  save number of zero bits in TEMP.midH8
    W = 23 - W;

    char tmpa = W;
    tmp = W;

    if (tmp & 0x10)  // LSB+1+3 ; divide by eight
        goto FLOOR32MASKH;

    if (tmp & 0x8)  // LSB+3
        goto FLOOR32MASKM;


    W = floorMaskTable32( tmpa);    //  get mask
    arg1f32.low8 &= W;
    if (!(arg1f32.midH8 & 0x80))  //  if negative, round down
        goto _RETURN_MF;

    char arg1B7 = W;
    if (!(arg1f32.low8 - ma.low8))
        goto _RETURN_MF;

    tmp = ~arg1B7;
    arg1f32.low8 += tmp + 1;
    if (Zero_)
        arg1f32.midL8 += 1;
    if (Zero_)
        arg1f32.midH8 += 1;

    //  has rounding caused carryout?
    if (!Zero_)
        goto _RETURN_MF;
    arg1f32.midH8 = rr( arg1f32.midH8);
    arg1f32.midL8 = rr( arg1f32.midL8);
    arg1f32.low8 = rr( arg1f32.low8);

    //  check for overflow
    arg1f32.high8 = incsz( arg1f32.high8);
    goto _RETURN_MF;
    goto OVERFLOW;


  FLOOR32MASKM:
    W = floorMaskTable32( tmpa);  //  get mask
    arg1f32.midL8 &= W;
    arg1f32.low8 = 0;

    //  if negative, round down
    if (!(arg1f32.midH8 & 0x80))
        goto _RETURN_MF;
    arg1B7 = W;
    if (( arg1f32.low8 - ma.low8) != 0)
        goto FLOOR32RNDM;
    if (!(arg1f32.midL8 - ma.midL8))
        goto _RETURN_MF;

  FLOOR32RNDM:
    tmp = ~arg1B7;
    arg1f32.midL8 += tmp + 1;
    if (Zero_)
        arg1f32.midH8 += 1;

    //  has rounding caused carryout?
    if (!Zero_)
        goto _RETURN_MF;
    arg1f32.midH8 = rr( arg1f32.midH8);
    arg1f32.midL8 = rr( arg1f32.midL8);
    arg1f32.low8 = rr( arg1f32.low8);

    //  check for overflow
    arg1f32.high8 = incsz( arg1f32.high8);
    goto _RETURN_MF;
    goto OVERFLOW;


  FLOOR32MASKH:
    W = floorMaskTable32( tmpa);    //  get mask
    arg1f32.midH8 &= W;
    arg1f32.midL8 = 0;
    arg1f32.low8 = 0;

    //  if negative, round down
    if (!(arg1f32.midH8 & 0x80))
        goto _RETURN_MF;

    arg1B7 = W;
    if (( arg1f32.low8 - ma.low8) != 0)
        goto FLOOR32RNDH;
    if (( arg1f32.midL8 - ma.midL8) != 0)
        goto FLOOR32RNDH;
    if (!(arg1f32.midH8 - ma.midH8))
        goto _RETURN_MF;

  FLOOR32RNDH:
    tmp = ~arg1B7;
    arg1f32.midH8 += tmp + 1;

    //  has rounding caused carryout?
    if (!Carry)
        goto _RETURN_MF;
    arg1f32.midH8 = rr( arg1f32.midH8);
    arg1f32.midL8 = rr( arg1f32.midL8);

    //  check for overflow
    arg1f32.high8 = incsz( arg1f32.high8);
    goto _RETURN_MF;
    goto OVERFLOW;



  FLOOR32ZERO:
    if (!(arg1f32.midH8 & 0x80))
        goto RES0;
    return -1.0;

  RES0:
    W = 0;
    goto ASSIGNW;

  OVERFLOW:
    FpOverflow = 1;
    W = 0xFF;
  ASSIGNW:
    arg1f32.low8 = W;
    arg1f32.midL8 = W;
    arg1f32.midH8 = W;
    arg1f32.high8 = W;

  _RETURN_MF:
    return arg1f32;
}


float32 exp10( sharedM float32 arg1f32)
//  Maximum argument :  38.531839445 = log10(2**128)
//  Minimum argument : -37.9297794537 = log10(2**-126)
{
    sharedM float32 arg2f32;      // allocation 'trick'
    float32 c, d;
    char xexp;

    if (( arg1f32.high8 - 92) & 0x80)
        goto EXP1;   //  return e**x = 1

    W = 132 - arg1f32.high8;
    if (!Carry)
        goto _DOMERR;
    if (!Zero_)
        goto ARGOK;

    if (!(arg1f32.midH8 & 0x80))  {
        //  positive domain check

        W = 26 - arg1f32.midH8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 32 - arg1f32.midL8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 155 - arg1f32.low8;
        if (!Carry)
            goto _DOMERR;
    }
    else  {
        //  negative domain check
        W = 151 - arg1f32.midH8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 184 - arg1f32.midL8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 24 - arg1f32.low8;
        if (!Carry)
            goto _DOMERR;
    }

   ARGOK:

    char savedFlags = FpFlags;
    FpFlags |= 0x40;  //  enable rounding

    // Range reduction
    c = arg1f32;  //  save x
    arg1f32 *= 3.32192809489;  //  1/log10(2) = 3.32192809489
    arg1f32 += 0.5;  //  k = [ x / log10(2) + .5 ]
    arg1f32 = floor32( arg1f32);

    float32 e = arg1f32; //  save float k
    FpFlags &= ~0x40;
    // floating point to integer conversion
    xexp = arg1f32; //  k = [ x / ln(2) + .5 ]
    FpFlags |= 0x40;
    arg1f32 = e * -0.301025390625; //  c1
    d = arg1f32 + c;
    arg1f32 = e * -4.6050389811952113E-6;  // c2
    arg1f32 += d;
    d = arg1f32;  //  save f

    if (!(d.midH8 & 0x80))  {
        // minimax approximation on [0,log10(2)/2]
        arg1f32 *= 6.388992868121E-1;/* EXP1032H5 */
        arg1f32 += 1.154596329197E0; /* EXP1032H4 */
        arg1f32 *= d;
        arg1f32 += 2.035920309947E0; /* EXP1032H3 */
        arg1f32 *= d;
        arg1f32 += 2.650909138708E0; /* EXP1032H2 */
        arg1f32 *= d;
        arg1f32 += 2.302585504840E0; /* EXP1032H1 */
    }
    else  {
        // minimax approximation on [-log10(2)/2,0]
        arg1f32 *= 4.544952589676E-1;/* EXP1032L5 */
        arg1f32 += 1.157459289066E0; /* EXP1032L4 */
        arg1f32 *= d;
        arg1f32 += 2.033640565225E0; /* EXP1032L3 */
        arg1f32 *= d;
        arg1f32 += 2.650914554552E0; /* EXP1032L2 */
        arg1f32 *= d;
        arg1f32 += 2.302584716116E0; /* EXP1032L1 */
    }

    arg1f32 *= d;
    if (!(savedFlags & 0x40))
        FpFlags &= ~0x40;
    arg1f32 += 1.0; /* EXP1032H0/EXP1032L0 */

    arg1f32.high8 += xexp;
    goto _RETURN_MF;

  EXP1:
    arg1f32 = 1.0;   //  return 10**x = 1.0
    goto _RETURN_MF;

  _DOMERR:
    FpDomainError = 1;   //  domain error

  _RETURN_MF:
    return arg1f32;
}


float32 exp( sharedM float32 arg1f32)
// Maximum argument : 88.7228391117 = log(2**128)
// Minimum argument : -87.3365447506 = log(2**-126)
{
    sharedM float32 arg2f32;
    float32 c, d;
    char xexp;

    if (( arg1f32.high8 - 94) & 0x80)
        goto EXP1;   //  return e**x = 1

    W = 133 - arg1f32.high8;
    if (!Carry)
        goto _DOMERR;
    if (!Zero_)
        goto ARGOK;

    if (!(arg1f32.midH8 & 0x80))  {

        W = 49 - arg1f32.midH8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 114 - arg1f32.midL8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 24 - arg1f32.low8;
        if (!Carry)
            goto _DOMERR;
    }
    else {

        W = 174 - arg1f32.midH8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 172 - arg1f32.midL8;
        if (!Carry)
            goto _DOMERR;
        if (!Zero_)
            goto ARGOK;

        W = 80 - arg1f32.low8;
        if (!Carry)
            goto _DOMERR;
    }

  ARGOK:

    char savedFlags = FpFlags;
    FpFlags |= 0x40;  //  enable rounding

    // Range reduction

    c = arg1f32;  //  save x
    arg1f32 *= 1.44269504089;     //  1/ln(2) = 1.44269504089
    arg1f32 += 0.5; //  k = [ x / ln(2) + .5 ]
    arg1f32 = floor32( arg1f32);

    float32 e = arg1f32; //  save float k
    // floating point to integer conversion
    xexp = arg1f32; //  k = [ x / ln(2) + .5 ]
    arg1f32 = e * -0.693359375; // c1
    d = arg1f32 + c;
    arg1f32 = e * 0.00021219444005;  // c2
    arg1f32 += d;
    d = arg1f32;  //  save f

    if (!(d.midH8 & 0x80))  {
        arg1f32 *= 0.989943653774E-2; /* EXP32H5 */
        arg1f32 += 0.410473706887E-1; /* EXP32H4 */
        arg1f32 *= d;
        arg1f32 += 0.166777360103;    /* EXP32H3 */
        arg1f32 *= d;
        arg1f32 += 0.499991163105;    /* EXP32H2 */
        arg1f32 *= d;
        arg1f32 += 1.00000025499;     /* EXP32H1 */
    }
    else  {
        arg1f32 *= 0.699995870637E-2; /* EXP32L5 */
        arg1f32 += 0.411548782678E-1; /* EXP32L4 */
        arg1f32 *= d;
        arg1f32 += 0.166574299807;    /* EXP32L3 */
        arg1f32 *= d;
        arg1f32 += 0.499992371926;    /* EXP32L2 */
        arg1f32 *= d;
        arg1f32 += 0.999999766814;    /* EXP32L1 */
    }
    arg1f32 *= d;
    arg1f32 += 1.0;   /* EXP32H0 or EXP32L0 */
    arg1f32.high8 += xexp;

    if (!(savedFlags & 0x40))
        FpFlags &= ~0x40;   //  restore rounding flag
    goto _RETURN_MF;

  EXP1:
    arg1f32 = 1.0;   //  return 10**x = 1.0
    goto _RETURN_MF;

  _DOMERR:
    FpDomainError = 1;   //  domain error

  _RETURN_MF:
    return arg1f32;
}



float32 cosin32( sharedM float32 arg1f32, sharedM float32 arg2f32, char cosinus)
{
    float32 c, d;
    char j;

    char savedFlags = FpFlags;  //  save rounding flag
    FpFlags |= 0x40;  //  enable rounding

    char csign = 0;    //  initialize sign

    if (!cosinus  &&  (arg1f32.midH8 & 0x80))
        csign |= 0x80;

    arg1f32.midH8 &= ~0x80;  //  use |x|

    //  loss threshold check: arg1f32 <= +512.0, arg1f32 >= -512.0
    if (arg1f32.high8 >= 0x88)
        FpDomainError = 1;   //  domain error

    c = arg1f32;  //  save |x|

    arg1f32 *= 1.27323954474;   // 4/pi

    FpFlags &= ~0x40;

    //  y = [ |x| * (4/pi) ]
    arg1f32.low24 = arg1f32;  // floating point to integer conversion

    FpFlags |= 0x40;

    if (arg1f32.low8 & 0x1)
        arg1f32.low24 += 1;  // make arg1f32 even

    //  j = y mod 8
    j = arg1f32.low8 & 7;  // 0,2,4,6
    if (j >= 4)  {
        csign ^= 128;
        j -= 4;
    }

    arg1f32 = arg1f32.low24;  // integer to floating point conversion

    //  save y in DARG
    d.high8 = arg1f32.high8;
    if (Zero_)
        goto ZEQX;
    d.low24 = arg1f32.low24;

    arg1f32 *= -7.853851318359375e-01;
    c = arg1f32 + c;    //  z1 = |x| - y * (p1)
    arg1f32 = d * -1.303153112530708e-05;
    c = arg1f32 + c;    //  z2 = z1 - y * (p2)
    arg1f32 = d * -3.038469476363188e-11;
    arg1f32 += c;       //  z3 = z2 - y * (p3)

    //  save z in c
    c.high8 = arg1f32.high8;
    arg2f32.high8 = arg1f32.high8;
    c.midH8 = arg1f32.midH8;
    arg2f32.midH8 = arg1f32.midH8;
    c.midL8 = arg1f32.midL8;
    arg2f32.midL8 = arg1f32.midL8;
    c.low8 = arg1f32.low8;
    arg2f32.low8 = arg1f32.low8;

    goto POLYNOM;

   ZEQX:
    arg1f32.high8 = c.high8;
    arg2f32.high8 = c.high8;
    arg1f32.midH8 = c.midH8;
    arg2f32.midH8 = c.midH8;
    arg1f32.midL8 = c.midL8;
    arg2f32.midL8 = c.midL8;
    arg1f32.low8 = c.low8;
    arg2f32.low8 = c.low8;

   POLYNOM:

    arg1f32 *= arg2f32;   // z * z
    d = arg1f32;   //  save z * z

    if ((( rr( j) ^ j) & 0x1) ^ cosinus)  {
        // minimax polynomial coefficients for
        // cos(z) = 1 -.5*z**2 + z**4*q(z**2) on [-pi/4,pi/4]
        arg1f32 *= 2.443315706066392E-5; /* COS32D2 */
        arg1f32 += -1.388731625438419E-3; /* COS32D1 */
        arg1f32 *= d;
        arg1f32 += 4.166664568297614E-2; /* COS32D0 */
        arg1f32 *= d;
        arg1f32 *= d;
        arg2f32 = d;
        if (arg2f32.high8)
            arg2f32.high8 -= 1;   // arg2f32 *= 0.5
        arg1f32 -= arg2f32;
        FpFlags &= ~0x40;
        arg1f32 += 1.0;
    }
    else  {
        // minimax polynomial coefficients for
        // sin(z) = z+z*(z**2)*p(z**2) on [-pi/4,pi/4]
        arg1f32 *= 2.718121647219611E-6; /* SIN32D3 */
        arg1f32 += -1.983931227180460E-4; /* SIN32D2 */
        arg1f32 *= d;
        arg1f32 += 8.333329304850749E-3; /* SIN32D1 */
        arg1f32 *= d;
        arg1f32 += -1.666666664079712E-1; /* SIN32D0 */
        arg1f32 *= d;
        arg1f32 *= c;
        FpFlags &= ~0x40;
        arg1f32 += c;
    }

    W = 128;  // LSB+1
    if (cosinus  &&  (j & 0x2))
        csign ^= W;
    if (csign & 0x80)
        arg1f32.midH8 ^= W;

    if (savedFlags & 0x40)
        FpFlags |= 0x40;  //  restore rounding flag
    return arg1f32;
}


float32 cos( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;      // allocation 'trick'
    arg1f32 = cosin32( arg1f32, arg2f32, 1);
    return arg1f32;
}



float32 sin( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;      // allocation 'trick'
    arg1f32 = cosin32( arg1f32, arg2f32, 0);
    return arg1f32;
}



#if 1

float32 sqrt( float32 arg)
// Copyright (c) Jim van Zee, Seattle, WA., 2004
{
    uns8 arg_exp @ arg.high8;    // arg exponent (offset by FpBIAS)
    uns32 root = 0;              // result (treated as an integer)
    float32 sqrtf @ root;        // result (treated as a float)
    uns32 remain;
    uns8 nr_bits;

    if (arg.midH8 & 0x80) { // test for negative argument
        FpDomainError=1;
        goto END;           // negative #s return '0'
    }
    if (!arg_exp)
        goto END;           // 0->0 (all bytes are 0)

    arg.23 = 1;             // restore hidden bit
    remain = 0;             // clear remainder
    nr_bits = 24;           // initialize bit count

    // Here's a 'tricky bit': 'even' exponents work out OK, but 'odd'
    // exponents need one less shift initially in order to align the
    // bits in a 'powers-of-four' pattern (two-bits-at-a-time).

    btss(arg_exp.0);          // skip if exponent is odd
    do {
        remain.31=1;          // set 2x shift flag
        root = rl(root);        // exponent= 'spill byte'
        root.0=1;               // add '1' to form '2N+1'
        root.1=0;               // clear next root bit
        do {
            arg.low24 = rl(arg.low24); // shift mantissa into 'remain'
            remain = rl(remain);       // two-bits-at-a-time (add 0's)
        } while(Carry);         // Carry=1 the first time
        arg.0=0;                // clear the carry-in bit

        // now compare root and remainder; if remain >= root, subtract
        // to get the new remainder & set bit=1; otherwise leave bit=0.

        //        if (remain >= root) // 4-byte compare
        //        {   remain -= root; // update remainder
        //            root.1 = 1;   } // set this bit = 1

        W = remain.low8 - root.low8;  // compare remain w/root
        genSubW( remain.midL8, root.midL8);
        genSubW( remain.midH8, root.midH8);
        genSubW( remain.high8, root.high8);

        // If remain >= root, the next bit is '1', otherwise '0'
        if (Carry) {          // remain -= root;
            remain.high8 = W;   // save 'spill byte'
            remain.low8 -= root.low8;   // do subtraction
            genSub( remain.midL8, root.midL8);
            genSub( remain.midH8, root.midH8);
            root.1 = 1; // note: lsb is bit1, not bit0!
        }

    } while (--nr_bits); // 24 bit mantissa

    // Finally unshift root (only need to do 24 bits, since msb->0!)
    root.low24 = rr(root.low24);       // '2N+1' -> 'N'
    root.23 = 0;            // clear hidden bit

    // and set exponent = arg_exp/2 (we used this as the spill byte)
    arg_exp += FpBIAS;      // double the bias
    root.high8=rr(arg_exp); // root exp = arg_exp/2+FpBIAS
  END:
    return sqrtf;           // neg & zero args return 0
}

#else

float32 sqrt( sharedM float32 arg1f32)
{
    sharedM float32 arg2f32;      // allocation 'trick'

    if (arg1f32.midH8 & 0x80)    // test for negative argument
        goto _DOMERR;
    if (!arg1f32.high8)          // return if argument zero
        goto _RETURN_MF;

    char cexp = arg1f32.high8;    // save exponent in cexp
    char savedFLAGS = FpFlags;
    FpFlags |= 0x40;           // enable rounding

    arg1f32.high8 = FpBIAS;   // compute z
    arg1f32 -= 1.0;               // z = f - 1.0
    float32 d = arg1f32;

    // Q(z)
    arg1f32 += 3.294831307E1; /* SQRT32Q2 */
    arg1f32 *= d;
    arg1f32 += 1.333544312E2; /* SQRT32Q1 */
    arg1f32 *= d;
    arg1f32 += 1.210947497E2; /* SQRT32Q0 */

    float32 e = arg1f32;      // save Q(z)
    arg1f32 = d;              // restore z

    // P(z)
    arg1f32 *= 7.370062896E0; /* SQRT32P2 */
    arg1f32 += 5.154073142E1; /* SQRT32P1 */
    arg1f32 *= d;
    arg1f32 += 6.054736157E1; /* SQRT32P0 */

    arg1f32 /= e;   // P(z)/Q(z)

    arg1f32 *= d;   // z*P(z)/Q(z)
    arg1f32 += 1.0; // sqrt(1+z)=1+z*P(z)/Q(z)

    if (!(cexp & 0x1))  // is cexp even or odd?
        arg1f32 *= 1.41421356237;  // sqrt(2)

    // divide exponent by two
    cexp += 127;
    arg1f32.high8 = rr( cexp);

    if (!(savedFLAGS & 0x40))
        FpFlags &= ~0x40;

    goto _RETURN_MF;

  _DOMERR:
    FpDomainError = 1;   //  domain error

  _RETURN_MF:
    return arg1f32;
}
#endif

#undef genAdd
#undef genSub
#undef genAddW
#undef genSubW

#pragma library 0
