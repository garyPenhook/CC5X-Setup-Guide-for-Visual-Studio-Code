// HEADER FILE
#pragma chip PIC16F1946, core 14 enh, code 8192, ram 32 : 0x32F

#ifdef ICD2_DEBUG
 #pragma stackLevels 15   // reserve one level for debugging
#endif

#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_enh_style

#pragma wideConstData

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
char PORTD   @ 0x0F;
char PORTE   @ 0x10;
char PIR1    @ 0x11;
char PIR2    @ 0x12;
char PIR3    @ 0x13;
char PIR4    @ 0x14;
char TMR0    @ 0x15;
char TMR1L   @ 0x16;
char TMR1H   @ 0x17;
char T1CON   @ 0x18;
char T1GCON  @ 0x19;
char TMR2    @ 0x1A;
char PR2     @ 0x1B;
char T2CON   @ 0x1C;

char CPSCON0 @ 0x1E;
char CPSCON1 @ 0x1F;

char TRISA   @ 0x8C;
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;
char TRISD   @ 0x8F;
char TRISE   @ 0x90;
char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;
char PIE4    @ 0x94;
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

char LATA    @ 0x10C;
char LATB    @ 0x10D;
char LATC    @ 0x10E;
char LATD    @ 0x10F;
char LATE    @ 0x110;
char CM1CON0 @ 0x111;
char CM1CON1 @ 0x112;
char CM2CON0 @ 0x113;
char CM2CON1 @ 0x114;
char CMOUT   @ 0x115;
char BORCON  @ 0x116;
char FVRCON  @ 0x117;
char DACCON0 @ 0x118;
char DACCON1 @ 0x119;
char SRCON0  @ 0x11A;
char SRCON1  @ 0x11B;

char APFCON  @ 0x11D;
char CM3CON0 @ 0x11E;
char CM3CON1 @ 0x11F;

char ANSELA  @ 0x18C;

char ANSELE  @ 0x190;
char EEADRL  @ 0x191;
char EEADRH  @ 0x192;
char EEDATL  @ 0x193;
char EEDATH  @ 0x194;
char EECON1  @ 0x195;
char EECON2  @ 0x196;

char RC1REG  @ 0x199;
char TX1REG  @ 0x19A;
char SP1BRGL @ 0x19B;
char SP1BRGH @ 0x19C;
char RC1STA  @ 0x19D;
char TX1STA  @ 0x19E;
char BAUD1CON @ 0x19F;

char WPUB    @ 0x20D;

char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char SSP2BUF @ 0x219;
char SSP2ADD @ 0x21A;
char SSP2MSK @ 0x21B;
char SSP2STAT @ 0x21C;
char SSP2CON1 @ 0x21D;
char SSP2CON2 @ 0x21E;
char SSP2CON3 @ 0x21F;

char PORTF   @ 0x28C;
char PORTG   @ 0x28D;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;
char PWM1CON @ 0x294;
char CCP1AS  @ 0x295;
char PSTR1CON @ 0x296;

char CCPR2L  @ 0x298;
char CCPR2H  @ 0x299;
char CCP2CON @ 0x29A;
char PWM2CON @ 0x29B;
char CCP2AS  @ 0x29C;
char PSTR2CON @ 0x29D;
char CCPTMRS0 @ 0x29E;
char CCPTMRS1 @ 0x29F;

char TRISF   @ 0x30C;
char TRISG   @ 0x30D;

char CCPR3L  @ 0x311;
char CCPR3H  @ 0x312;
char CCP3CON @ 0x313;
char PWM3CON @ 0x314;
char CCP3AS  @ 0x315;
char PSTR3CON @ 0x316;

char CCPR4L  @ 0x318;
char CCPR4H  @ 0x319;
char CCP4CON @ 0x31A;

char CCPR5L  @ 0x31C;
char CCPR5H  @ 0x31D;
char CCP5CON @ 0x31E;

char LATF    @ 0x38C;
char LATG    @ 0x38D;

char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;

char ANSELF  @ 0x40C;
char ANSELG  @ 0x40D;

char TMR4    @ 0x415;
char PR4     @ 0x416;
char T4CON   @ 0x417;

char TMR6    @ 0x41C;
char PR6     @ 0x41D;
char T6CON   @ 0x41E;

char WPUG    @ 0x48D;

char RC2REG  @ 0x491;
char TX2REG  @ 0x492;
char SP2BRGL @ 0x493;
char SP2BRGH @ 0x494;
char RC2STA  @ 0x495;
char TX2STA  @ 0x496;
char BAUD2CON @ 0x497;

char LCDCON  @ 0x791;
char LCDPS   @ 0x792;
char LCDREF  @ 0x793;
char LCDCST  @ 0x794;
char LCDRL   @ 0x795;

char LCDSE0  @ 0x798;
char LCDSE1  @ 0x799;
char LCDSE2  @ 0x79A;
char LCDSE3  @ 0x79B;
char LCDSE4  @ 0x79C;
char LCDSE5  @ 0x79D;

