// HEADER FILE
#pragma chip PIC16F1718, core 14 enh, code 16384, ram 32 : 0xCBF // 2048 bytes
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

char TMR0    @ 0x15;
char TMR1L   @ 0x16;
char TMR1H   @ 0x17;
char T1CON   @ 0x18;
char T1GCON  @ 0x19;
char TMR2    @ 0x1A;
char PR2     @ 0x1B;
char T2CON   @ 0x1C;

char TRISA   @ 0x8C;
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;

char TRISE   @ 0x90;
char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;

char OPTION_REG @ 0x95;
char PCON    @ 0x96;
char WDTCON  @ 0x97;
char OSCTUNE @ 0x98;
char OSCCON  @ 0x99;
char OSCSTAT @ 0x9A;
char ADRESL  @ 0x9B;
char ADRESH  @ 0x9C;
char ADCON0  @ 0x9D;
char ADCON1  @ 0x9E;
char ADCON2  @ 0x9F;

char LATA    @ 0x10C;
char LATB    @ 0x10D;
char LATC    @ 0x10E;

char CM1CON0 @ 0x111;
char CM1CON1 @ 0x112;
char CM2CON0 @ 0x113;
char CM2CON1 @ 0x114;
char CMOUT   @ 0x115;
char BORCON  @ 0x116;
char FVRCON  @ 0x117;
char DAC1CON0 @ 0x118;
char DAC1CON1 @ 0x119;
char DAC2CON0 @ 0x11A;
char DAC2CON1 @ 0x11B;
char ZCD1CON @ 0x11C;

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;
char ANSELC  @ 0x18E;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;
#if _16F1718
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

char ODCONA  @ 0x28C;
char ODCONB  @ 0x28D;
char ODCONC  @ 0x28E;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;

char CCPR2L  @ 0x298;
char CCPR2H  @ 0x299;
char CCP2CON @ 0x29A;

char CCPTMRS @ 0x29E;

char SLRCONA @ 0x30C;
char SLRCONB @ 0x30D;
char SLRCONC @ 0x30E;

char INLVLA  @ 0x38C;
char INLVLB  @ 0x38D;
char INLVLC  @ 0x38E;

char INLVLE  @ 0x390;
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

char TMR4    @ 0x415;
char PR4     @ 0x416;
char T4CON   @ 0x417;

char TMR6    @ 0x41C;
char PR6     @ 0x41D;
char T6CON   @ 0x41E;

char NCO1ACCL @ 0x498;
char NCO1ACCH @ 0x499;
char NCO1ACCU @ 0x49A;
char NCO1INCL @ 0x49B;
char NCO1INCH @ 0x49C;
char NCO1INCU @ 0x49D;
char NCO1CON @ 0x49E;
char NCO1CLK @ 0x49F;

char OPA1CON @ 0x511;

char OPA2CON @ 0x515;

char PWM3DCL @ 0x617;
char PWM3DCH @ 0x618;
char PWM3CON @ 0x619;
char PWM4DCL @ 0x61A;
char PWM4DCH @ 0x61B;
char PWM4CON @ 0x61C;

char COG1PHR @ 0x691;
char COG1PHF @ 0x692;
char COG1BLKR @ 0x693;
char COG1BLKF @ 0x694;
char COG1DBR @ 0x695;
char COG1DBF @ 0x696;
char COG1CON0 @ 0x697;
char COG1CON1 @ 0x698;
char COG1RIS @ 0x699;
char COG1RSIM @ 0x69A;
char COG1FIS @ 0x69B;
char COG1FSIM @ 0x69C;
char COG1ASD0 @ 0x69D;
char COG1ASD1 @ 0x69E;
char COG1STR @ 0x69F;

char PPSLOCK @ 0xE0F;
char INTPPS  @ 0xE10;
char T0CKIPPS @ 0xE11;
char T1CKIPPS @ 0xE12;
char T1GPPS  @ 0xE13;
char CCP1PPS @ 0xE14;
char CCP2PPS @ 0xE15;

char COGINPPS @ 0xE17;

char SSPCLKPPS @ 0xE20;
char SSPDATPPS @ 0xE21;
char SSPSSPPS @ 0xE22;

char RXPPS   @ 0xE24;
char CKPPS   @ 0xE25;

