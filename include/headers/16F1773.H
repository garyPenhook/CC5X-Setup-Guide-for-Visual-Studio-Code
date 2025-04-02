// HEADER FILE
#pragma chip PIC16F1773, core 14 enh, code 4096, ram 32 : 0x32F // 512 bytes
#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_enh_style

#pragma wideConstData p

/* Predefined:
  char *FSR0, *FSR1;
  char INDF0, INDF1;
  char FSR0L, FSR0H, FSR1L, FSR1H;
  char W, WREG;
  char PCL, PCLATH, BSR, STATUS, INTCON;
  bit Carry, DC, Zero_, PD, TO;
*/

char PORTA   @ 0x0C;
char PORTB   @ 0x0D;
char PORTC   @ 0x0E;

char PORTE   @ 0x10;
char PIR1    @ 0x11;
char PIR2    @ 0x12;
char PIR3    @ 0x13;
char PIR4    @ 0x14;
char PIR5    @ 0x15;
char PIR6    @ 0x16;
char TMR0    @ 0x17;
char TMR1L   @ 0x18;
char TMR1H   @ 0x19;
char T1CON   @ 0x1A;
char T1GCON  @ 0x1B;
char TMR3L   @ 0x1C;
char TMR3H   @ 0x1D;
char T3CON   @ 0x1E;
char T3GCON  @ 0x1F;

char TRISA   @ 0x8C;
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;

char TRISE   @ 0x90;
char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;
char PIE4    @ 0x94;
char PIE5    @ 0x95;
char PIE6    @ 0x96;
char OPTION_REG @ 0x97;
char PCON    @ 0x98;
char WDTCON  @ 0x99;
char OSCTUNE @ 0x9A;
char OSCCON  @ 0x9B;
char OSCSTAT @ 0x9C;
char BORCON  @ 0x9D;
char FVRCON  @ 0x9E;
char ZCD1CON @ 0x9F;

char LATA    @ 0x10C;
char LATB    @ 0x10D;
char LATC    @ 0x10E;

char CMOUT   @ 0x111;
char CM1CON0 @ 0x112;
char CM1CON1 @ 0x113;
char CM1NSEL @ 0x114;
char CM1PSEL @ 0x115;
char CM2CON0 @ 0x116;
char CM2CON1 @ 0x117;
char CM2NSEL @ 0x118;
char CM2PSEL @ 0x119;
char CM3CON0 @ 0x11A;
char CM3CON1 @ 0x11B;
char CM3NSEL @ 0x11C;
char CM3PSEL @ 0x11D;

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;
char ANSELC  @ 0x18E;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;

#ifdef _16F1773
char VREGCON @ 0x197;
#endif

char RC1REG  @ 0x199;
char TX1REG  @ 0x19A;
char SP1BRGL @ 0x19B;
char SP1BRGH @ 0x19C;
char RC1STA  @ 0x19D;
char TX1STA  @ 0x19E;
char BAUD1CON @ 0x19F;

char WPUA    @ 0x20C;
char WPUB    @ 0x20D;
char WPUC    @ 0x20E;

char WPUE    @ 0x210;
char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char MD3CON0 @ 0x21B;
char MD3CON1 @ 0x21C;
char MD3SRC  @ 0x21D;
char MD3CARL @ 0x21E;
char MD3CARH @ 0x21F;

char ODCONA  @ 0x28C;
char ODCONB  @ 0x28D;
char ODCONC  @ 0x28E;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;
char CCP1CAP @ 0x294;
char CCPR2L  @ 0x295;
char CCPR2H  @ 0x296;
char CCP2CON @ 0x297;
char CCP2CAP @ 0x298;
char CCPR7L  @ 0x299;
char CCPR7H  @ 0x29A;
char CCP7CON @ 0x29B;
char CCP7CAP @ 0x29C;

char CCPTMRS1 @ 0x29E;
char CCPTMRS2 @ 0x29F;

char SLRCONA @ 0x30C;
char SLRCONB @ 0x30D;
char SLRCONC @ 0x30E;

