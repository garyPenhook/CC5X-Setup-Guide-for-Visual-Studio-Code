// HEADER FILE
#pragma chip PIC12LF1552, core 14 enh, code 2048, ram 32 : 0x17F // 256 bytes
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

char TMR0    @ 0x15;

char TRISA   @ 0x8C;

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

char BORCON  @ 0x116;
char FVRCON  @ 0x117;

char APFCON  @ 0x11D;

char ANSELA  @ 0x18C;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;

char WPUA    @ 0x20C;

char SSPBUF @ 0x211;
char SSPADD @ 0x212;
char SSPMSK @ 0x213;
char SSPSTAT @ 0x214;
char SSPCON1 @ 0x215;
char SSPCON2 @ 0x216;
char SSPCON3 @ 0x217;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;

char AADCON0 @ 0x711;
char AADCON1 @ 0x712;
char AADCON2 @ 0x713;
char AADCON3 @ 0x714;
char AADSTAT @ 0x715;
char AADPRE  @ 0x716;
char AADACQ  @ 0x717;
char AADGRD  @ 0x718;
char AADCAP  @ 0x719;
char AADRES0L @ 0x71A;
char AADRES0H @ 0x71B;
char AADRES1L @ 0x71C;
char AADRES1H @ 0x71D;

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

bit  SSPIF   @ PIR1.3;
bit  ADIF    @ PIR1.6;

bit  BCLIF   @ PIR2.3;

bit  SSPIE   @ PIE1.3;
bit  ADIE    @ PIE1.6;

bit  BCLIE   @ PIE2.3;

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

bit  BORRDY  @ BORCON.0;
bit  BORFS   @ BORCON.6;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  SDSEL   @ APFCON.4;
bit  SSSEL   @ APFCON.5;
bit  SDOSEL  @ APFCON.6;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

bit  BF      @ SSPSTAT.0;
bit  UA      @ SSPSTAT.1;
bit  RW_     @ SSPSTAT.2;
bit  S       @ SSPSTAT.3;
bit  P       @ SSPSTAT.4;
bit  DA_     @ SSPSTAT.5;
bit  CKE     @ SSPSTAT.6;
bit  SMP     @ SSPSTAT.7;

bit  CKP     @ SSPCON1.4;
bit  SSPEN   @ SSPCON1.5;
bit  SSPOV   @ SSPCON1.6;
bit  WCOL    @ SSPCON1.7;

bit  SEN     @ SSPCON2.0;
bit  RSEN    @ SSPCON2.1;
bit  PEN     @ SSPCON2.2;
bit  RCEN    @ SSPCON2.3;
bit  ACKEN   @ SSPCON2.4;
bit  ACKDT   @ SSPCON2.5;
bit  ACKSTAT @ SSPCON2.6;
bit  GCEN    @ SSPCON2.7;

bit  DHEN    @ SSPCON3.0;
bit  AHEN    @ SSPCON3.1;
bit  SBCDE   @ SSPCON3.2;
bit  SDAHT   @ SSPCON3.3;
bit  BOEN    @ SSPCON3.4;
bit  SCIE    @ SSPCON3.5;
bit  PCIE    @ SSPCON3.6;
bit  ACKTIM  @ SSPCON3.7;

bit  ADDSEN  @ AADCON3.0;
bit  ADIPEN  @ AADCON3.1;
bit  ADOOEN  @ AADCON3.3;
bit  ADOEN   @ AADCON3.4;
bit  ADIPPOL @ AADCON3.6;
bit  ADEPPOL @ AADCON3.7;

bit  ADSTG0  @ AADSTAT.0;
bit  ADSTG1  @ AADSTAT.1;
bit  ADCONV  @ AADSTAT.2;

bit  GRDPOL  @ AADGRD.5;
bit  GRDAOE  @ AADGRD.6;
bit  GRDBOE  @ AADGRD.7;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator: I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pin
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pin
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pin
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
#pragma config /2 0x3FFC WRT = ALL // 000h to 7FFh write protected, no addresses may be modified by PMCON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 3FFh write protected, 400h to 7FFh may be modified by PMCON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 7FFh may be modified by PMCON control
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