char LCDDATA0 @ 0x7A0;
char LCDDATA1 @ 0x7A1;
char LCDDATA2 @ 0x7A2;
char LCDDATA3 @ 0x7A3;
char LCDDATA4 @ 0x7A4;
char LCDDATA5 @ 0x7A5;
char LCDDATA6 @ 0x7A6;
char LCDDATA7 @ 0x7A7;
char LCDDATA8 @ 0x7A8;
char LCDDATA9 @ 0x7A9;
char LCDDATA10 @ 0x7AA;
char LCDDATA11 @ 0x7AB;
char LCDDATA12 @ 0x7AC;
char LCDDATA13 @ 0x7AD;
char LCDDATA14 @ 0x7AE;
char LCDDATA15 @ 0x7AF;
char LCDDATA16 @ 0x7B0;
char LCDDATA17 @ 0x7B1;
char LCDDATA18 @ 0x7B2;
char LCDDATA19 @ 0x7B3;
char LCDDATA20 @ 0x7B4;
char LCDDATA21 @ 0x7B5;
char LCDDATA22 @ 0x7B6;
char LCDDATA23 @ 0x7B7;

char STATUS_SHAD @ 0xFE4;
char WREG_SHAD   @ 0xFE5;
char BSR_SHAD    @ 0xFE6;
char PCLATH_SHAD @ 0xFE7;
char FSR0L_SHAD  @ 0xFE8;
char FSR0H_SHAD  @ 0xFE9;
char FSR1L_SHAD  @ 0xFEA;
char FSR1H_SHAD  @ 0xFEB;

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
bit  SSPIF   @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  CCP2IF  @ PIR2.0;
bit  C3IF    @ PIR2.1;
bit  LCDIF   @ PIR2.2;
bit  BCLIF   @ PIR2.3;
bit  EEIF    @ PIR2.4;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

bit  TMR4IF  @ PIR3.1;
bit  TMR6IF  @ PIR3.3;
bit  CCP3IF  @ PIR3.4;
bit  CCP4IF  @ PIR3.5;
bit  CCP5IF  @ PIR3.6;

bit  SSP2IF  @ PIR4.0;
bit  BCL2IF  @ PIR4.1;
bit  TX2IF   @ PIR4.4;
bit  RC2IF   @ PIR4.5;

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

bit  T0XCS   @ CPSCON0.0;
bit  CPSOUT  @ CPSCON0.1;
bit  CPSRNG0 @ CPSCON0.2;
bit  CPSRNG1 @ CPSCON0.3;
bit  CPSRM   @ CPSCON0.6;
bit  CPSON   @ CPSCON0.7;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  CCP1IE  @ PIE1.2;
bit  SSPIE   @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  C3IE    @ PIE2.1;
bit  LCDIE   @ PIE2.2;
bit  BCLIE   @ PIE2.3;
bit  EEIE    @ PIE2.4;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

bit  TMR4IE  @ PIE3.1;
bit  TMR6IE  @ PIE3.3;
bit  CCP3IE  @ PIE3.4;
bit  CCP4IE  @ PIE3.5;
bit  CCP5IE  @ PIE3.6;

bit  SSP2IE  @ PIE4.0;
bit  BCL2IE  @ PIE4.1;
bit  TX2IE   @ PIE4.4;
bit  RC2IE   @ PIE4.5;

bit  PS0     @ OPTION_REG.0;
bit  PS1     @ OPTION_REG.1;
bit  PS2     @ OPTION_REG.2;
bit  PSA     @ OPTION_REG.3;
bit  T0SE    @ OPTION_REG.4;
bit  T0CS    @ OPTION_REG.5;
bit  INTEDG  @ OPTION_REG.6;
bit  WPUEN_  @ OPTION_REG.7;

bit  BOR_    @ PCON.0;
bit  POR_    @ PCON.1;
bit  RI_     @ PCON.2;
bit  RMCLR_  @ PCON.3;
bit  STKUNF  @ PCON.6;
bit  STKOVF  @ PCON.7;

bit  SWDTEN  @ WDTCON.0;

bit  SCS0    @ OSCCON.0;
bit  SCS1    @ OSCCON.1;
bit  SPLLEN  @ OSCCON.7;

bit  LFIOFR  @ OSCSTAT.1;
bit  MFIOFR  @ OSCSTAT.2;
bit  HFIOFL  @ OSCSTAT.3;
bit  HFIOFR  @ OSCSTAT.4;
bit  OSTS    @ OSCSTAT.5;
bit  PLLR    @ OSCSTAT.6;
bit  T1OSCR  @ OSCSTAT.7;

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
bit  ADCS0   @ ADCON1.4;
bit  ADCS1   @ ADCON1.5;
bit  ADCS2   @ ADCON1.6;
bit  ADFM    @ ADCON1.7;

bit  C1SYNC  @ CM1CON0.0;
bit  C1HYS   @ CM1CON0.1;
bit  C1SP    @ CM1CON0.2;
bit  C1POL   @ CM1CON0.4;
bit  C1OE    @ CM1CON0.5;
bit  C1OUT   @ CM1CON0.6;
bit  C1ON    @ CM1CON0.7;

bit  C1NCH0  @ CM1CON1.0;
bit  C1NCH1  @ CM1CON1.1;
bit  C1PCH0  @ CM1CON1.4;
bit  C1PCH1  @ CM1CON1.5;
bit  C1INTN  @ CM1CON1.6;
bit  C1INTP  @ CM1CON1.7;

