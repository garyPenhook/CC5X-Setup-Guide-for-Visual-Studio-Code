// HEADER FILE
#pragma chip PIC16F1509, core 14 enh, code 8192, ram 32 : 0x32F // 512 bytes
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

char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;

char OPTION_REG @ 0x95;
char PCON    @ 0x96;
char WDTCON  @ 0x97;

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
char DACCON0 @ 0x118;
char DACCON1 @ 0x119;

char APFCON  @ 0x11D;

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;
char ANSELC  @ 0x18E;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;
#if _16F1509
char VREGCON @ 0x197;
#endif

char RCREG   @ 0x199;
char TXREG   @ 0x19A;
char SPBRGL  @ 0x19B;
char SPBRGH  @ 0x19C;
char RCSTA   @ 0x19D;
char TXSTA   @ 0x19E;
char BAUDCON @ 0x19F;

char WPUA    @ 0x20C;
char WPUB    @ 0x20D;

char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;
char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;

char NCO1ACCL @ 0x498;
char NCO1ACCH @ 0x499;
char NCO1ACCU @ 0x49A;
char NCO1INCL @ 0x49B;
char NCO1INCH @ 0x49C;

char NCO1CON @ 0x49E;
char NCO1CLK @ 0x49F;

char PWM1DCL @ 0x611;
char PWM1DCH @ 0x612;
char PWM1CON @ 0x613;
char PWM2DCL @ 0x614;
char PWM2DCH @ 0x615;
char PWM2CON @ 0x616;
char PWM3DCL @ 0x617;
char PWM3DCH @ 0x618;
char PWM3CON @ 0x619;
char PWM4DCL @ 0x61A;
char PWM4DCH @ 0x61B;
char PWM4CON @ 0x61C;

char CWG1DBR @ 0x691;
char CWG1DBF @ 0x692;
char CWG1CON0 @ 0x693;
char CWG1CON1 @ 0x694;
char CWG1CON2 @ 0x695;

char CLCDATA @ 0xF0F;
char CLC1CON @ 0xF10;
char CLC1POL @ 0xF11;
char CLC1SEL0 @ 0xF12;
char CLC1SEL1 @ 0xF13;
char CLC1GLS0 @ 0xF14;
char CLC1GLS1 @ 0xF15;
char CLC1GLS2 @ 0xF16;
char CLC1GLS3 @ 0xF17;
char CLC2CON @ 0xF18;
char CLC2POL @ 0xF19;
char CLC2SEL0 @ 0xF1A;
char CLC2SEL1 @ 0xF1B;
char CLC2GLS0 @ 0xF1C;
char CLC2GLS1 @ 0xF1D;
char CLC2GLS2 @ 0xF1E;
char CLC2GLS3 @ 0xF1F;
char CLC3CON @ 0xF20;
char CLC3POL @ 0xF21;
char CLC3SEL0 @ 0xF22;
char CLC3SEL1 @ 0xF23;
char CLC3GLS0 @ 0xF24;
char CLC3GLS1 @ 0xF25;
char CLC3GLS2 @ 0xF26;
char CLC3GLS3 @ 0xF27;
char CLC4CON @ 0xF28;
char CLC4POL @ 0xF29;
char CLC4SEL0 @ 0xF2A;
char CLC4SEL1 @ 0xF2B;
char CLC4GLS0 @ 0xF2C;
char CLC4GLS1 @ 0xF2D;
char CLC4GLS2 @ 0xF2E;
char CLC4GLS3 @ 0xF2F;

char STATUS_SHAD @ 0xFE4;
char WREG_SHAD   @ 0xFE5;
char BSR_SHAD    @ 0xFE6;
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
bit  SSP1IF  @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  NCO1IF  @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;
bit  CLC3IF  @ PIR3.2;
bit  CLC4IF  @ PIR3.3;

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
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  NCO1IE  @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;
bit  CLC3IE  @ PIE3.2;
bit  CLC4IE  @ PIE3.3;

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

bit  HFIOFS  @ OSCSTAT.0;
bit  LFIOFR  @ OSCSTAT.1;
bit  HFIOFR  @ OSCSTAT.4;
bit  OSTS    @ OSCSTAT.5;
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

bit  C2SYNC  @ CM2CON0.0;
bit  C2HYS   @ CM2CON0.1;
bit  C2SP    @ CM2CON0.2;
bit  C2POL   @ CM2CON0.4;
bit  C2OE    @ CM2CON0.5;
bit  C2OUT   @ CM2CON0.6;
bit  C2ON    @ CM2CON0.7;