char CLCIN0PPS @ 0xE28;
char CLCIN1PPS @ 0xE29;
char CLCIN2PPS @ 0xE2A;
char CLCIN3PPS @ 0xE2B;

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
bit  TMR4IF  @ PIR2.1;
bit  TMR6IF  @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;
bit  CLC3IF  @ PIR3.2;
bit  CLC4IF  @ PIR3.3;
bit  ZCDIF   @ PIR3.4;
bit  COGIF   @ PIR3.5;
bit  NCOIF   @ PIR3.6;

bit  TMR1ON  @ T1CON.0;
bit  T1SYNC_ @ T1CON.2;
bit  T1OSCEN @ T1CON.3;
bit  T1CKPS0 @ T1CON.4;
bit  T1CKPS1 @ T1CON.5;
bit  TMR1CS0 @ T1CON.6;
bit  TMR1CS1 @ T1CON.7;

bit  T1GSS0  @ T1GCON.0;
bit  T1GSS1  @ T1GCON.1;
bit  T1GVAL  @ T1GCON.2;
bit  T1GGO   @ T1GCON.3;
bit  T1GSPM  @ T1GCON.4;
bit  T1GTM   @ T1GCON.5;
bit  T1GPOL  @ T1GCON.6;
bit  TMR1GE  @ T1GCON.7;

bit  TMR2ON  @ T2CON.2;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  CCP1IE  @ PIE1.2;
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  TMR4IE  @ PIE2.1;
bit  TMR6IE  @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;
bit  CLC3IE  @ PIE3.2;
bit  CLC4IE  @ PIE3.3;
bit  ZCDIE   @ PIE3.4;
bit  COGIE   @ PIE3.5;
bit  NCOIE   @ PIE3.6;

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

bit  ADON    @ ADCON0.0;
bit  GO      @ ADCON0.1;
bit  CHS0    @ ADCON0.2;
bit  CHS1    @ ADCON0.3;
bit  CHS2    @ ADCON0.4;
bit  CHS3    @ ADCON0.5;
bit  CHS4    @ ADCON0.6;

bit  ADPREF0 @ ADCON1.0;
bit  ADPREF1 @ ADCON1.1;
bit  ADNREF  @ ADCON1.2;
bit  ADFM    @ ADCON1.7;

bit  TRIGSEL0 @ ADCON2.4;
bit  TRIGSEL1 @ ADCON2.5;
bit  TRIGSEL2 @ ADCON2.6;
bit  TRIGSEL3 @ ADCON2.7;

bit  C1SYNC  @ CM1CON0.0;
bit  C1HYS   @ CM1CON0.1;
bit  C1SP    @ CM1CON0.2;
bit  C1ZLF   @ CM1CON0.3;
bit  C1POL   @ CM1CON0.4;
bit  C1OUT   @ CM1CON0.6;
bit  C1ON    @ CM1CON0.7;

bit  C1NCH0  @ CM1CON1.0;
bit  C1NCH1  @ CM1CON1.1;
bit  C1NCH2  @ CM1CON1.2;
bit  C1PCH0  @ CM1CON1.3;
bit  C1PCH1  @ CM1CON1.4;
bit  C1PCH2  @ CM1CON1.5;
bit  C1INTN  @ CM1CON1.6;
bit  C1INTP  @ CM1CON1.7;

bit  C2SYNC  @ CM2CON0.0;
bit  C2HYS   @ CM2CON0.1;
bit  C2SP    @ CM2CON0.2;
bit  C2ZLF   @ CM2CON0.3;
bit  C2POL   @ CM2CON0.4;
bit  C2OUT   @ CM2CON0.6;
bit  C2ON    @ CM2CON0.7;

bit  C2NCH0  @ CM2CON1.0;
bit  C2NCH1  @ CM2CON1.1;
bit  C2NCH2  @ CM2CON1.2;
bit  C2PCH0  @ CM2CON1.3;
bit  C2PCH1  @ CM2CON1.4;
bit  C2PCH2  @ CM2CON1.5;
bit  C2INTN  @ CM2CON1.6;
bit  C2INTP  @ CM2CON1.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  CDAFVR0 @ FVRCON.2;
bit  CDAFVR1 @ FVRCON.3;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  DAC1NSS @ DAC1CON0.0;
bit  DAC1PSS0 @ DAC1CON0.2;
bit  DAC1PSS1 @ DAC1CON0.3;
bit  DAC1OE2 @ DAC1CON0.4;
bit  DAC1OE1 @ DAC1CON0.5;
bit  DAC1EN  @ DAC1CON0.7;