bit  C2SYNC  @ CM2CON0.0;
bit  C2HYS   @ CM2CON0.1;
bit  C2SP    @ CM2CON0.2;
bit  C2POL   @ CM2CON0.4;
bit  C2OE    @ CM2CON0.5;
bit  C2OUT   @ CM2CON0.6;
bit  C2ON    @ CM2CON0.7;

bit  C2NCH0  @ CM2CON1.0;
bit  C2NCH1  @ CM2CON1.1;
bit  C2PCH0  @ CM2CON1.4;
bit  C2PCH1  @ CM2CON1.5;
bit  C2INTN  @ CM2CON1.6;
bit  C2INTP  @ CM2CON1.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;
bit  MC3OUT  @ CMOUT.2;

bit  BORRDY  @ BORCON.0;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  CDAFVR0 @ FVRCON.2;
bit  CDAFVR1 @ FVRCON.3;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  DACNSS  @ DACCON0.0;
bit  DACPSS0 @ DACCON0.2;
bit  DACPSS1 @ DACCON0.3;
bit  DACOE   @ DACCON0.5;
bit  DACLPS  @ DACCON0.6;
bit  DACEN   @ DACCON0.7;

bit  SRPR    @ SRCON0.0;
bit  SRPS    @ SRCON0.1;
bit  SRNQEN  @ SRCON0.2;
bit  SRQEN   @ SRCON0.3;
bit  SRCLK0  @ SRCON0.4;
bit  SRCLK1  @ SRCON0.5;
bit  SRCLK2  @ SRCON0.6;
bit  SRLEN   @ SRCON0.7;

bit  SRRC1E  @ SRCON1.0;
bit  SRRC2E  @ SRCON1.1;
bit  SRRCKE  @ SRCON1.2;
bit  SRRPE   @ SRCON1.3;
bit  SRSC1E  @ SRCON1.4;
bit  SRSC2E  @ SRCON1.5;
bit  SRSCKE  @ SRCON1.6;
bit  SRSPE   @ SRCON1.7;

bit  P1BSEL  @ APFCON.0;
bit  P1CSEL  @ APFCON.1;
bit  CCP2SEL @ APFCON.2;
bit  P2BSEL  @ APFCON.3;
bit  P2CSEL  @ APFCON.4;
bit  P2DSEL  @ APFCON.5;
bit  P3BSEL  @ APFCON.6;
bit  P3CSEL  @ APFCON.7;

bit  C3SYNC  @ CM3CON0.0;
bit  C3HYS   @ CM3CON0.1;
bit  C3SP    @ CM3CON0.2;
bit  C3POL   @ CM3CON0.4;
bit  C3OE    @ CM3CON0.5;
bit  C3OUT   @ CM3CON0.6;
bit  C3ON    @ CM3CON0.7;

bit  C3NCH0  @ CM3CON1.0;
bit  C3NCH1  @ CM3CON1.1;
bit  C3PCH0  @ CM3CON1.4;
bit  C3PCH1  @ CM3CON1.5;
bit  C3INTN  @ CM3CON1.6;
bit  C3INTP  @ CM3CON1.7;

bit  RD      @ EECON1.0;
bit  WR      @ EECON1.1;
bit  WREN    @ EECON1.2;
bit  WRERR   @ EECON1.3;
bit  FREE    @ EECON1.4;
bit  LWLO    @ EECON1.5;
bit  CFGS    @ EECON1.6;
bit  EEPGD   @ EECON1.7;

bit  RX9D1   @ RC1STA.0;
bit  OERR1   @ RC1STA.1;
bit  FERR1   @ RC1STA.2;
bit  ADDEN1  @ RC1STA.3;
bit  CREN1   @ RC1STA.4;
bit  SREN1   @ RC1STA.5;
bit  RX9_1   @ RC1STA.6;
bit  SPEN1   @ RC1STA.7;

bit  TX9D1   @ TX1STA.0;
bit  TRMT1   @ TX1STA.1;
bit  BRGH1   @ TX1STA.2;
bit  SENDB1  @ TX1STA.3;
bit  SYNC1   @ TX1STA.4;
bit  TXEN1   @ TX1STA.5;
bit  TX9_1   @ TX1STA.6;
bit  CSRC1   @ TX1STA.7;

bit  ABDEN1  @ BAUD1CON.0;
bit  WUE1    @ BAUD1CON.1;
bit  BRG16_1 @ BAUD1CON.3;
bit  SCKP1   @ BAUD1CON.4;
bit  RCIDL1  @ BAUD1CON.6;
bit  ABDOVF1 @ BAUD1CON.7;

bit  BF1     @ SSP1STAT.0;
bit  UA1     @ SSP1STAT.1;
bit  RW_1    @ SSP1STAT.2;
bit  S1      @ SSP1STAT.3;
bit  P1      @ SSP1STAT.4;
bit  DA_1    @ SSP1STAT.5;
bit  CKE1    @ SSP1STAT.6;
bit  SMP1    @ SSP1STAT.7;