bit  C2NCH0  @ CM2CON1.0;
bit  C2NCH1  @ CM2CON1.1;
bit  C2NCH2  @ CM2CON1.2;
bit  C2PCH0  @ CM2CON1.4;
bit  C2PCH1  @ CM2CON1.5;
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

bit  DACPSS  @ DACCON0.2;
bit  DACOE2  @ DACCON0.4;
bit  DACOE1  @ DACCON0.5;
bit  DACEN   @ DACCON0.7;

bit  NCO1SEL @ APFCON.0;
bit  CLC1SEL @ APFCON.1;
bit  T1GSEL  @ APFCON.3;
bit  SSSEL   @ APFCON.4;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _16F1509
bit  VREGPM  @ VREGCON.1;
#endif

bit  RX9D    @ RCSTA.0;
bit  OERR    @ RCSTA.1;
bit  FERR    @ RCSTA.2;
bit  ADDEN   @ RCSTA.3;
bit  CREN    @ RCSTA.4;
bit  SREN    @ RCSTA.5;
bit  RX9     @ RCSTA.6;
bit  SPEN    @ RCSTA.7;

bit  TX9D    @ TXSTA.0;
bit  TRMT    @ TXSTA.1;
bit  BRGH    @ TXSTA.2;
bit  SENDB   @ TXSTA.3;
bit  SYNC    @ TXSTA.4;
bit  TXEN    @ TXSTA.5;
bit  TX9     @ TXSTA.6;
bit  CSRC    @ TXSTA.7;

bit  ABDEN   @ BAUDCON.0;
bit  WUE     @ BAUDCON.1;
bit  BRG16   @ BAUDCON.3;
bit  SCKP    @ BAUDCON.4;
bit  RCIDL   @ BAUDCON.6;
bit  ABDOVF  @ BAUDCON.7;

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

bit  N1PFM   @ NCO1CON.0;
bit  N1POL   @ NCO1CON.4;
bit  N1OUT   @ NCO1CON.5;
bit  N1OE    @ NCO1CON.6;
bit  N1EN    @ NCO1CON.7;

bit  N1CKS0  @ NCO1CLK.0;
bit  N1CKS1  @ NCO1CLK.1;
bit  N1PWS0  @ NCO1CLK.5;
bit  N1PWS1  @ NCO1CLK.6;
bit  N1PWS2  @ NCO1CLK.7;

bit  PWM1DCL0 @ PWM1DCL.6;
bit  PWM1DCL1 @ PWM1DCL.7;

bit  PWM1POL @ PWM1CON.4;
bit  PWM1OUT @ PWM1CON.5;
bit  PWM1OE  @ PWM1CON.6;
bit  PWM1EN  @ PWM1CON.7;

bit  PWM2DCL0 @ PWM2DCL.6;
bit  PWM2DCL1 @ PWM2DCL.7;

bit  PWM2POL @ PWM2CON.4;
bit  PWM2OUT @ PWM2CON.5;
bit  PWM2OE  @ PWM2CON.6;
bit  PWM2EN  @ PWM2CON.7;

bit  PWM3DCL0 @ PWM3DCL.6;
bit  PWM3DCL1 @ PWM3DCL.7;

bit  PWM3POL @ PWM3CON.4;
bit  PWM3OUT @ PWM3CON.5;
bit  PWM3OE  @ PWM3CON.6;
bit  PWM3EN  @ PWM3CON.7;

bit  PWM4DCL0 @ PWM4DCL.6;
bit  PWM4DCL1 @ PWM4DCL.7;

bit  PWM4POL @ PWM4CON.4;
bit  PWM4OUT @ PWM4CON.5;
bit  PWM4OE  @ PWM4CON.6;
bit  PWM4EN  @ PWM4CON.7;

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

bit  G1ASDSCLC2 @ CWG1CON2.0;
bit  G1ASDSFLT @ CWG1CON2.1;
bit  G1ASDC1 @ CWG1CON2.2;
bit  G1ASDC2 @ CWG1CON2.3;
bit  G1ARSEN @ CWG1CON2.6;
bit  G1ASE   @ CWG1CON2.7;

bit  MCLC1OUT @ CLCDATA.0;
bit  MCLC2OUT @ CLCDATA.1;
bit  MCLC3OUT @ CLCDATA.2;
bit  MCLC4OUT @ CLCDATA.3;

bit  LC1MODE0 @ CLC1CON.0;
bit  LC1MODE1 @ CLC1CON.1;
bit  LC1MODE2 @ CLC1CON.2;
bit  LC1INTN @ CLC1CON.3;
bit  LC1INTP @ CLC1CON.4;
bit  LC1OUT  @ CLC1CON.5;
bit  LC1OE   @ CLC1CON.6;
bit  LC1EN   @ CLC1CON.7;