bit  DAC2NSS @ DAC2CON0.0;
bit  DAC2PSS0 @ DAC2CON0.2;
bit  DAC2PSS1 @ DAC2CON0.3;
bit  DAC2OE2 @ DAC2CON0.4;
bit  DAC2OE1 @ DAC2CON0.5;
bit  DAC2EN  @ DAC2CON0.7;

bit  ZCD1INTN @ ZCD1CON.0;
bit  ZCD1INTP @ ZCD1CON.1;
bit  ZCD1POL @ ZCD1CON.4;
bit  ZCD1OUT @ ZCD1CON.5;
bit  ZCD1EN  @ ZCD1CON.7;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _16F1718
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

bit  BF      @ SSP1STAT.0;
bit  UA      @ SSP1STAT.1;
bit  RW_     @ SSP1STAT.2;
bit  S       @ SSP1STAT.3;
bit  P       @ SSP1STAT.4;
bit  DA_     @ SSP1STAT.5;
bit  CKE     @ SSP1STAT.6;
bit  SMP     @ SSP1STAT.7;

bit  CKP     @ SSP1CON1.4;
bit  SSPEN   @ SSP1CON1.5;
bit  SSPOV   @ SSP1CON1.6;
bit  WCOL    @ SSP1CON1.7;

bit  SEN     @ SSP1CON2.0;
bit  RSEN    @ SSP1CON2.1;
bit  PEN     @ SSP1CON2.2;
bit  RCEN    @ SSP1CON2.3;
bit  ACKEN   @ SSP1CON2.4;
bit  ACKDT   @ SSP1CON2.5;
bit  ACKSTAT @ SSP1CON2.6;
bit  GCEN    @ SSP1CON2.7;

bit  DHEN    @ SSP1CON3.0;
bit  AHEN    @ SSP1CON3.1;
bit  SBCDE   @ SSP1CON3.2;
bit  SDAHT   @ SSP1CON3.3;
bit  BOEN    @ SSP1CON3.4;
bit  SCIE    @ SSP1CON3.5;
bit  PCIE    @ SSP1CON3.6;
bit  ACKTIM  @ SSP1CON3.7;

bit  TMR4ON  @ T4CON.2;

bit  TMR6ON  @ T6CON.2;

bit  N1PFM   @ NCO1CON.0;
bit  N1POL   @ NCO1CON.4;
bit  N1OUT   @ NCO1CON.5;
bit  N1EN    @ NCO1CON.7;

bit  OPA1UG  @ OPA1CON.4;
bit  OPA1SP  @ OPA1CON.6;
bit  OPA1EN  @ OPA1CON.7;

bit  OPA2UG  @ OPA2CON.4;
bit  OPA2SP  @ OPA2CON.6;
bit  OPA2EN  @ OPA2CON.7;

bit  PWM3DCL0 @ PWM3DCL.6;
bit  PWM3DCL1 @ PWM3DCL.7;

bit  PWM3POL @ PWM3CON.4;
bit  PWM3OUT @ PWM3CON.5;
bit  PWM3EN  @ PWM3CON.7;

bit  PWM4DCL0 @ PWM4DCL.6;
bit  PWM4DCL1 @ PWM4DCL.7;

bit  PWM4POL @ PWM4CON.4;
bit  PWM4OUT @ PWM4CON.5;
bit  PWM4EN  @ PWM4CON.7;

bit  G1MD0   @ COG1CON0.0;
bit  G1MD1   @ COG1CON0.1;
bit  G1MD2   @ COG1CON0.2;
bit  G1CS0   @ COG1CON0.3;
bit  G1CS1   @ COG1CON0.4;
bit  G1LD    @ COG1CON0.6;
bit  G1EN    @ COG1CON0.7;