bit  CKP1    @ SSP1CON1.4;
bit  SSPEN1  @ SSP1CON1.5;
bit  SSPOV1  @ SSP1CON1.6;
bit  WCOL1   @ SSP1CON1.7;

bit  SEN1    @ SSP1CON2.0;
bit  RSEN1   @ SSP1CON2.1;
bit  PEN1    @ SSP1CON2.2;
bit  RCEN1   @ SSP1CON2.3;
bit  ACKEN1  @ SSP1CON2.4;
bit  ACKDT1  @ SSP1CON2.5;
bit  ACKSTAT1 @ SSP1CON2.6;
bit  GCEN1   @ SSP1CON2.7;

bit  DHEN1   @ SSP1CON3.0;
bit  AHEN1   @ SSP1CON3.1;
bit  SBCDE1  @ SSP1CON3.2;
bit  SDAHT1  @ SSP1CON3.3;
bit  BOEN1   @ SSP1CON3.4;
bit  SCIE1   @ SSP1CON3.5;
bit  PCIE1   @ SSP1CON3.6;
bit  ACKTIM1 @ SSP1CON3.7;

bit  BF2     @ SSP2STAT.0;
bit  UA2     @ SSP2STAT.1;
bit  RW_2    @ SSP2STAT.2;
bit  S2      @ SSP2STAT.3;
bit  P2      @ SSP2STAT.4;
bit  DA_2    @ SSP2STAT.5;
bit  CKE2    @ SSP2STAT.6;
bit  SMP2    @ SSP2STAT.7;

bit  CKP2    @ SSP2CON1.4;
bit  SSPEN2  @ SSP2CON1.5;
bit  SSPOV2  @ SSP2CON1.6;
bit  WCOL2   @ SSP2CON1.7;

bit  SEN2    @ SSP2CON2.0;
bit  RSEN2   @ SSP2CON2.1;
bit  PEN2    @ SSP2CON2.2;
bit  RCEN2   @ SSP2CON2.3;
bit  ACKEN2  @ SSP2CON2.4;
bit  ACKDT2  @ SSP2CON2.5;
bit  ACKSTAT2 @ SSP2CON2.6;
bit  GCEN2   @ SSP2CON2.7;

bit  DHEN2   @ SSP2CON3.0;
bit  AHEN2   @ SSP2CON3.1;
bit  SBCDE2  @ SSP2CON3.2;
bit  SDAHT2  @ SSP2CON3.3;
bit  BOEN2   @ SSP2CON3.4;
bit  SCIE2   @ SSP2CON3.5;
bit  PCIE2   @ SSP2CON3.6;
bit  ACKTIM2 @ SSP2CON3.7;

bit  CCP1M0  @ CCP1CON.0;
bit  CCP1M1  @ CCP1CON.1;
bit  CCP1M2  @ CCP1CON.2;
bit  CCP1M3  @ CCP1CON.3;
bit  DC1B0   @ CCP1CON.4;
bit  DC1B1   @ CCP1CON.5;
bit  P1M0    @ CCP1CON.6;
bit  P1M1    @ CCP1CON.7;

bit  P1RSEN  @ PWM1CON.7;

bit  PSS1BD0 @ CCP1AS.0;
bit  PSS1BD1 @ CCP1AS.1;
bit  PSS1AC0 @ CCP1AS.2;
bit  PSS1AC1 @ CCP1AS.3;
bit  CCP1AS0 @ CCP1AS.4;
bit  CCP1AS1 @ CCP1AS.5;
bit  CCP1AS2 @ CCP1AS.6;
bit  CCP1ASE @ CCP1AS.7;

bit  STR1A   @ PSTR1CON.0;
bit  STR1B   @ PSTR1CON.1;
bit  STR1C   @ PSTR1CON.2;
bit  STR1D   @ PSTR1CON.3;
bit  STR1SYNC @ PSTR1CON.4;

bit  CCP2M0  @ CCP2CON.0;
bit  CCP2M1  @ CCP2CON.1;
bit  CCP2M2  @ CCP2CON.2;
bit  CCP2M3  @ CCP2CON.3;
bit  DC2B0   @ CCP2CON.4;
bit  DC2B1   @ CCP2CON.5;
bit  P2M0    @ CCP2CON.6;
bit  P2M1    @ CCP2CON.7;

bit  P2RSEN  @ PWM2CON.7;

bit  PSS2BD0 @ CCP2AS.0;
bit  PSS2BD1 @ CCP2AS.1;
bit  PSS2AC0 @ CCP2AS.2;
bit  PSS2AC1 @ CCP2AS.3;
bit  CCP2AS0 @ CCP2AS.4;
bit  CCP2AS1 @ CCP2AS.5;
bit  CCP2AS2 @ CCP2AS.6;
bit  CCP2ASE @ CCP2AS.7;

bit  STR2A   @ PSTR2CON.0;
bit  STR2B   @ PSTR2CON.1;
bit  STR2C   @ PSTR2CON.2;
bit  STR2D   @ PSTR2CON.3;
bit  STR2SYNC @ PSTR2CON.4;

