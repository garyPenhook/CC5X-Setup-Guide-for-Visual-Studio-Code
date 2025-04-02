#pragma library 1
/*
fixed8_24 operator* _xmul8_24( fixed8_24 arg1, fixed8_24 arg2);
fixedU8_24 operator* _xmulU8_24( fixedU8_24 arg1, fixedU8_24 arg2);
fixed8_24 operator/ _xdiv8_24( fixed8_24 arg1, fixed8_24 arg2);
fixedU8_24 operator/ _xdivU8_24( fixedU8_24 arg1, fixedU8_24 arg2);
fixed16_16 operator* _xmul16_16( fixed16_16 arg1, fixed16_16 arg2);
fixedU16_16 operator* _xmulU16_16( fixedU16_16 arg1, fixedU16_16 arg2);
fixed16_16 operator/ _xdiv16_16( fixed16_16 arg1, fixed16_16 arg2);
fixedU16_16 operator/ _xdivU16_16( fixedU16_16 arg1, fixedU16_16 arg2);
fixed24_8 operator* _xmul24_8( fixed24_8 arg1, fixed24_8 arg2);
fixedU24_8 operator* _xmulU24_8( fixedU24_8 arg1, fixedU24_8 arg2);
fixed24_8 operator/ _xdiv24_8( fixed24_8 arg1, fixed24_8 arg2);
fixedU24_8 operator/ _xdivU24_8( fixedU24_8 arg1, fixedU24_8 arg2);
*/

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

fixed8_24 operator* _xmul8_24( fixed8_24 arg1, fixed8_24 arg2)
{
    fixed8_24 rval;
    char counter = sizeof(arg1)*8;
    uns8 rvalH = 0;
    rval.high24 = 0;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)
        arg1 = -arg1;
    if (arg2 < 0)
        arg2 = -arg2;
    do  {
        arg1 = rr( arg1);
        if (Carry)  {
            rval.midL8 += arg2.low8;
            genAdd( rval.midH8, arg2.midL8);
            genAdd( rval.high8, arg2.midH8);
            genAdd( rvalH, arg2.high8);
        }
        rvalH = rr( rvalH);
        rval = rr( rval);
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        rval = -rval;
    return rval;
}



fixedU8_24 operator* _xmulU8_24( fixedU8_24 arg1, fixedU8_24 arg2)
{
    fixedU8_24 rval;
    char counter = sizeof(arg1)*8;
    uns8 rvalH = 0;
    rval.high24 = 0;
    do  {
        arg1 = rr( arg1);
        if (Carry)  {
            rval.midL8 += arg2.low8;
            genAdd( rval.midH8, arg2.midL8);
            genAdd( rval.high8, arg2.midH8);
            genAdd( rvalH, arg2.high8);
        }
        rvalH = rr( rvalH);
        rval = rr( rval);
        counter = decsz(counter);
    } while (1);
    return rval;
}



fixed8_24 operator/ _xdiv8_24( fixed8_24 arg1, fixed8_24 arg2)
{
    fixedU8_24 rm = 0;
    char counter = sizeof(arg1)*8+24+1;
    char c2 = sizeof(arg1)*8 + 1;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)  {
       INVERT_ML:
        arg1 = -arg1;
        if (c2 & 0x80)
            goto EXIT;
    }
    if (arg2 < 0)
        arg2 = -arg2;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
        rm.high8 = W;
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        goto INVERT_ML;
   EXIT:
    return arg1;
}



fixedU8_24 operator/ _xdivU8_24( fixedU8_24 arg1, fixedU8_24 arg2)
{
    fixedU8_24 rm = 0;
    char counter = sizeof(arg1)*8+24+1;
    char c2 = sizeof(arg1)*8 + 1;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        if (Carry)
            goto SUBTRACT;
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
       SUBTRACT:
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        genSub( rm.high8, arg2.high8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    return arg1;
}


fixed16_16 operator* _xmul16_16( fixed16_16 arg1, fixed16_16 arg2)
{
    fixed16_16 rval;
    char counter = sizeof(arg1)*8;
    uns16 rvalH = 0;
    rval.high16 = 0;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)
        arg1 = -arg1;
    if (arg2 < 0)
        arg2 = -arg2;
    do  {
        arg1 = rr( arg1);
        if (Carry)  {
            rval.midH8 += arg2.low8;
            genAdd( rval.high8, arg2.midL8);
            genAdd( rvalH.low8, arg2.midH8);
            genAdd( rvalH.high8, arg2.high8);
        }
        rvalH = rr( rvalH);
        rval = rr( rval);
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        rval = -rval;
    return rval;
}



fixedU16_16 operator* _xmulU16_16( fixedU16_16 arg1, fixedU16_16 arg2)
{
    fixedU16_16 rval;
    char counter = sizeof(arg1)*8;
    uns16 rvalH = 0;
    rval.high16 = 0;
    do  {
        arg1 = rr( arg1);
        if (Carry)  {
            rval.midH8 += arg2.low8;
            genAdd( rval.high8, arg2.midL8);
            genAdd( rvalH.low8, arg2.midH8);
            genAdd( rvalH.high8, arg2.high8);
        }
        rvalH = rr( rvalH);
        rval = rr( rval);
        counter = decsz(counter);
    } while (1);
    return rval;
}



fixed16_16 operator/ _xdiv16_16( fixed16_16 arg1, fixed16_16 arg2)
{
    fixedU16_16 rm = 0;
    char counter = sizeof(arg1)*8+16+1;
    char c2 = sizeof(arg1)*8 + 1;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)  {
       INVERT_ML:
        arg1 = -arg1;
        if (c2 & 0x80)
            goto EXIT;
    }
    if (arg2 < 0)
        arg2 = -arg2;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
        rm.high8 = W;
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        goto INVERT_ML;
   EXIT:
    return arg1;
}