bit  G1POLA  @ COG1CON1.0;
bit  G1POLB  @ COG1CON1.1;
bit  G1POLC  @ COG1CON1.2;
bit  G1POLD  @ COG1CON1.3;
bit  G1FDBS  @ COG1CON1.6;
bit  G1RDBS  @ COG1CON1.7;

bit  G1ASDAC0 @ COG1ASD0.2;
bit  G1ASDAC1 @ COG1ASD0.3;
bit  G1ASDBD0 @ COG1ASD0.4;
bit  G1ASDBD1 @ COG1ASD0.5;
bit  G1ARSEN @ COG1ASD0.6;
bit  G1ASE   @ COG1ASD0.7;

bit  G1AS0E  @ COG1ASD1.0;
bit  G1AS1E  @ COG1ASD1.1;
bit  G1AS2E  @ COG1ASD1.2;
bit  G1AS3E  @ COG1ASD1.3;

bit  G1STRA  @ COG1STR.0;
bit  G1STRB  @ COG1STR.1;
bit  G1STRC  @ COG1STR.2;
bit  G1STRD  @ COG1STR.3;
bit  G1SDATA @ COG1STR.4;
bit  G1SDATB @ COG1STR.5;
bit  G1SDATC @ COG1STR.6;
bit  G1SDATD @ COG1STR.7;

bit  PPSLOCKED @ PPSLOCK.0;

bit  MLC1OUT @ CLCDATA.0;
bit  MLC2OUT @ CLCDATA.1;
bit  MLC3OUT @ CLCDATA.2;
bit  MLC4OUT @ CLCDATA.3;

bit  LC1MODE0 @ CLC1CON.0;
bit  LC1MODE1 @ CLC1CON.1;
bit  LC1MODE2 @ CLC1CON.2;
bit  LC1INTN @ CLC1CON.3;
bit  LC1INTP @ CLC1CON.4;
bit  LC1OUT  @ CLC1CON.5;
bit  LC1EN   @ CLC1CON.7;

bit  LC1POL  @ CLC1POL.7;

bit  LC1G1D1N @ CLC1GLS0.0;
bit  LC1G1D1T @ CLC1GLS0.1;
bit  LC1G1D2N @ CLC1GLS0.2;
bit  LC1G1D2T @ CLC1GLS0.3;
bit  LC1G1D3N @ CLC1GLS0.4;
bit  LC1G1D3T @ CLC1GLS0.5;
bit  LC1G1D4N @ CLC1GLS0.6;
bit  LC1G1D4T @ CLC1GLS0.7;

bit  LC1G2D1N @ CLC1GLS1.0;
bit  LC1G2D1T @ CLC1GLS1.1;
bit  LC1G2D2N @ CLC1GLS1.2;
bit  LC1G2D2T @ CLC1GLS1.3;
bit  LC1G2D3N @ CLC1GLS1.4;
bit  LC1G2D3T @ CLC1GLS1.5;
bit  LC1G2D4N @ CLC1GLS1.6;
bit  LC1G2D4T @ CLC1GLS1.7;

bit  LC1G3D1N @ CLC1GLS2.0;
bit  LC1G3D1T @ CLC1GLS2.1;
bit  LC1G3D2N @ CLC1GLS2.2;
bit  LC1G3D2T @ CLC1GLS2.3;
bit  LC1G3D3N @ CLC1GLS2.4;
bit  LC1G3D3T @ CLC1GLS2.5;
bit  LC1G3D4N @ CLC1GLS2.6;
bit  LC1G3D4T @ CLC1GLS2.7;

bit  LC1G4D1N @ CLC1GLS3.0;
bit  LC1G4D1T @ CLC1GLS3.1;
bit  LC1G4D2N @ CLC1GLS3.2;
bit  LC1G4D2T @ CLC1GLS3.3;
bit  LC1G4D3N @ CLC1GLS3.4;
bit  LC1G4D3T @ CLC1GLS3.5;
bit  LC1G4D4N @ CLC1GLS3.6;
bit  LC1G4D4T @ CLC1GLS3.7;

bit  LC2MODE0 @ CLC2CON.0;
bit  LC2MODE1 @ CLC2CON.1;
bit  LC2MODE2 @ CLC2CON.2;
bit  LC2INTN @ CLC2CON.3;
bit  LC2INTP @ CLC2CON.4;
bit  LC2OUT  @ CLC2CON.5;
bit  LC2EN   @ CLC2CON.7;