bit  C1TSEL0 @ CCPTMRS0.0;
bit  C1TSEL1 @ CCPTMRS0.1;
bit  C2TSEL0 @ CCPTMRS0.2;
bit  C2TSEL1 @ CCPTMRS0.3;
bit  C3TSEL0 @ CCPTMRS0.4;
bit  C3TSEL1 @ CCPTMRS0.5;
bit  C4TSEL0 @ CCPTMRS0.6;
bit  C4TSEL1 @ CCPTMRS0.7;

bit  C5TSEL0 @ CCPTMRS1.0;
bit  C5TSEL1 @ CCPTMRS1.1;

bit  CCP3M0  @ CCP3CON.0;
bit  CCP3M1  @ CCP3CON.1;
bit  CCP3M2  @ CCP3CON.2;
bit  CCP3M3  @ CCP3CON.3;
bit  DC3B0   @ CCP3CON.4;
bit  DC3B1   @ CCP3CON.5;
bit  P3M0    @ CCP3CON.6;
bit  P3M1    @ CCP3CON.7;

bit  P3RSEN  @ PWM3CON.7;

bit  PSS3BD0 @ CCP3AS.0;
bit  PSS3BD1 @ CCP3AS.1;
bit  PSS3AC0 @ CCP3AS.2;
bit  PSS3AC1 @ CCP3AS.3;
bit  CCP3AS0 @ CCP3AS.4;
bit  CCP3AS1 @ CCP3AS.5;
bit  CCP3AS2 @ CCP3AS.6;
bit  CCP3ASE @ CCP3AS.7;

bit  STR3A   @ PSTR3CON.0;
bit  STR3B   @ PSTR3CON.1;
bit  STR3C   @ PSTR3CON.2;
bit  STR3D   @ PSTR3CON.3;
bit  STR3SYNC @ PSTR3CON.4;

bit  CCP4M0  @ CCP4CON.0;
bit  CCP4M1  @ CCP4CON.1;
bit  CCP4M2  @ CCP4CON.2;
bit  CCP4M3  @ CCP4CON.3;
bit  DC4B0   @ CCP4CON.4;
bit  DC4B1   @ CCP4CON.5;

bit  CCP5M0  @ CCP5CON.0;
bit  CCP5M1  @ CCP5CON.1;
bit  CCP5M2  @ CCP5CON.2;
bit  CCP5M3  @ CCP5CON.3;
bit  DC5B0   @ CCP5CON.4;
bit  DC5B1   @ CCP5CON.5;

bit  T4CKPS0 @ T4CON.0;
bit  T4CKPS1 @ T4CON.1;
bit  TMR4ON  @ T4CON.2;

bit  T6CKPS0 @ T6CON.0;
bit  T6CKPS1 @ T6CON.1;
bit  TMR6ON  @ T6CON.2;

bit  WPUG5   @ WPUG.5;

bit  RX9D2   @ RC2STA.0;
bit  OERR2   @ RC2STA.1;
bit  FERR2   @ RC2STA.2;
bit  ADDEN2  @ RC2STA.3;
bit  CREN2   @ RC2STA.4;
bit  SREN2   @ RC2STA.5;
bit  RX9_2   @ RC2STA.6;
bit  SPEN2   @ RC2STA.7;

bit  TX9D2   @ TX2STA.0;
bit  TRMT2   @ TX2STA.1;
bit  BRGH2   @ TX2STA.2;
bit  SENDB2  @ TX2STA.3;
bit  SYNC2   @ TX2STA.4;
bit  TXEN2   @ TX2STA.5;
bit  TX9_2   @ TX2STA.6;
bit  CSRC2   @ TX2STA.7;

bit  ABDEN2  @ BAUD2CON.0;
bit  WUE2    @ BAUD2CON.1;
bit  BRG16_2 @ BAUD2CON.3;
bit  SCKP2   @ BAUD2CON.4;
bit  RCIDL2  @ BAUD2CON.6;
bit  ABDOVF2 @ BAUD2CON.7;

bit  LMUX0   @ LCDCON.0;
bit  LMUX1   @ LCDCON.1;
bit  CS0     @ LCDCON.2;
bit  CS1     @ LCDCON.3;
bit  WERR    @ LCDCON.5;
bit  SLPEN   @ LCDCON.6;
bit  LCDEN   @ LCDCON.7;

bit  LP0     @ LCDPS.0;
bit  LP1     @ LCDPS.1;
bit  LP2     @ LCDPS.2;
bit  LP3     @ LCDPS.3;
bit  WA      @ LCDPS.4;
bit  LCDA    @ LCDPS.5;
bit  BIASMD  @ LCDPS.6;
bit  WFT     @ LCDPS.7;

bit  VLCD1PE @ LCDREF.1;
bit  VLCD2PE @ LCDREF.2;
bit  VLCD3PE @ LCDREF.3;
bit  LCDIRI  @ LCDREF.5;
bit  LCDIRS  @ LCDREF.6;
bit  LCDIRE  @ LCDREF.7;

bit  LRLAT0  @ LCDRL.0;
bit  LRLAT1  @ LCDRL.1;
bit  LRLAT2  @ LCDRL.2;
bit  LRLBP0  @ LCDRL.4;
bit  LRLBP1  @ LCDRL.5;
bit  LRLAP0  @ LCDRL.6;
bit  LRLAP1  @ LCDRL.7;

