// HEADER FILE
#pragma chip PIC12F1571, core 14 enh, code 1024, ram 32 : 0xBF // 128 bytes
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

char CM1CON0 @ 0x111;
char CM1CON1 @ 0x112;

char CMOUT   @ 0x115;
char BORCON  @ 0x116;
char FVRCON  @ 0x117;
char DACCON0 @ 0x118;
char DACCON1 @ 0x119;

char APFCON  @ 0x11D;

char ANSELA  @ 0x18C;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;
#if _12F1571
char VREGCON @ 0x197;
#endif

char WPUA    @ 0x20C;

char ODCONA  @ 0x28C;

char SLRCONA @ 0x30C;

char INLVLA  @ 0x38C;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;

char CWG1DBR @ 0x691;
char CWG1DBF @ 0x692;
char CWG1CON0 @ 0x693;
char CWG1CON1 @ 0x694;
char CWG1CON2 @ 0x695;

char PWMEN   @ 0xD8E;
char PWMLD   @ 0xD8F;
char PWMOUT  @ 0xD90;
char PWM1PHL @ 0xD91;
char PWM1PHH @ 0xD92;
char PWM1DCL @ 0xD93;
char PWM1DCH @ 0xD94;
char PWM1PRL @ 0xD95;
char PWM1PRH @ 0xD96;
char PWM1OFL @ 0xD97;
char PWM1OFH @ 0xD98;
char PWM1TMRL @ 0xD99;
char PWM1TMRH @ 0xD9A;
char PWM1CON @ 0xD9B;
char PWM1IER @ 0xD9C;
char PWM1IFR @ 0xD9D;
char PWM1CLKCON @ 0xD9E;
char PWM1LDCON @ 0xD9F;
char PWM1OFCON @ 0xDA0;
char PWM2PHL @ 0xDA1;
char PWM2PHH @ 0xDA2;
char PWM2DCL @ 0xDA3;
char PWM2DCH @ 0xDA4;
char PWM2PRL @ 0xDA5;
char PWM2PRH @ 0xDA6;
char PWM2OFL @ 0xDA7;
char PWM2OFH @ 0xDA8;
char PWM2TMRL @ 0xDA9;
char PWM2TMRH @ 0xDAA;
char PWM2CON @ 0xDAB;
char PWM2IER @ 0xDAC;
char PWM2IFR @ 0xDAD;
char PWM2CLKCON @ 0xDAE;
char PWM2LDCON @ 0xDAF;
char PWM2OFCON @ 0xDB0;
char PWM3PHL @ 0xDB1;
char PWM3PHH @ 0xDB2;
char PWM3DCL @ 0xDB3;
char PWM3DCH @ 0xDB4;
char PWM3PRL @ 0xDB5;
char PWM3PRH @ 0xDB6;
char PWM3OFL @ 0xDB7;
char PWM3OFH @ 0xDB8;
char PWM3TMRL @ 0xDB9;
char PWM3TMRH @ 0xDBA;
char PWM3CON @ 0xDBB;
char PWM3IER @ 0xDBC;
char PWM3IFR @ 0xDBD;
char PWM3CLKCON @ 0xDBE;
char PWM3LDCON @ 0xDBF;
char PWM3OFCON @ 0xDC0;

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
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  C1IF    @ PIR2.5;

bit  PWM1IF  @ PIR3.4;
bit  PWM2IF  @ PIR3.5;
bit  PWM3IF  @ PIR3.6;

bit  TMR1ON  @ T1CON.0;
bit  T1SYNC_ @ T1CON.2;
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
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  C1IE    @ PIE2.5;

bit  PWM1IE  @ PIE3.4;
bit  PWM2IE  @ PIE3.5;
bit  PWM3IE  @ PIE3.6;

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

bit  ADON    @ ADCON0.0;
bit  GO      @ ADCON0.1;
bit  CHS0    @ ADCON0.2;
bit  CHS1    @ ADCON0.3;
bit  CHS2    @ ADCON0.4;
bit  CHS3    @ ADCON0.5;
bit  CHS4    @ ADCON0.6;

bit  ADPREF0 @ ADCON1.0;
bit  ADPREF1 @ ADCON1.1;
bit  ADCS0   @ ADCON1.4;
bit  ADCS1   @ ADCON1.5;
bit  ADCS2   @ ADCON1.6;
bit  ADFM    @ ADCON1.7;