bit  LC2G1POL @ CLC2POL.0;
bit  LC2G2POL @ CLC2POL.1;
bit  LC2G3POL @ CLC2POL.2;
bit  LC2G4POL @ CLC2POL.3;
bit  LC2POL  @ CLC2POL.7;

bit  LC2G1D1N @ CLC2GLS0.0;
bit  LC2G1D1T @ CLC2GLS0.1;
bit  LC2G1D2N @ CLC2GLS0.2;
bit  LC2G1D2T @ CLC2GLS0.3;
bit  LC2G1D3N @ CLC2GLS0.4;
bit  LC2G1D3T @ CLC2GLS0.5;
bit  LC2G1D4N @ CLC2GLS0.6;
bit  LC2G1D4T @ CLC2GLS0.7;

bit  LC2G2D1N @ CLC2GLS1.0;
bit  LC2G2D1T @ CLC2GLS1.1;
bit  LC2G2D2N @ CLC2GLS1.2;
bit  LC2G2D2T @ CLC2GLS1.3;
bit  LC2G2D3N @ CLC2GLS1.4;
bit  LC2G2D3T @ CLC2GLS1.5;
bit  LC2G2D4N @ CLC2GLS1.6;
bit  LC2G2D4T @ CLC2GLS1.7;

bit  LC2G3D1N @ CLC2GLS2.0;
bit  LC2G3D1T @ CLC2GLS2.1;
bit  LC2G3D2N @ CLC2GLS2.2;
bit  LC2G3D2T @ CLC2GLS2.3;
bit  LC2G3D3N @ CLC2GLS2.4;
bit  LC2G3D3T @ CLC2GLS2.5;
bit  LC2G3D4N @ CLC2GLS2.6;
bit  LC2G3D4T @ CLC2GLS2.7;

bit  LC2G4D1N @ CLC2GLS3.0;
bit  LC2G4D1T @ CLC2GLS3.1;
bit  LC2G4D2N @ CLC2GLS3.2;
bit  LC2G4D2T @ CLC2GLS3.3;
bit  LC2G4D3N @ CLC2GLS3.4;
bit  LC2G4D3T @ CLC2GLS3.5;
bit  LC2G4D4N @ CLC2GLS3.6;
bit  LC2G4D4T @ CLC2GLS3.7;

bit  LC3MODE0 @ CLC3CON.0;
bit  LC3MODE1 @ CLC3CON.1;
bit  LC3MODE2 @ CLC3CON.2;
bit  LC3INTN @ CLC3CON.3;
bit  LC3INTP @ CLC3CON.4;
bit  LC3OUT  @ CLC3CON.5;
bit  LC3EN   @ CLC3CON.7;

bit  LC3G1POL @ CLC3POL.0;
bit  LC3G2POL @ CLC3POL.1;
bit  LC3G3POL @ CLC3POL.2;
bit  LC3G4POL @ CLC3POL.3;
bit  LC3POL  @ CLC3POL.7;

bit  LC3G1D1N @ CLC3GLS0.0;
bit  LC3G1D1T @ CLC3GLS0.1;
bit  LC3G1D2N @ CLC3GLS0.2;
bit  LC3G1D2T @ CLC3GLS0.3;
bit  LC3G1D3N @ CLC3GLS0.4;
bit  LC3G1D3T @ CLC3GLS0.5;
bit  LC3G1D4N @ CLC3GLS0.6;
bit  LC3G1D4T @ CLC3GLS0.7;

bit  LC3G2D1N @ CLC3GLS1.0;
bit  LC3G2D1T @ CLC3GLS1.1;
bit  LC3G2D2N @ CLC3GLS1.2;
bit  LC3G2D2T @ CLC3GLS1.3;
bit  LC3G2D3N @ CLC3GLS1.4;
bit  LC3G2D3T @ CLC3GLS1.5;
bit  LC3G2D4N @ CLC3GLS1.6;
bit  LC3G2D4T @ CLC3GLS1.7;