char MD1CON0 @ 0x315;
char MD1CON1 @ 0x316;
char MD1SRC  @ 0x317;
char MD1CARL @ 0x318;
char MD1CARH @ 0x319;

char MD2CON0 @ 0x31B;
char MD2CON1 @ 0x31C;
char MD2SRC  @ 0x31D;
char MD2CARL @ 0x31E;
char MD2CARH @ 0x31F;

char INLVLA  @ 0x38C;
char INLVLB  @ 0x38D;
char INLVLC  @ 0x38E;

char INLVE   @ 0x390;
char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;
char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;
char IOCCP   @ 0x397;
char IOCCN   @ 0x398;
char IOCCF   @ 0x399;

char IOCEP   @ 0x39D;
char IOCEN   @ 0x39E;
char IOCEF   @ 0x39F;

char HIDRVB  @ 0x40D;

char TMR5L   @ 0x40F;
char TMR5H   @ 0x410;
char T5CON   @ 0x411;
char T5GCON  @ 0x412;
char T4TMR   @ 0x413;
char T4PR    @ 0x414;
char T4CON   @ 0x415;
char T4HLT   @ 0x416;
char T4CLKCON @ 0x417;
char T4RST   @ 0x418;

char T6TMR   @ 0x41A;
char T6PR     @ 0x41B;
char T6CON   @ 0x41C;
char T6HLT   @ 0x41D;
char T6CLKCON @ 0x41E;
char T6RST   @ 0x41F;

char ADRESL  @ 0x48E;
char ADRESH  @ 0x48F;
char ADCON0  @ 0x490;
char ADCON1  @ 0x491;
char ADCON2  @ 0x492;
char T2TMR   @ 0x493;
char T2PR    @ 0x494;
char T2CON   @ 0x495;
char T2HLT   @ 0x496;
char T2CLKCON @ 0x497;
char T2RST   @ 0x498;

char T8TMR   @ 0x49A;
char T8PR    @ 0x49B;
char T8CON   @ 0x49C;
char T8HLT   @ 0x49D;
char T8CLKCON @ 0x49E;
char T8RST   @ 0x49F;

char OPA1NCHS @ 0x50F;
char OPA1PCHS @ 0x510;
char OPA1CON @ 0x511;
char OPA1ORS @ 0x512;
char OPA2NCHS @ 0x513;
char OPA2PCHS @ 0x514;
char OPA2CON @ 0x515;
char OPA2ORS @ 0x516;
char OPA3NCHS @ 0x517;
char OPA3PCHS @ 0x518;
char OPA3CON @ 0x519;
char OPA3ORS @ 0x51A;

char DACLD   @ 0x58D;
char DAC1CON0 @ 0x58E;
char DAC1REFL @ 0x58F;
char DAC1REFH @ 0x590;
char DAC2CON0 @ 0x591;
char DAC2REFL @ 0x592;
char DAC2REFH @ 0x593;
char DAC3CON0 @ 0x594;
char DAC3REF  @ 0x595;
char DAC4CON0 @ 0x596;
char DAC4REF  @ 0x597;
char DAC5CON0 @ 0x598;
char DAC5REFL @ 0x599;
char DAC5REFH @ 0x59A;

char DAC7CON0 @ 0x59E;
char DAC7REF  @ 0x59F;

char PWM3DCL @ 0x614;
char PWM3DCH @ 0x615;
char PWM3CON @ 0x616;
char PWM4DCL @ 0x617;
char PWM4DCH @ 0x618;
char PWM4CON @ 0x619;
char PWM9DCL @ 0x61A;
char PWM9DCH @ 0x61B;
char PWM9CON @ 0x61C;

