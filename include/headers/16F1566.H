// HEADER FILE
#pragma chip PIC16LF1566, core 14 enh, code 8192, ram 32 : 0x64F // 1024 bytes
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

char TMR0    @ 0x15;
char TMR1L   @ 0x16;
char TMR1H   @ 0x17;
char T1CON   @ 0x18;
char T1GCON  @ 0x19;
char TMR2    @ 0x1A;
char T2PR    @ 0x1B;
char T2CON   @ 0x1C;

char TRISA   @ 0x8C;
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;

char PIE1    @ 0x91;
char PIE2    @ 0x92;

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

char RCREG   @ 0x199;
char TXREG   @ 0x19A;
char SPBRGL  @ 0x19B;
char SPBRGH  @ 0x19C;
char RCSTA   @ 0x19D;
char TXSTA   @ 0x19E;
char BAUDCON @ 0x19F;

char WPUB    @ 0x20D;

char WPUE    @ 0x210;
char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;
char SSPLVL  @ 0x218;
char SSP2BUF @ 0x219;
char SSP2ADD @ 0x21A;
char SSP2MSK @ 0x21B;
char SSP2STAT @ 0x21C;
char SSP2CON1 @ 0x21D;
char SSP2CON2 @ 0x21E;
char SSP2CON3 @ 0x21F;

char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;

char TMR4    @ 0x415;
char T4PR    @ 0x416;
char T4CON   @ 0x417;

char PWM1DCL @ 0x611;
char PWM1DCH @ 0x612;
char PWM1CON @ 0x613;
char PWM2DCL @ 0x614;
char PWM2DCH @ 0x615;
char PWM2CON @ 0x616;

char PWMTMRS @ 0x61D;
char PWM1AOE @ 0x61E;
char PWM2AOE @ 0x61F;

char ADCTX   @ 0x691;
char AD1TX0  @ 0x692;
char AD1TX1  @ 0x693;
char AD2TX0  @ 0x694;
char AD2TX1  @ 0x695;

char AD1CON0 @ 0x711;
char ADCOMCON @ 0x712;
char AD1CON2 @ 0x713;
char AD1CON3 @ 0x714;
char ADSTAT  @ 0x715;
char AD1PRECON @ 0x716;
char AD1ACQCON @ 0x717;
char AD1GRD  @ 0x718;
char AD1CAPCON @ 0x719;
char AAD1RES0L @ 0x71A;
char AAD1RES0H @ 0x71B;
char AAD1RES1L @ 0x71C;
char AAD1RES1H @ 0x71D;
char AD1CH0  @ 0x71E;
char AD1CH1  @ 0x71F;

char AD2CON0 @ 0x791;

char AD2CON2 @ 0x793;
char AD2CON3 @ 0x794;

char AD2PRECON @ 0x796;
char AD2ACQCON @ 0x797;
char AD2GRD @ 0x798;
char AD2CAPCON @ 0x799;
char AAD2RES0L @ 0x79A;
char AAD2RES0H @ 0x79B;
char AAD2RES1L @ 0x79C;
char AAD2RES1H @ 0x79D;
char AD2CH0  @ 0x79E;
char AD2CH1 @ 0x79F;

char ICDIO   @ 0xF8C;
char ICDCON0 @ 0xF8D;

char ICDSTAT @ 0xF91;

char ICDINSTL @ 0xF96;
char ICDINSTH @ 0xF97;

char ICDBK0CON @ 0xF9C;
char ICDBK0L @ 0xF9D;
char ICDBK0H @ 0xF9E;

char BSRICDSHAD @ 0xFE3;
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
bit  SSP2IF  @ PIR1.2;
bit  SSP1IF  @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  AD1IF   @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  TMR4IF  @ PIR2.1;
bit  BCL2IF  @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  AD2IF   @ PIR2.6;

bit  TMR1ON  @ T1CON.0;
bit  T1SYNC_ @ T1CON.2;
bit  T1CKPS0 @ T1CON.4;
bit  T1CKPS1 @ T1CON.5;
bit  TMR1CS0 @ T1CON.6;
bit  TMR1CS1 @ T1CON.7;

bit  TMR2ON  @ T2CON.2;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  SSP2IE  @ PIE1.2;
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  AD1IE   @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  TMR4IE  @ PIE2.1;
bit  BCL2IE  @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  AD2IE   @ PIE2.6;

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
bit  HFIOFR  @ OSCSTAT.4;
bit  PLLSR   @ OSCSTAT.6;

bit  AD1ON   @ ADCON0.0;
bit  GO      @ ADCON0.1;

bit  TRIGSEL0 @ ADCON2.4;
bit  TRIGSEL1 @ ADCON2.5;
bit  TRIGSEL2 @ ADCON2.6;

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  GRDASEL @ APFCON.0;
bit  GRDBSEL @ APFCON.1;
bit  SSSEL   @ APFCON.5;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

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

bit  S1ILS   @ SSPLVL.0;
bit  S2ILS   @ SSPLVL.4;

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

bit  P1TSEL  @ PWMTMRS.0;
bit  P2TSEL  @ PWMTMRS.2;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator: I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FE7 WDTE = OFF // WDT disabled. SWDTEN bit is ignored.
#pragma config /1 0x3FEF WDTE = SWDTEN // WDT controlled by the SWDTEN bit in the WDTCON register
#pragma config /1 0x3FF7 WDTE = NSLEEP // WDT enabled while running and disabled in Sleep. SWDTEN bit is ignored.
#pragma config /1 0x3FFF WDTE = ON // WDT enabled. SWDTEN bit is ignored.
#pragma config /1 0x3FDF PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FBF MCLRE = OFF // MCLR/VPP pin function is digital input
#pragma config /1 0x3FFF MCLRE = ON // MCLR/VPP pin function is MCLR
#pragma config /1 0x3F7F CP = ON // Program memory code protection is enabled
#pragma config /1 0x3FFF CP = OFF // Program memory code protection is disabled
#pragma config /1 0x39FF BOREN = OFF // Brown-out Reset disabled. SBOREN bit is ignored.
#pragma config /1 0x3BFF BOREN = SBODEN // Brown-out Reset controlled by the SBOREN bit in the BORCON register
#pragma config /1 0x3DFF BOREN = NSLEEP // Brown-out Reset enabled while running and disabled in Sleep. SBOREN bit is ignored.
#pragma config /1 0x3FFF BOREN = ON // Brown-out Reset enabled
#pragma config /1 0x37FF CLKOUTEN = ON // CLKOUT function is enabled on the CLKOUT pin
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config /2 0x3FFC WRT = ALL // 000h to FFFh write protected, no addresses may be modified by PMCON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 7FFh write protected, 800h to FFFh may be modified by PMCON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to FFFh may be modified by PMCON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), 2.7V trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), 1.9V trip point selected.
#pragma config /2 0x37FF LPBOR = ON // Low-Power BOR is enabled
#pragma config /2 0x3FFF LPBOR = OFF // Low-Power BOR is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