bit  LC3G3D1N @ CLC3GLS2.0;
bit  LC3G3D1T @ CLC3GLS2.1;
bit  LC3G3D2N @ CLC3GLS2.2;
bit  LC3G3D2T @ CLC3GLS2.3;
bit  LC3G3D3N @ CLC3GLS2.4;
bit  LC3G3D3T @ CLC3GLS2.5;
bit  LC3G3D4N @ CLC3GLS2.6;
bit  LC3G3D4T @ CLC3GLS2.7;

bit  LC3G4D1N @ CLC3GLS3.0;
bit  LC3G4D1T @ CLC3GLS3.1;
bit  LC3G4D2N @ CLC3GLS3.2;
bit  LC3G4D2T @ CLC3GLS3.3;
bit  LC3G4D3N @ CLC3GLS3.4;
bit  LC3G4D3T @ CLC3GLS3.5;
bit  LC3G4D4N @ CLC3GLS3.6;
bit  LC3G4D4T @ CLC3GLS3.7;

bit  LC4MODE0 @ CLC4CON.0;
bit  LC4MODE1 @ CLC4CON.1;
bit  LC4MODE2 @ CLC4CON.2;
bit  LC4INTN @ CLC4CON.3;
bit  LC4INTP @ CLC4CON.4;
bit  LC4OUT  @ CLC4CON.5;
bit  LC4EN   @ CLC4CON.7;

bit  LC4G1POL @ CLC4POL.0;
bit  LC4G2POL @ CLC4POL.1;
bit  LC4G3POL @ CLC4POL.2;
bit  LC4G4POL @ CLC4POL.3;
bit  LC4POL  @ CLC4POL.7;

bit  LC4G1D1N @ CLC4GLS0.0;
bit  LC4G1D1T @ CLC4GLS0.1;
bit  LC4G1D2N @ CLC4GLS0.2;
bit  LC4G1D2T @ CLC4GLS0.3;
bit  LC4G1D3N @ CLC4GLS0.4;
bit  LC4G1D3T @ CLC4GLS0.5;
bit  LC4G1D4N @ CLC4GLS0.6;
bit  LC4G1D4T @ CLC4GLS0.7;

bit  LC4G2D1N @ CLC4GLS1.0;
bit  LC4G2D1T @ CLC4GLS1.1;
bit  LC4G2D2N @ CLC4GLS1.2;
bit  LC4G2D2T @ CLC4GLS1.3;
bit  LC4G2D3N @ CLC4GLS1.4;
bit  LC4G2D3T @ CLC4GLS1.5;
bit  LC4G2D4N @ CLC4GLS1.6;
bit  LC4G2D4T @ CLC4GLS1.7;

bit  LC4G3D1N @ CLC4GLS2.0;
bit  LC4G3D1T @ CLC4GLS2.1;
bit  LC4G3D2N @ CLC4GLS2.2;
bit  LC4G3D2T @ CLC4GLS2.3;
bit  LC4G3D3N @ CLC4GLS2.4;
bit  LC4G3D3T @ CLC4GLS2.5;
bit  LC4G3D4N @ CLC4GLS2.6;
bit  LC4G3D4T @ CLC4GLS2.7;

bit  LC4G4D1N @ CLC4GLS3.0;
bit  LC4G4D1T @ CLC4GLS3.1;
bit  LC4G4D2N @ CLC4GLS3.2;
bit  LC4G4D2T @ CLC4GLS3.3;
bit  LC4G4D3N @ CLC4GLS3.4;
bit  LC4G4D3T @ CLC4GLS3.5;
bit  LC4G4D4N @ CLC4GLS3.6;
bit  LC4G4D4T @ CLC4GLS3.7;

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
#pragma config /1 0x3FBF MCLRE = OFF // MCLR/VPP pin function is digital input if LVP bit is also 0.
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
#pragma config /2 0x3FFC WRT = ALL // 0000h to 3FFFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 0000h to 1FFFh write protected, 2000h to 3FFFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 0000h to 01FFh write protected, 200h to 3FFFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3FFB PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly by software
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit cannot be cleared once it is set by software
#pragma config /2 0x3F7F ZCDDIS = OFF // Zero-cross detect circuit is always enabled.
#pragma config /2 0x3FFF ZCDDIS = ON // Zero-cross detect circuit is disabled at POR and can be enabled with ZCDSEN bit.
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