bit  SE0     @ LCDSE0.0;
bit  SE1     @ LCDSE0.1;
bit  SE2     @ LCDSE0.2;
bit  SE3     @ LCDSE0.3;
bit  SE4     @ LCDSE0.4;
bit  SE5     @ LCDSE0.5;
bit  SE6     @ LCDSE0.6;
bit  SE7     @ LCDSE0.7;

bit  SE8     @ LCDSE1.0;
bit  SE9     @ LCDSE1.1;
bit  SE10    @ LCDSE1.2;
bit  SE11    @ LCDSE1.3;
bit  SE12    @ LCDSE1.4;
bit  SE13    @ LCDSE1.5;
bit  SE14    @ LCDSE1.6;
bit  SE15    @ LCDSE1.7;

bit  SE16    @ LCDSE2.0;
bit  SE17    @ LCDSE2.1;
bit  SE18    @ LCDSE2.2;
bit  SE19    @ LCDSE2.3;
bit  SE20    @ LCDSE2.4;
bit  SE21    @ LCDSE2.5;
bit  SE22    @ LCDSE2.6;
bit  SE23    @ LCDSE2.7;

bit  SE24    @ LCDSE3.0;
bit  SE25    @ LCDSE3.1;
bit  SE26    @ LCDSE3.2;
bit  SE27    @ LCDSE3.3;
bit  SE28    @ LCDSE3.4;
bit  SE29    @ LCDSE3.5;
bit  SE30    @ LCDSE3.6;
bit  SE31    @ LCDSE3.7;

bit  SE32    @ LCDSE4.0;
bit  SE33    @ LCDSE4.1;
bit  SE34    @ LCDSE4.2;
bit  SE35    @ LCDSE4.3;
bit  SE36    @ LCDSE4.4;
bit  SE37    @ LCDSE4.5;
bit  SE38    @ LCDSE4.6;
bit  SE39    @ LCDSE4.7;

bit  SE40    @ LCDSE5.0;
bit  SE41    @ LCDSE5.1;
bit  SE42    @ LCDSE5.2;
bit  SE43    @ LCDSE5.3;
bit  SE44    @ LCDSE5.4;
bit  SE45    @ LCDSE5.5;

bit  SEG0COM0 @ LCDDATA0.0;
bit  SEG1COM0 @ LCDDATA0.1;
bit  SEG2COM0 @ LCDDATA0.2;
bit  SEG3COM0 @ LCDDATA0.3;
bit  SEG4COM0 @ LCDDATA0.4;
bit  SEG5COM0 @ LCDDATA0.5;
bit  SEG6COM0 @ LCDDATA0.6;
bit  SEG7COM0 @ LCDDATA0.7;

bit  SEG8COM0 @ LCDDATA1.0;
bit  SEG9COM0 @ LCDDATA1.1;
bit  SEG10COM0 @ LCDDATA1.2;
bit  SEG11COM0 @ LCDDATA1.3;
bit  SEG12COM0 @ LCDDATA1.4;
bit  SEG13COM0 @ LCDDATA1.5;
bit  SEG14COM0 @ LCDDATA1.6;
bit  SEG15COM0 @ LCDDATA1.7;

bit  SEG16COM0 @ LCDDATA2.0;
bit  SEG17COM0 @ LCDDATA2.1;
bit  SEG18COM0 @ LCDDATA2.2;
bit  SEG19COM0 @ LCDDATA2.3;
bit  SEG20COM0 @ LCDDATA2.4;
bit  SEG21COM0 @ LCDDATA2.5;
bit  SEG22COM0 @ LCDDATA2.6;
bit  SEG23COM0 @ LCDDATA2.7;

bit  SEG0COM1 @ LCDDATA3.0;
bit  SEG1COM1 @ LCDDATA3.1;
bit  SEG2COM1 @ LCDDATA3.2;
bit  SEG3COM1 @ LCDDATA3.3;
bit  SEG4COM1 @ LCDDATA3.4;
bit  SEG5COM1 @ LCDDATA3.5;
bit  SEG6COM1 @ LCDDATA3.6;
bit  SEG7COM1 @ LCDDATA3.7;

bit  SEG8COM1 @ LCDDATA4.0;
bit  SEG9COM1 @ LCDDATA4.1;
bit  SEG10COM1 @ LCDDATA4.2;
bit  SEG11COM1 @ LCDDATA4.3;
bit  SEG12COM1 @ LCDDATA4.4;
bit  SEG13COM1 @ LCDDATA4.5;
bit  SEG14COM1 @ LCDDATA4.6;
bit  SEG15COM1 @ LCDDATA4.7;

bit  SEG16COM1 @ LCDDATA5.0;
bit  SEG17COM1 @ LCDDATA5.1;
bit  SEG18COM1 @ LCDDATA5.2;
bit  SEG19COM1 @ LCDDATA5.3;
bit  SEG20COM1 @ LCDDATA5.4;
bit  SEG21COM1 @ LCDDATA5.5;
bit  SEG22COM1 @ LCDDATA5.6;
bit  SEG23COM1 @ LCDDATA5.7;

