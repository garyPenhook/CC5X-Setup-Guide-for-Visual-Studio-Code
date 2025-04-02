// HEADER FILE
#pragma chip PIC16LF1903, core 14 enh, code 4096, ram 32 : 0x17F
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

char LATA    @ 0x10C;
char LATB    @ 0x10D;
char LATC    @ 0x10E;

char BORCON  @ 0x116;
char FVRCON  @ 0x117;

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;

char WPUB    @ 0x20D;

char WPUE    @ 0x210;

char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;

char LCDCON  @ 0x791;
char LCDPS   @ 0x792;
char LCDREF  @ 0x793;
char LCDCST  @ 0x794;
char LCDRL   @ 0x795;

char LCDSE0  @ 0x798;
char LCDSE1  @ 0x799;

char LCDSE3  @ 0x79B;

char LCDDATA0 @ 0x7A0;
char LCDDATA1 @ 0x7A1;

char LCDDATA3 @ 0x7A3;
char LCDDATA4 @ 0x7A4;

char LCDDATA6 @ 0x7A6;
char LCDDATA7 @ 0x7A7;

char LCDDATA9 @ 0x7A9;
char LCDDATA10 @ 0x7AA;

char LCDDATA12 @ 0x7AC;

char LCDDATA15 @ 0x7AF;

char LCDDATA18 @ 0x7B2;

char LCDDATA21 @ 0x7B5;

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
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  LCDIF   @ PIR2.2;

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

bit  TMR1IE  @ PIE1.0;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  LCDIE   @ PIE2.2;

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
bit  T1OSCR  @ OSCSTAT.7;

bit  ADON    @ ADCON0.0;
bit  GO      @ ADCON0.1;
bit  CHS0    @ ADCON0.2;
bit  CHS1    @ ADCON0.3;
bit  CHS2    @ ADCON0.4;
bit  CHS3    @ ADCON0.5;
bit  CHS4    @ ADCON0.6;

bit  ADCS0   @ ADCON1.4;
bit  ADCS1   @ ADCON1.5;
bit  ADCS2   @ ADCON1.6;
bit  ADFM    @ ADCON1.7;

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

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

bit  SEG24COM0 @ LCDDATA12.0;
bit  SEG25COM0 @ LCDDATA12.1;
bit  SEG26COM0 @ LCDDATA12.2;

bit  SEG24COM1 @ LCDDATA15.0;
bit  SEG25COM1 @ LCDDATA15.1;
bit  SEG26COM1 @ LCDDATA15.2;

bit  SEG24COM2 @ LCDDATA18.0;
bit  SEG25COM2 @ LCDDATA18.1;
bit  SEG26COM2 @ LCDDATA18.2;

bit  SEG24COM3 @ LCDDATA21.0;
bit  SEG25COM3 @ LCDDATA21.1;
bit  SEG26COM3 @ LCDDATA21.2;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
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
#pragma config /1 0x39FF BOREN = OFF // Brown-out Reset disabled
#pragma config /1 0x3BFF BOREN = SBODEN // Brown-out Reset controlled by the SBOREN bit in the BORCON register
#pragma config /1 0x3DFF BOREN = NSLEEP // Brown-out Reset enabled while running and disabled in Sleep
#pragma config /1 0x3FFF BOREN = ON // Brown-out Reset enabled
#pragma config /1 0x37FF CLKOUTEN = ON // CLKOUT function is enabled on the CLKOUT pin
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config /2 0x3FFC WRT = ALL // 000h to FFFh write protected, no addresses may be modified by PMCON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 7FFh write protected, 800h to FFFh may be modified by PMCON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to FFFh may be modified by PMCON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x3FFF BORV = 19 // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x37FF LPBOR = ON // Low-Power BOR is enabled
#pragma config /2 0x3FFF LPBOR = OFF // Low-Power BOR is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