char COG1PHR @ 0x68D;
char COG1PHF @ 0x68E;
char COG1BLKR @ 0x68F;
char COG1BLKF @ 0x690;
char COG1DBR @ 0x691;
char COG1DBF @ 0x692;
char COG1CON0 @ 0x693;
char COG1CON1 @ 0x694;
char COG1RIS0 @ 0x695;
char COG1RIS1 @ 0x696;
char COG1RSIM0 @ 0x697;
char COG1RSIM1 @ 0x698;
char COG1FIS0 @ 0x699;
char COG1FIS1 @ 0x69A;
char COG1FSIM0 @ 0x69B;
char COG1FSIM1 @ 0x69C;
char COG1ASD0 @ 0x69D;
char COG1ASD1 @ 0x69E;
char COG1STR @ 0x69F;

char COG2PHR @ 0x70D;
char COG2PHF @ 0x70E;
char COG2BLKR @ 0x70F;
char COG2BLKF @ 0x710;
char COG2DBR @ 0x711;
char COG2DBF @ 0x712;
char COG2CON0 @ 0x713;
char COG2CON1 @ 0x714;
char COG2RIS0 @ 0x715;
char COG2RIS1 @ 0x716;
char COG2RSIM0 @ 0x717;
char COG2RSIM1 @ 0x718;
char COG2FIS0 @ 0x719;
char COG2FIS1 @ 0x71A;
char COG2FSIM0 @ 0x71B;
char COG2FSIM1 @ 0x71C;
char COG2ASD0 @ 0x71D;
char COG2ASD1 @ 0x71E;
char COG2STR @ 0x71F;

char PRG1RTSS @ 0x78E;
char PRG1FTSS @ 0x78F;
char PRG1INS @ 0x790;
char PRG1CON0 @ 0x791;
char PRG1CON1 @ 0x792;
char PRG1CON2 @ 0x793;
char PRG2RTSS @ 0x794;
char PRG2FTSS @ 0x795;
char PRG2INS @ 0x796;
char PRG2CON0 @ 0x797;
char PRG2CON1 @ 0x798;
char PRG2CON2 @ 0x799;
char PRG3RTSS @ 0x79A;
char PRG3FTSS @ 0x79B;
char PRG3INS @ 0x79C;
char PRG3CON0 @ 0x79D;
char PRG3CON1 @ 0x79E;
char PRG3CON2 @ 0x79F;

char COG3PHR @ 0x80D;
char COG3PHF @ 0x80E;
char COG3BLKR @ 0x80F;
char COG3BLKF @ 0x810;
char COG3DBR @ 0x811;
char COG3DBF @ 0x812;
char COG3CON0 @ 0x813;
char COG3CON1 @ 0x814;
char COG3RIS0 @ 0x815;
char COG3RIS1 @ 0x816;
char COG3RSIM0 @ 0x817;
char COG3RSIM1 @ 0x818;
char COG3FIS0 @ 0x819;
char COG3FIS1 @ 0x81A;
char COG3FSIM0 @ 0x81B;
char COG3FSIM1 @ 0x81C;
char COG3ASD0 @ 0x81D;
char COG3ASD1 @ 0x81E;
char COG3STR @ 0x81F;

char CM4CON0 @ 0x90C;
char CM4CON1 @ 0x90D;
char CM4NSEL @ 0x90E;
char CM4PSEL @ 0x90F;
char CM5CON0 @ 0x910;
char CM5CON1 @ 0x911;
char CM5NSEL @ 0x912;
char CM5PSEL @ 0x913;
char CM6CON0 @ 0x914;
char CM6CON1 @ 0x915;
char CM6NSEL @ 0x916;
char CM6PSEL @ 0x917;

