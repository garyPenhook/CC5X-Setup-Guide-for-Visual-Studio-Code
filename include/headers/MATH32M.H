// SIZE & SPEED

#pragma library 1
/*
uns16 operator* _multM8_8( uns8 arg1, char W);
uns16 operator* _multM16_16( uns16 arg1, uns16 arg2);
uns32 operator* _multUM32_8( uns32 arg1, uns8 arg2);
*/

int8 operator*( int8 arg1, int8 arg2) @

uns16 operator* _multM8_8( uns8 arg1, char W)
// 37 INSTRUCTIONS
// CYCLES: 4*8 + 4 = 36 (+RETURN)
{
    uns16 rval = 0;
    Carry = 0;
   #define addRR(rval,arg,bit) if(arg&((uns8)1<<bit)) rval.high8+=W; rval=rr(rval);
    addRR( rval, arg1, 0);
    addRR( rval, arg1, 1);
    addRR( rval, arg1, 2);
    addRR( rval, arg1, 3);
    addRR( rval, arg1, 4);
    addRR( rval, arg1, 5);
    addRR( rval, arg1, 6);
    addRR( rval, arg1, 7);
   #undef addRR
    return rval;
}



int16 operator*( int16 arg1, int16 arg2) @

uns16 operator* _multM16_16( uns16 arg1, uns16 arg2)
// 23 INSTRUCTIONS
// CYCLES: 3*37 + 27 = 148 (+RETURN)
// CYCLES: 100 (+RETURN) if 16*8 bit
// CYCLES: 56 (+RETURN) if 8*8 bit
{
    uns16 rval;
    rval = (uns16) arg1.low8 * arg2.low8;
    W = arg1.high8;
    if (W)
        rval.high8 += W * arg2.low8;
    W = arg2.high8;
    if (W)
        rval.high8 += W * arg1.low8;
    return rval;
}


uns32 operator*( uns8 arg1, uns32 arg2) exchangeArgs @

uns32 operator* _multUM32_8( uns32 arg1, uns8 arg2)
// 43 INSTRUCTIONS
// CYCLES: 4*37 + 48 = 196 (+RETURN)
// CYCLES: 154 if 24*8 bit
{
    char tmp = arg1.high8;
    arg1.high16 = (uns16) arg1.midH8 * arg2;
    W = tmp;
    if (W)
        arg1.high8 += W * arg2;
    tmp = arg1.midL8;
    arg1.low16 = (uns16) arg1.low8 * arg2;
    arg1.high24 += (uns16) tmp * arg2;
    return arg1;
}

#pragma library 0