bit  TRIGSEL0 @ ADCON2.4;
bit  TRIGSEL1 @ ADCON2.5;
bit  TRIGSEL2 @ ADCON2.6;
bit  TRIGSEL3 @ ADCON2.7;

bit  C1SYNC  @ CM1CON0.0;
bit  C1HYS   @ CM1CON0.1;
bit  C1SP    @ CM1CON0.2;
bit  C1POL   @ CM1CON0.4;
bit  C1OE    @ CM1CON0.5;
bit  C1OUT   @ CM1CON0.6;
bit  C1ON    @ CM1CON0.7;

bit  C1NCH0  @ CM1CON1.0;
bit  C1NCH1  @ CM1CON1.1;
bit  C1NCH2  @ CM1CON1.2;
bit  C1PCH0  @ CM1CON1.4;
bit  C1PCH1  @ CM1CON1.5;
bit  C1INTN  @ CM1CON1.6;
bit  C1INTP  @ CM1CON1.7;

bit  MC1OUT  @ CMOUT.0;

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

bit  DACPSS0 @ DACCON0.2;
bit  DACPSS1 @ DACCON0.3;
bit  DACOE   @ DACCON0.5;
bit  DACLPS  @ DACCON0.6;
bit  DACEN   @ DACCON0.7;

bit  P1SEL   @ APFCON.0;
bit  P2SEL   @ APFCON.1;
bit  TXCKSEL @ APFCON.2;
bit  T1GSEL  @ APFCON.3;
bit  CWGBSEL @ APFCON.5;
bit  CWGASEL @ APFCON.6;
bit  RXDTSEL @ APFCON.7;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _12F1571
bit  VREGPM  @ VREGCON.1;
#endif

bit  G1CS0   @ CWG1CON0.0;
bit  G1POLA  @ CWG1CON0.3;
bit  G1POLB  @ CWG1CON0.4;
bit  G1OEA   @ CWG1CON0.5;
bit  G1OEB   @ CWG1CON0.6;
bit  G1EN    @ CWG1CON0.7;

bit  G1IS0   @ CWG1CON1.0;
bit  G1IS1   @ CWG1CON1.1;
bit  G1IS2   @ CWG1CON1.2;
bit  G1ASDLA0 @ CWG1CON1.4;
bit  G1ASDLA1 @ CWG1CON1.5;
bit  G1ASDLB0 @ CWG1CON1.6;
bit  G1ASDLB1 @ CWG1CON1.7;

bit  G1ASDSFLT @ CWG1CON2.1;
bit  G1ASDSC1 @ CWG1CON2.2;
bit  G1ARSEN @ CWG1CON2.6;
bit  G1ASE   @ CWG1CON2.7;

bit  PWM1EN_A @ PWMEN.0;
bit  PWM2EN_A @ PWMEN.1;
bit  PWM3EN_A @ PWMEN.2;

bit  PWM1LDA_A @ PWMLD.0;
bit  PWM2LDA_A @ PWMLD.1;
bit  PWM3LDA_A @ PWMLD.2;

bit  PWM1OUT_A @ PWMOUT.0;
bit  PWM2OUT_A @ PWMOUT.1;
bit  PWM3OUT_A @ PWMOUT.2;

bit  PWM1MODE0 @ PWM1CON.2;
bit  PWM1MODE1 @ PWM1CON.3;
bit  PWM1POL @ PWM1CON.4;
bit  PWM1OUT @ PWM1CON.5;
bit  PWM1OE  @ PWM1CON.6;
bit  PWM1EN  @ PWM1CON.7;

bit  PWM1PRIE @ PWM1IER.0;
bit  PWM1DCIE @ PWM1IER.1;
bit  PWM1PHIE @ PWM1IER.2;
bit  PWM1OFIE @ PWM1IER.3;

bit  PWM1PRIF @ PWM1IFR.0;
bit  PWM1DCIF @ PWM1IFR.1;
bit  PWM1PHIF @ PWM1IFR.2;
bit  PWM1OFIF @ PWM1IFR.3;

bit  PWM1CS0 @ PWM1CLKCON.0;
bit  PWM1CS1 @ PWM1CLKCON.1;
bit  PWM1PS0 @ PWM1CLKCON.4;
bit  PWM1PS1 @ PWM1CLKCON.5;
bit  PWM1PS2 @ PWM1CLKCON.6;

bit  PWM1LDS0 @ PWM1LDCON.0;
bit  PWM1LDS1 @ PWM1LDCON.1;
bit  PWM1LDT  @ PWM1LDCON.6;
bit  PWM1LDA  @ PWM1LDCON.7;

