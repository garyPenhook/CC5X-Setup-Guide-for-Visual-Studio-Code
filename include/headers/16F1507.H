// HEADER FILE
#pragma chip PIC16F1507, core 14 enh, code 2048, ram 32 : 0xBF // 128 bytes
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

char BORCON  @ 0x116;
char FVRCON  @ 0x117;

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
#if _16F1507
char VREGCON @ 0x197;
#endif

char WPUA    @ 0x20C;
char WPUB    @ 0x20D;

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
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  NCO1IF  @ PIR2.2;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;

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
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  NCO1IE  @ PIE2.2;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;

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

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  NCO1SEL @ APFCON.0;
bit  CLC1SEL @ APFCON.1;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _16F1507
bit  VREGPM  @ VREGCON.1;
#endif

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

bit  G1ASDS0 @ CWG1CON2.0;
bit  G1ASDS1 @ CWG1CON2.1;
bit  G1ARSEN @ CWG1CON2.6;
bit  G1ASE   @ CWG1CON2.7;

bit  MCLC1OUT @ CLCDATA.0;
bit  MCLC2OUT @ CLCDATA.1;

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

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFC FOSC = INTOSC // Internal Oscillator, I/O Function on OSC1
#pragma config /1 0x3FFD FOSC = ECL // External Clock, Low Power Mode
#pragma config /1 0x3FFE FOSC = ECM // External Clock, Medium Power Mode
#pragma config /1 0x3FFF FOSC = ECH // External Clock, High Power Mode
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
#pragma config /2 0x3FFC WRT = ALL // 000h to 7FFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 3FFh write protected, 400h to 7FFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 7FFh may be modified by EECON control
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