char PWMEN   @ 0xD8E;
char PWMLD   @ 0xD8F;
char PWMOUT  @ 0xD90;
char PWM5PHL @ 0xD91;
char PWM5PHH @ 0xD92;
char PWM5DCL @ 0xD93;
char PWM5DCH @ 0xD94;
char PWM5PRL @ 0xD95;
char PWM5PRH @ 0xD96;
char PWM5OFL @ 0xD97;
char PWM5OFH @ 0xD98;
char PWM5TMRL @ 0xD99;
char PWM5TMRH @ 0xD9A;
char PWM5CON @ 0xD9B;
char PWM5INTE @ 0xD9C;
char PWM5INTF @ 0xD9D;
char PWM5CLKCON @ 0xD9E;
char PWM5LDCON @ 0xD9F;
char PWM5OFCON @ 0xDA0;
char PWM6PHL @ 0xDA1;
char PWM6PHH @ 0xDA2;
char PWM6DCL @ 0xDA3;
char PWM6DCH @ 0xDA4;
char PWM6PRL @ 0xDA5;
char PWM6PRH @ 0xDA6;
char PWM6OFL @ 0xDA7;
char PWM6OFH @ 0xDA8;
char PWM6TMRL @ 0xDA9;
char PWM6TMRH @ 0xDAA;
char PWM6CON @ 0xDAB;
char PWM6INTE @ 0xDAC;
char PWM6INTF @ 0xDAD;
char PWM6CLKCON @ 0xDAE;
char PWM6LDCON @ 0xDAF;
char PWM6OFCON @ 0xDB0;
char PWM11PHL @ 0xDB1;
char PWM11PHH @ 0xDB2;
char PWM11DCL @ 0xDB3;
char PWM11DCH @ 0xDB4;
char PWM11PRL @ 0xDB5;
char PWM11PRH @ 0xDB6;
char PWM11OFL @ 0xDB7;
char PWM11OFH @ 0xDB8;
char PWM11TMRL @ 0xDB9;
char PWM11TMRH @ 0xDBA;
char PWM11CON @ 0xDBB;
char PWM11INTE @ 0xDBC;
char PWM11INTF @ 0xDBD;
char PWM11CLKCON @ 0xDBE;
char PWM11LDCON @ 0xDBF;
char PWM11OFCON @ 0xDC0;

char PPSLOCK @ 0xE0C;
char INTPPS  @ 0xE0D;
char T0CKIPPS @ 0xE0E;
char T1CKIPPS @ 0xE0F;
char T1GPPS  @ 0xE10;
char T3CKIPPS @ 0xE11;
char T3GPPS  @ 0xE12;
char T5CKIPPS @ 0xE13;
char T5GPPS  @ 0xE14;
char T2CKIPPS @ 0xE15;
char T4CKIPPS @ 0xE16;
char T6CKIPPS @ 0xE17;
char T8CKIPPS @ 0xE18;
char CCP1PPS @ 0xE19;
char CCP2PPS @ 0xE1A;
char CCP7PPS @ 0xE1B;

char COG1INPPS @ 0xE1D;
char COG2INPPS @ 0xE1E;
char COG3INPPS @ 0xE1F;

char MD1CLPPS @ 0xE21;
char MD1CHPPS @ 0xE22;
char MD1MODPPS @ 0xE23;
char MD2CLPPS @ 0xE24;
char MD2CHPPS @ 0xE25;
char MD2MODPPS @ 0xE26;
char MD3CLPPS @ 0xE27;
char MD3CHPPS @ 0xE28;
char MD3MODPPS @ 0xE29;

char PRG1RPPS @ 0xE2D;
char PRG1FPPS @ 0xE2E;
char PRG2RPPS @ 0xE2F;
char PRG2FPPS @ 0xE30;
char PRG3RPPS @ 0xE31;
char PRG3FPPS @ 0xE32;

char CLCIN0PPS @ 0xE35;
char CLCIN1PPS @ 0xE36;
char CLCIN2PPS @ 0xE37;
char CLCIN3PPS @ 0xE38;
char ADCACTPPS @ 0xE39;
char SSPCLKPPS @ 0xE3A;
char SSPDATPPS @ 0xE3B;
char SSPSSPPS @ 0xE3C;
char RXPPS   @ 0xE3D;
char CKPPS   @ 0xE3E;