bit  PWM1OFS0 @ PWM1OFCON.0;
bit  PWM1OFS1 @ PWM1OFCON.1;
bit  PWM1OFO  @ PWM1OFCON.4;
bit  PWM1OFM0 @ PWM1OFCON.5;
bit  PWM1OFM1 @ PWM1OFCON.6;

bit  PWM2MOD0 @ PWM2CON.2;
bit  PWM2MOD1 @ PWM2CON.3;
bit  PWM2POL @ PWM2CON.4;
bit  PWM2OUT @ PWM2CON.5;
bit  PWM2OE  @ PWM2CON.6;
bit  PWM2EN  @ PWM2CON.7;

bit  PWM2PRIE @ PWM2IER.0;
bit  PWM2DCIE @ PWM2IER.1;
bit  PWM2PHIE @ PWM2IER.2;
bit  PWM2OFIE @ PWM2IER.3;

bit  PWM2PRIF @ PWM2IFR.0;
bit  PWM2DCIF @ PWM2IFR.1;
bit  PWM2PHIF @ PWM2IFR.2;
bit  PWM2OFIF @ PWM2IFR.3;

bit  PWM2CS0 @ PWM2CLKCON.0;
bit  PWM2CS1 @ PWM2CLKCON.1;
bit  PWM2PS0 @ PWM2CLKCON.4;
bit  PWM2PS1 @ PWM2CLKCON.5;
bit  PWM2PS2 @ PWM2CLKCON.6;

bit  PWM2LDS0 @ PWM2LDCON.0;
bit  PWM2LDS1 @ PWM2LDCON.1;
bit  PWM2LDT @ PWM2LDCON.6;
bit  PWM2LDA @ PWM2LDCON.7;

bit  PWM2OFS0 @ PWM2OFCON.0;
bit  PWM2OFS1 @ PWM2OFCON.1;
bit  PWM2OFO @ PWM2OFCON.4;
bit  PWM2OFM0 @ PWM2OFCON.5;
bit  PWM2OFM1 @ PWM2OFCON.6;

bit  PWM3MOD0 @ PWM3CON.2;
bit  PWM3MOD1 @ PWM3CON.3;
bit  PWM3POL @ PWM3CON.4;
bit  PWM3OUT @ PWM3CON.5;
bit  PWM3OE  @ PWM3CON.6;
bit  PWM3EN  @ PWM3CON.7;

bit  PWM3PRIE @ PWM3IER.0;
bit  PWM3DCIE @ PWM3IER.1;
bit  PWM3PHIE @ PWM3IER.2;
bit  PWM3OFIE @ PWM3IER.3;

bit  PWM3PRIF @ PWM3IFR.0;
bit  PWM3DCIF @ PWM3IFR.1;
bit  PWM3PHIF @ PWM3IFR.2;
bit  PWM3OFIF @ PWM3IFR.3;

bit  PWM3CS0 @ PWM3CLKCON.0;
bit  PWM3CS1 @ PWM3CLKCON.1;
bit  PWM3PS0 @ PWM3CLKCON.4;
bit  PWM3PS1 @ PWM3CLKCON.5;
bit  PWM3PS2 @ PWM3CLKCON.6;

bit  PWM3LDS0 @ PWM3LDCON.0;
bit  PWM3LDS1 @ PWM3LDCON.1;
bit  PWM3LDT @ PWM3LDCON.6;
bit  PWM3LDA @ PWM3LDCON.7;

bit  PWM3OFS0 @ PWM3OFCON.0;
bit  PWM3OFS1 @ PWM3OFCON.1;
bit  PWM3OFO @ PWM3OFCON.4;
bit  PWM3OFM0 @ PWM3OFCON.5;
bit  PWM3OFM1 @ PWM3OFCON.6;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator; I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz); device clock supplied to CLKIN pin
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz); device clock supplied to CLKIN pin
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-32 MHz); device clock supplied to CLKIN pin
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
#pragma config /2 0x3FFC WRT = ALL // 000h to 3FFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 1FFh write protected, 200h to 3FFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 0FFh write protected, 100h to 3FFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3EFF PLLEN = OFF // 4x PLL disabled
#pragma config /2 0x3FFF PLLEN = ON // 4x PLL enabled
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x3FFF BORV = 19 // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x37FF LPBOREN = ON // LPBOR is enabled
#pragma config /2 0x3FFF LPBOREN = OFF // LPBOR is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