bit  SEG0COM2 @ LCDDATA6.0;
bit  SEG1COM2 @ LCDDATA6.1;
bit  SEG2COM2 @ LCDDATA6.2;
bit  SEG3COM2 @ LCDDATA6.3;
bit  SEG4COM2 @ LCDDATA6.4;
bit  SEG5COM2 @ LCDDATA6.5;
bit  SEG6COM2 @ LCDDATA6.6;
bit  SEG7COM2 @ LCDDATA6.7;

bit  SEG8COM2 @ LCDDATA7.0;
bit  SEG9COM2 @ LCDDATA7.1;
bit  SEG10COM2 @ LCDDATA7.2;
bit  SEG11COM2 @ LCDDATA7.3;
bit  SEG12COM2 @ LCDDATA7.4;
bit  SEG13COM2 @ LCDDATA7.5;
bit  SEG14COM2 @ LCDDATA7.6;
bit  SEG15COM2 @ LCDDATA7.7;

bit  SEG16COM2 @ LCDDATA8.0;
bit  SEG17COM2 @ LCDDATA8.1;
bit  SEG18COM2 @ LCDDATA8.2;
bit  SEG19COM2 @ LCDDATA8.3;
bit  SEG20COM2 @ LCDDATA8.4;
bit  SEG21COM2 @ LCDDATA8.5;
bit  SEG22COM2 @ LCDDATA8.6;
bit  SEG23COM2 @ LCDDATA8.7;

bit  SEG0COM3 @ LCDDATA9.0;
bit  SEG1COM3 @ LCDDATA9.1;
bit  SEG2COM3 @ LCDDATA9.2;
bit  SEG3COM3 @ LCDDATA9.3;
bit  SEG4COM3 @ LCDDATA9.4;
bit  SEG5COM3 @ LCDDATA9.5;
bit  SEG6COM3 @ LCDDATA9.6;
bit  SEG7COM3 @ LCDDATA9.7;

bit  SEG8COM3 @ LCDDATA10.0;
bit  SEG9COM3 @ LCDDATA10.1;
bit  SEG10COM3 @ LCDDATA10.2;
bit  SEG11COM3 @ LCDDATA10.3;
bit  SEG12COM3 @ LCDDATA10.4;
bit  SEG13COM3 @ LCDDATA10.5;
bit  SEG14COM3 @ LCDDATA10.6;
bit  SEG15COM3 @ LCDDATA10.7;

bit  SEG16COM3 @ LCDDATA11.0;
bit  SEG17COM3 @ LCDDATA11.1;
bit  SEG18COM3 @ LCDDATA11.2;
bit  SEG19COM3 @ LCDDATA11.3;
bit  SEG20COM3 @ LCDDATA11.4;
bit  SEG21COM3 @ LCDDATA11.5;
bit  SEG22COM3 @ LCDDATA11.6;
bit  SEG23COM3 @ LCDDATA11.7;

bit  SEG24COM0 @ LCDDATA12.0;
bit  SEG25COM0 @ LCDDATA12.1;
bit  SEG26COM0 @ LCDDATA12.2;
bit  SEG27COM0 @ LCDDATA12.3;
bit  SEG28COM0 @ LCDDATA12.4;
bit  SEG29COM0 @ LCDDATA12.5;
bit  SEG30COM0 @ LCDDATA12.6;
bit  SEG31COM0 @ LCDDATA12.7;

bit  SEG32COM0 @ LCDDATA13.0;
bit  SEG33COM0 @ LCDDATA13.1;
bit  SEG34COM0 @ LCDDATA13.2;
bit  SEG35COM0 @ LCDDATA13.3;
bit  SEG36COM0 @ LCDDATA13.4;
bit  SEG37COM0 @ LCDDATA13.5;
bit  SEG38COM0 @ LCDDATA13.6;
bit  SEG39COM0 @ LCDDATA13.7;

bit  SEG40COM0 @ LCDDATA14.0;
bit  SEG41COM0 @ LCDDATA14.1;
bit  SEG42COM0 @ LCDDATA14.2;
bit  SEG43COM0 @ LCDDATA14.3;
bit  SEG44COM0 @ LCDDATA14.4;
bit  SEG45COM0 @ LCDDATA14.5;

bit  SEG24COM1 @ LCDDATA15.0;
bit  SEG25COM1 @ LCDDATA15.1;
bit  SEG26COM1 @ LCDDATA15.2;
bit  SEG27COM1 @ LCDDATA15.3;
bit  SEG28COM1 @ LCDDATA15.4;
bit  SEG29COM1 @ LCDDATA15.5;
bit  SEG30COM1 @ LCDDATA15.6;
bit  SEG31COM1 @ LCDDATA15.7;

bit  SEG32COM1 @ LCDDATA16.0;
bit  SEG33COM1 @ LCDDATA16.1;
bit  SEG34COM1 @ LCDDATA16.2;
bit  SEG35COM1 @ LCDDATA16.3;
bit  SEG36COM1 @ LCDDATA16.4;
bit  SEG37COM1 @ LCDDATA16.5;
bit  SEG38COM1 @ LCDDATA16.6;
bit  SEG39COM1 @ LCDDATA16.7;