char RA0PPS  @ 0xE90;
char RA1PPS  @ 0xE91;
char RA2PPS  @ 0xE92;
char RA3PPS  @ 0xE93;
char RA4PPS  @ 0xE94;
char RA5PPS  @ 0xE95;
char RA6PPS  @ 0xE96;
char RA7PPS  @ 0xE97;
char RB0PPS  @ 0xE98;
char RB1PPS  @ 0xE99;
char RB2PPS  @ 0xE9A;
char RB3PPS  @ 0xE9B;
char RB4PPS  @ 0xE9C;
char RB5PPS  @ 0xE9D;
char RB6PPS  @ 0xE9E;
char RB7PPS  @ 0xE9F;
char RC0PPS  @ 0xEA0;
char RC1PPS  @ 0xEA1;
char RC2PPS  @ 0xEA2;
char RC3PPS  @ 0xEA3;
char RC4PPS  @ 0xEA4;
char RC5PPS  @ 0xEA5;
char RC6PPS  @ 0xEA6;
char RC7PPS  @ 0xEA7;

char CLCDATA @ 0xF0F;
char CLC1CON @ 0xF10;
char CLC1POL @ 0xF11;
char CLC1SEL0 @ 0xF12;
char CLC1SEL1 @ 0xF13;
char CLC1SEL2 @ 0xF14;
char CLC1SEL3 @ 0xF15;
char CLC1GLS0 @ 0xF16;
char CLC1GLS1 @ 0xF17;
char CLC1GLS2 @ 0xF18;
char CLC1GLS3 @ 0xF19;
char CLC2CON @ 0xF1A;
char CLC2POL @ 0xF1B;
char CLC2SEL0 @ 0xF1C;
char CLC2SEL1 @ 0xF1D;
char CLC2SEL2 @ 0xF1E;
char CLC2SEL3 @ 0xF1F;
char CLC2GLS0 @ 0xF20;
char CLC2GLS1 @ 0xF21;
char CLC2GLS2 @ 0xF22;
char CLC2GLS3 @ 0xF23;
char CLC3CON @ 0xF24;
char CLC3POL @ 0xF25;
char CLC3SEL0 @ 0xF26;
char CLC3SEL1 @ 0xF27;
char CLC3SEL2 @ 0xF28;
char CLC3SEL3 @ 0xF29;
char CLC3GLS0 @ 0xF2A;
char CLC3GLS1 @ 0xF2B;
char CLC3GLS2 @ 0xF2C;
char CLC3GLS3 @ 0xF2D;
char CLC4CON @ 0xF2E;
char CLC4POL @ 0xF2F;
char CLC4SEL0 @ 0xF30;
char CLC4SEL1 @ 0xF31;
char CLC4SEL2 @ 0xF32;
char CLC4SEL3 @ 0xF33;
char CLC4GLS0 @ 0xF34;
char CLC4GLS1 @ 0xF35;
char CLC4GLS2 @ 0xF36;
char CLC4GLS3 @ 0xF37;

char STATUS_SHAD @ 0xFE4;
char WREG_SHAD @ 0xFE5;
char BSR_SHAD @ 0xFE6;
char PCLATH_SHAD @ 0xFE7;
char FSR0L_SHAD @ 0xFE8;
char FSR0H_SHAD @ 0xFE9;
char FSR1L_SHAD @ 0xFEA;
char FSR1H_SHAD @ 0xFEB;

char STKPTR  @ 0xFED;
char TOSL    @ 0xFEE;
char TOSH    @ 0xFEF;


bit  IOCIF   @ INTCON.0;
bit  INTF    @ INTCON.1;
bit  TMR0IF  @ INTCON.2;
bit  IOCIE   @ INTCON.3;
bit  INTE    @ INTCON.4;
bit  TMR0IE  @ INTCON.5;
bit  PEIE    @ INTCON.6;
bit  GIE     @ INTCON.7;

bit  TMR1IF  @ PIR1.0;
bit  TMR2IF  @ PIR1.1;
bit  CCP1IF  @ PIR1.2;
bit  SSP1IF  @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  CCP2IF  @ PIR2.0;
bit  C3IF    @ PIR2.1;
bit  C4IF    @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  COG1IF  @ PIR2.4;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;
bit  CLC3IF  @ PIR3.2;
bit  CLC4IF  @ PIR3.3;
bit  ZCDIF   @ PIR3.4;
bit  COG2IF  @ PIR3.5;