fixedU16_16 operator/ _xdivU16_16( fixedU16_16 arg1, fixedU16_16 arg2)
{
    fixedU16_16 rm = 0;
    char counter = sizeof(arg1)*8+16+1;
    char c2 = sizeof(arg1)*8 + 1;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        if (Carry)
            goto SUBTRACT;
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
       SUBTRACT:
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        genSub( rm.high8, arg2.high8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    return arg1;
}



fixed24_8 operator* _xmul24_8( fixed24_8 arg1, fixed24_8 arg2)
{
    fixed24_8 rval;
    char counter = sizeof(arg1)*8;
    uns8 rvalL = 0;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)
        arg1 = -arg1;
    if (arg2 < 0)
        arg2 = -arg2;
    do  {
        Carry = 0;
        rvalL = rl( rvalL);
        rval = rl( rval);
        arg1 = rl( arg1);
        if (Carry)  {
            rvalL += arg2.low8;
            genAdd( rval.low8, arg2.midL8);
            genAdd( rval.midL8, arg2.midH8);
            genAdd( rval.midH8, arg2.high8);
            if (Carry)
                rval.high8++;
        }
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        rval = -rval;
    return rval;
}



fixedU24_8 operator* _xmulU24_8( fixedU24_8 arg1, fixedU24_8 arg2)
{
    fixedU24_8 rval;
    char counter = sizeof(arg1)*8;
    uns8 rvalL = 0;
    do  {
        Carry = 0;
        rvalL = rl( rvalL);
        rval = rl( rval);
        arg1 = rl( arg1);
        if (Carry)  {
            rvalL += arg2.low8;
            genAdd( rval.low8, arg2.midL8);
            genAdd( rval.midL8, arg2.midH8);
            genAdd( rval.midH8, arg2.high8);
            if (Carry)
                rval.high8++;
        }
        counter = decsz(counter);
    } while (1);
    return rval;
}



fixed24_8 operator/ _xdiv24_8( fixed24_8 arg1, fixed24_8 arg2)
{
    fixedU24_8 rm = 0;
    char counter = sizeof(arg1)*8+8+1;
    char c2 = sizeof(arg1)*8 + 1;
    char sign = arg1.high8 ^ arg2.high8;
    if (arg1 < 0)  {
       INVERT_ML:
        arg1 = -arg1;
        if (c2 & 0x80)
            goto EXIT;
    }
    if (arg2 < 0)
        arg2 = -arg2;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
        rm.high8 = W;
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    if (sign & 0x80)
        goto INVERT_ML;
   EXIT:
    return arg1;
}


fixedU24_8 operator/ _xdivU24_8( fixedU24_8 arg1, fixedU24_8 arg2)
{
    fixedU24_8 rm = 0;
    char counter = sizeof(arg1)*8+8+1;
    char c2 = sizeof(arg1)*8 + 1;
    goto ENTRY_ML;
    do  {
        c2 = decsz(c2);
        btsc(c2.7);
        Carry = 0;
        rm = rl( rm);
        if (Carry)
            goto SUBTRACT;
        W = rm.low8 - arg2.low8;
        genSubW( rm.midL8, arg2.midL8);
        genSubW( rm.midH8, arg2.midH8);
        genSubW( rm.high8, arg2.high8);
        if (!Carry)
            goto ENTRY_ML;
       SUBTRACT:
        rm.low8 -= arg2.low8;
        genSub( rm.midL8, arg2.midL8);
        genSub( rm.midH8, arg2.midH8);
        genSub( rm.high8, arg2.high8);
        Carry = 1;
       ENTRY_ML:
        arg1 = rl( arg1);
        counter = decsz(counter);
    } while (1);
    return arg1;
}

#undef genAdd
#undef genSub
#undef genAddW
#undef genSubW

#pragma library 0