bit  LC1G1POL @ CLC1POL.0;
bit  LC1G2POL @ CLC1POL.1;
bit  LC1G3POL @ CLC1POL.2;
bit  LC1G4POL @ CLC1POL.3;
bit  LC1POL  @ CLC1POL.7;

bit  LC1D1S0 @ CLC1SEL0.0;
bit  LC1D1S1 @ CLC1SEL0.1;
bit  LC1D1S2 @ CLC1SEL0.2;
bit  LC1D2S0 @ CLC1SEL0.4;
bit  LC1D2S1 @ CLC1SEL0.5;
bit  LC1D2S2 @ CLC1SEL0.6;

bit  LC1D3S0 @ CLC1SEL1.0;
bit  LC1D3S1 @ CLC1SEL1.1;
bit  LC1D3S2 @ CLC1SEL1.2;
bit  LC1D4S0 @ CLC1SEL1.4;
bit  LC1D4S1 @ CLC1SEL1.5;
bit  LC1D4S2 @ CLC1SEL1.6;

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
bit  LC2OE   @ CLC2CON.6;
bit  LC2EN   @ CLC2CON.7;

bit  LC2G1POL @ CLC2POL.0;
bit  LC2G2POL @ CLC2POL.1;
bit  LC2G3POL @ CLC2POL.2;
bit  LC2G4POL @ CLC2POL.3;
bit  LC2POL  @ CLC2POL.7;

bit  LC2D1S0 @ CLC2SEL0.0;
bit  LC2D1S1 @ CLC2SEL0.1;
bit  LC2D1S2 @ CLC2SEL0.2;
bit  LC2D2S0 @ CLC2SEL0.4;
bit  LC2D2S1 @ CLC2SEL0.5;
bit  LC2D2S2 @ CLC2SEL0.6;

bit  LC2D3S0 @ CLC2SEL1.0;
bit  LC2D3S1 @ CLC2SEL1.1;
bit  LC2D3S2 @ CLC2SEL1.2;
bit  LC2D4S0 @ CLC2SEL1.4;
bit  LC2D4S1 @ CLC2SEL1.5;
bit  LC2D4S2 @ CLC2SEL1.6;

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
bit  LC3OE   @ CLC3CON.6;
bit  LC3EN   @ CLC3CON.7;

bit  LC3G1POL @ CLC3POL.0;
bit  LC3G2POL @ CLC3POL.1;
bit  LC3G3POL @ CLC3POL.2;
bit  LC3G4POL @ CLC3POL.3;
bit  LC3POL  @ CLC3POL.7;

bit  LC3D1S0 @ CLC3SEL0.0;
bit  LC3D1S1 @ CLC3SEL0.1;
bit  LC3D1S2 @ CLC3SEL0.2;
bit  LC3D2S0 @ CLC3SEL0.4;
bit  LC3D2S1 @ CLC3SEL0.5;
bit  LC3D2S2 @ CLC3SEL0.6;

bit  LC3D3S0 @ CLC3SEL1.0;
bit  LC3D3S1 @ CLC3SEL1.1;
bit  LC3D3S2 @ CLC3SEL1.2;
bit  LC3D4S0 @ CLC3SEL1.4;
bit  LC3D4S1 @ CLC3SEL1.5;
bit  LC3D4S2 @ CLC3SEL1.6;

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
bit  LC4OE   @ CLC4CON.6;
bit  LC4EN   @ CLC4CON.7;

bit  LC4G1POL @ CLC4POL.0;
bit  LC4G2POL @ CLC4POL.1;
bit  LC4G3POL @ CLC4POL.2;
bit  LC4G4POL @ CLC4POL.3;
bit  LC4POL  @ CLC4POL.7;

bit  LC4D1S0 @ CLC4SEL0.0;
bit  LC4D1S1 @ CLC4SEL0.1;
bit  LC4D1S2 @ CLC4SEL0.2;
bit  LC4D2S0 @ CLC4SEL0.4;
bit  LC4D2S1 @ CLC4SEL0.5;
bit  LC4D2S2 @ CLC4SEL0.6;

bit  LC4D3S0 @ CLC4SEL1.0;
bit  LC4D3S1 @ CLC4SEL1.1;
bit  LC4D3S2 @ CLC4SEL1.2;
bit  LC4D4S0 @ CLC4SEL1.4;
bit  LC4D4S1 @ CLC4SEL1.5;
bit  LC4D4S2 @ CLC4SEL1.6;

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
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x37FF LPBOR = ON // Low-Power BOR is enabled
#pragma config /2 0x3FFF LPBOR = OFF // Low-Power BOR is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