bit  TMR4IF  @ PIR4.0;
bit  TMR6IF  @ PIR4.1;
bit  TMR3IF  @ PIR4.2;
bit  TMR3GIF @ PIR4.3;
bit  TMR5IF  @ PIR4.4;
bit  TMR5GIF @ PIR4.5;
bit  TMR8IF  @ PIR4.6;

bit  C5IF    @ PIR5.0;
bit  C6IF    @ PIR5.1;
bit  COG3IF  @ PIR5.4;
bit  CCP7IF  @ PIR5.6;

bit  PWM5IF  @ PIR6.0;
bit  PWM6IF  @ PIR6.1;
bit  PWM11IF @ PIR6.2;

bit  TMR1ON @ T1CON.0;

bit  TMR3ON  @ T3CON.0;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  CCP1IE  @ PIE1.2;
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  C3IE    @ PIE2.1;
bit  C4IE    @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  COG1IE  @ PIE2.4;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;
bit  CLC3IE  @ PIE3.2;
bit  CLC4IE  @ PIE3.3;
bit  ZCDIE   @ PIE3.4;
bit  COG2IE  @ PIE3.5;

bit  TMR4IE  @ PIE4.0;
bit  TMR6IE  @ PIE4.1;
bit  TMR3IE  @ PIE4.2;
bit  TMR3GIE @ PIE4.3;
bit  TMR5IE  @ PIE4.4;
bit  TMR5GIE @ PIE4.5;
bit  TMR8IE  @ PIE4.6;

bit  C5IE    @ PIE5.0;
bit  C6IE    @ PIE5.1;
bit  COG3IE  @ PIE5.4;
bit  CCP7IE  @ PIE5.6;

bit  PWM5IE  @ PIE6.0;
bit  PWM6IE  @ PIE6.1;
bit  PWM11IE @ PIE6.2;

bit  PS0     @ OPTION_REG.0;
bit  PS1     @ OPTION_REG.1;
bit  PS2     @ OPTION_REG.2;
bit  PSA     @ OPTION_REG.3;
bit  TMR0SE  @ OPTION_REG.4;
bit  TMR0CS  @ OPTION_REG.5;
bit  INTEDG  @ OPTION_REG.6;
bit  WPUEN_  @ OPTION_REG.7;

bit  BOR_    @ PCON.0;
bit  POR_    @ PCON.1;
bit  RI_     @ PCON.2;
bit  RMCLR_  @ PCON.3;
bit  RWDT_   @ PCON.4;
bit  STKUNF  @ PCON.6;
bit  STKOVF  @ PCON.7;

bit  SWDTEN  @ WDTCON.0;

bit  SCS0    @ OSCCON.0;
bit  SCS1    @ OSCCON.1;
bit  SPLLEN  @ OSCCON.7;

bit  HFIOFS  @ OSCSTAT.0;
bit  LFIOFR  @ OSCSTAT.1;
bit  MFIOFR  @ OSCSTAT.2;
bit  HFIOFL  @ OSCSTAT.3;
bit  HFIOFR  @ OSCSTAT.4;
bit  OSTS    @ OSCSTAT.5;
bit  PLLR    @ OSCSTAT.6;
bit  SOSCR   @ OSCSTAT.7;

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;
bit  MC3OUT  @ CMOUT.2;
bit  MC4OUT  @ CMOUT.3;
bit  MC5OUT  @ CMOUT.4;
bit  MC6OUT  @ CMOUT.5;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#ifdef _16F1773
bit  VREGPM  @ VREGCON.1;
#endif

bit  RX9D    @ RC1STA.0;
bit  OERR    @ RC1STA.1;
bit  FERR    @ RC1STA.2;
bit  ADDEN   @ RC1STA.3;
bit  CREN    @ RC1STA.4;
bit  SREN    @ RC1STA.5;
bit  RX9     @ RC1STA.6;
bit  SPEN    @ RC1STA.7;