bit  SEG40COM1 @ LCDDATA17.0;
bit  SEG41COM1 @ LCDDATA17.1;
bit  SEG42COM1 @ LCDDATA17.2;
bit  SEG43COM1 @ LCDDATA17.3;
bit  SEG44COM1 @ LCDDATA17.4;
bit  SEG45COM1 @ LCDDATA17.5;

bit  SEG24COM2 @ LCDDATA18.0;
bit  SEG25COM2 @ LCDDATA18.1;
bit  SEG26COM2 @ LCDDATA18.2;
bit  SEG27COM2 @ LCDDATA18.3;
bit  SEG28COM2 @ LCDDATA18.4;
bit  SEG29COM2 @ LCDDATA18.5;
bit  SEG30COM2 @ LCDDATA18.6;
bit  SEG31COM2 @ LCDDATA18.7;

bit  SEG32COM2 @ LCDDATA19.0;
bit  SEG33COM2 @ LCDDATA19.1;
bit  SEG34COM2 @ LCDDATA19.2;
bit  SEG35COM2 @ LCDDATA19.3;
bit  SEG36COM2 @ LCDDATA19.4;
bit  SEG37COM2 @ LCDDATA19.5;
bit  SEG38COM2 @ LCDDATA19.6;
bit  SEG39COM2 @ LCDDATA19.7;

bit  SEG40COM2 @ LCDDATA20.0;
bit  SEG41COM2 @ LCDDATA20.1;
bit  SEG42COM2 @ LCDDATA20.2;
bit  SEG43COM2 @ LCDDATA20.3;
bit  SEG44COM2 @ LCDDATA20.4;
bit  SEG45COM2 @ LCDDATA20.5;

bit  SEG24COM3 @ LCDDATA21.0;
bit  SEG25COM3 @ LCDDATA21.1;
bit  SEG26COM3 @ LCDDATA21.2;
bit  SEG27COM3 @ LCDDATA21.3;
bit  SEG28COM3 @ LCDDATA21.4;
bit  SEG29COM3 @ LCDDATA21.5;
bit  SEG30COM3 @ LCDDATA21.6;
bit  SEG31COM3 @ LCDDATA21.7;

bit  SEG32COM3 @ LCDDATA22.0;
bit  SEG33COM3 @ LCDDATA22.1;
bit  SEG34COM3 @ LCDDATA22.2;
bit  SEG35COM3 @ LCDDATA22.3;
bit  SEG36COM3 @ LCDDATA22.4;
bit  SEG37COM3 @ LCDDATA22.5;
bit  SEG38COM3 @ LCDDATA22.6;
bit  SEG39COM3 @ LCDDATA22.7;

bit  SEG40COM3 @ LCDDATA23.0;
bit  SEG41COM3 @ LCDDATA23.1;
bit  SEG42COM3 @ LCDDATA23.2;
bit  SEG43COM3 @ LCDDATA23.3;
bit  SEG44COM3 @ LCDDATA23.4;
bit  SEG45COM3 @ LCDDATA23.5;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FOSC = LP // LP Oscillator, Low-power crystal connected between OSC1 and OSC2 pins
#pragma config /1 0x3FF9 FOSC = XT // XT Oscillator, Crystal/resonator connected between OSC1 and OSC2 pins
#pragma config /1 0x3FFA FOSC = HS // HS Oscillator, High-speed crystal/resonator connected between OSC1 and OSC2 pins
#pragma config /1 0x3FFB FOSC = EXTRC // EXTRC oscillator: External RC circuit connected to CLKIN pin
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator: I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pin
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pin
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-32 MHz): device clock supplied to CLKIN pin
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
#pragma config /1 0x3EFF CPD = ON // Data memory code protection is enabled
#pragma config /1 0x3FFF CPD = OFF // Data memory code protection is disabled
#pragma config /1 0x39FF BOREN = OFF // Brown-out Reset disabled
#pragma config /1 0x3BFF BOREN = SBODEN // Brown-out Reset controlled by the SBOREN bit in the BORCON register
#pragma config /1 0x3DFF BOREN = NSLEEP // Brown-out Reset enabled while running and disabled in Sleep
#pragma config /1 0x3FFF BOREN = ON // Brown-out Reset enabled
#pragma config /1 0x37FF CLKOUTEN = ON // CLKOUT function is enabled on the CLKOUT pin
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config /1 0x2FFF IESO = OFF // Internal/External Switchover mode is disabled
#pragma config /1 0x3FFF IESO = ON // Internal/External Switchover mode is enabled
#pragma config /1 0x1FFF FCMEN = OFF // Fail-Safe Clock Monitor is disabled
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor is enabled
#pragma config /2 0x3FFC WRT = ALL // 000h to 1FFFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#ifdef _16F1946
#pragma config /2 0x3FEF VCAPEN = ON // VCAP functionality is enabled on VCAP pin
#pragma config /2 0x3FFF VCAPEN = OFF // VCAP pin functionality is disabled
#endif
#pragma config /2 0x3EFF PLLEN = OFF // 4x PLL disabled
#pragma config /2 0x3FFF PLLEN = ON // 4x PLL enabled
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3BFF BORV = 25 // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x3FFF BORV = 19 // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