bit  TX9D    @ TX1STA.0;
bit  TRMT    @ TX1STA.1;
bit  BRGH    @ TX1STA.2;
bit  SENDB   @ TX1STA.3;
bit  SYNC    @ TX1STA.4;
bit  TXEN    @ TX1STA.5;
bit  TX9     @ TX1STA.6;
bit  CSRC    @ TX1STA.7;

bit  ABDEN   @ BAUD1CON.0;
bit  WUE     @ BAUD1CON.1;
bit  BRG16   @ BAUD1CON.3;
bit  SCKP    @ BAUD1CON.4;
bit  RCIDL   @ BAUD1CON.6;
bit  ABDOVF  @ BAUD1CON.7;

bit  TMR5ON  @ T5CON.0;

bit  TMR4ON  @ T4CON.7;

bit  TMR6ON  @ T6CON.7;

bit  ADON    @ ADCON0.0;
bit  GO      @ ADCON0.1;

bit  ADNREF  @ ADCON1.2;
bit  ADFM    @ ADCON1.7;

bit  TMR2ON  @ T2CON.7;

bit  TMR8ON  @ T8CON.7;

bit  PPSLOCKED @ PPSLOCK.0;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FOSC = LP // LP Oscillator, Low-power crystal connected between OSC1 and OSC2 pins
#pragma config /1 0x3FF9 FOSC = XT // XT Oscillator, Crystal/resonator connected between OSC1 and OSC2 pins
#pragma config /1 0x3FFA FOSC = HS // HS Oscillator, High-speed crystal/resonator connected between OSC1 and OSC2 pins
#pragma config /1 0x3FFB FOSC = EXTRC // EXTRC oscillator: External RC circuit connected to CLKIN pin
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator: I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FE7 WDTE = OFF // WDT disabled
#pragma config /1 0x3FEF WDTE = SWDTEN // WDT controlled by the SWDTEN bit in the WDTCON register
#pragma config /1 0x3FF7 WDTE = NSLEEP // WDT enabled while running and disabled in Sleep
#pragma config /1 0x3FFF WDTE = ON // WDT enabled
#pragma config /1 0x3FDF PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FBF MCLRE = OFF // MCLR/VPP pin function is digital input
#pragma config /1 0x3FFF MCLRE = ON // MCLR/VPP pin function is MCLR
#pragma config /1 0x3F7F CP = ON // Program memory code protection is enabled
#pragma config /1 0x3FFF CP = OFF // Program memory code protection is disabled
#pragma config /1 0x39FF BOREN = OFF // Brown-out Reset disabled
#pragma config /1 0x3BFF BOREN = SBODEN // Brown-out Reset controlled by the SBOREN bit in the BORCON register
#pragma config /1 0x3DFF BOREN = NSLEEP // Brown-out Reset enabled while running and disabled in Sleep
#pragma config /1 0x3FFF BOREN = ON // Brown-out Reset enabled
#pragma config /1 0x37FF CLKOUTEN = ON // CLKOUT function is enabled on the CLKOUT pin
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config /1 0x2FFF IESO = OFF // Internal/External Switchover Mode is disabled
#pragma config /1 0x3FFF IESO = ON // Internal/External Switchover Mode is enabled
#pragma config /1 0x1FFF FCMEN = OFF // Fail-Safe Clock Monitor is disabled
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor is enabled
#pragma config /2 0x3FFC WRT = ALL // 000h to 1FFFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3FFB PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly by software
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit cannot be cleared once it is set by software
#pragma config /2 0x3F7F ZCD = ON // Zero-cross detect circuit is enabled at POR
#pragma config /2 0x3FFF ZCD = OFF // Zero-cross detect circuit is disabled at POR
#pragma config /2 0x3EFF PLLEN = OFF // 4x PLL is enabled when software sets the SPLLEN bit
#pragma config /2 0x3FFF PLLEN = ON // 4x PLL is always enabled
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x37FF LPBOR = ON // Low-Power BOR is enabled
#pragma config /2 0x3FFF LPBOR = OFF // Low-Power BOR is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
