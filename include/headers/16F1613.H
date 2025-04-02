// HEADER FILE
#pragma chip PIC16F1613, core 14 enh, code 2048, ram 32 : 0x17F // 256 bytes
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

char PORTC   @ 0x0E;

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
char T2HLT   @ 0x1D;
char T2CLKCON @ 0x1E;
char T2RST   @ 0x1F;

char TRISA   @ 0x8C;

char TRISC   @ 0x8E;

char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;
char PIE4    @ 0x94;
char OPTION_REG @ 0x95;
char PCON    @ 0x96;

char OSCTUNE @ 0x98;
char OSCCON  @ 0x99;
char OSCSTAT @ 0x9A;
char ADRESL  @ 0x9B;
char ADRESH  @ 0x9C;
char ADCON0  @ 0x9D;
char ADCON1  @ 0x9E;
char ADCON2  @ 0x9F;

char LATA    @ 0x10C;

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

char ZCD1CON @ 0x11C;
char APFCON  @ 0x11D;

char ANSELA  @ 0x18C;

char ANSELC  @ 0x18E;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;
#if _16F1613
char VREGCON @ 0x197;
#endif

char WPUA    @ 0x20C;

char WPUC    @ 0x20E;

char ODCONA  @ 0x28C;

char ODCONC  @ 0x28E;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;
char CCP1CAP @ 0x294;

char CCPR2L  @ 0x298;
char CCPR2H  @ 0x299;
char CCP2CON @ 0x29A;
char CCP2CAP @ 0x29B;

char CCPTMRS @ 0x29E;

char SLRCONA @ 0x30C;

char SLRCONC @ 0x30E;

char INLVLA  @ 0x38C;

char INLVLC  @ 0x38E;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;

char IOCCP   @ 0x397;
char IOCCN   @ 0x398;
char IOCCF   @ 0x399;

char TMR4    @ 0x413;
char PR4     @ 0x414;
char T4CON   @ 0x415;
char T4HLT   @ 0x416;
char T4CLKCON @ 0x417;
char T4RST   @ 0x418;

char TMR6    @ 0x41A;
char PR6     @ 0x41B;
char T6CON   @ 0x41C;
char T6HLT   @ 0x41D;
char T6CLKCON @ 0x41E;
char T6RST   @ 0x41F;

char CWG1DBR @ 0x691;
char CWG1DBF @ 0x692;
char CWG1AS0 @ 0x693;
char CWG1AS1 @ 0x694;
char CWG1OCON0 @ 0x695;
char CWG1CON0 @ 0x696;
char CWG1CON1 @ 0x697;
char CWG1OCON1 @ 0x698;
char CWG1CLKCON @ 0x699;
char CWG1ISM @ 0x69A;

char WDTCON0 @ 0x711;
char WDTCON1 @ 0x712;
char WDTPSL  @ 0x713;
char WDTPSH  @ 0x714;
char WDTTMR  @ 0x715;

char SCANLADRL @ 0x718;
char SCANLADRH @ 0x719;
char SCANHADRL @ 0x71A;
char SCANHADRH @ 0x71B;
char SCANCON0 @ 0x71C;
char SCANTRIG @ 0x71D;

char CRCDATL @ 0x791;
char CRCDATH @ 0x792;
char CRCACCL @ 0x793;
char CRCACCH @ 0x794;
char CRCSHIFTL @ 0x795;
char CRCSHIFTH @ 0x796;
char CRCXORL @ 0x797;
char CRCXORH @ 0x798;
char CRCCON0 @ 0x799;
char CRCCON1 @ 0x79A;

char SMT1TMRL @ 0xD8C;
char SMT1TMRH @ 0xD8D;
char SMT1TMRU @ 0xD8E;
char SMT1CPRL @ 0xD8F;
char SMT1CPRH @ 0xD90;
char SMT1CPRU @ 0xD91;
char SMT1CPWL @ 0xD92;
char SMT1CPWH @ 0xD93;
char SMT1CPWU @ 0xD94;
char SMT1PRL @ 0xD95;
char SMT1PRH @ 0xD96;
char SMT1PRU @ 0xD97;
char SMT1CON0 @ 0xD98;
char SMT1CON1 @ 0xD99;
char SMT1STAT @ 0xD9A;
char SMT1CLK @ 0xD9B;
char SMT1SIG @ 0xD9C;
char SMT1WIN @ 0xD9D;
char SMT2TMRL @ 0xD9E;
char SMT2TMRH @ 0xD9F;
char SMT2TMRU @ 0xDA0;
char SMT2CPRL @ 0xDA1;
char SMT2CPRH @ 0xDA2;
char SMT2CPRU @ 0xDA3;
char SMT2CPWL @ 0xDA4;
char SMT2CPWH @ 0xDA5;
char SMT2CPWU @ 0xDA6;
char SMT2PRL @ 0xDA7;
char SMT2PRH @ 0xDA8;
char SMT2PRU @ 0xDA9;
char SMT2CON0 @ 0xDAA;
char SMT2CON1 @ 0xDAB;
char SMT2STAT @ 0xDAC;
char SMT2CLK @ 0xDAD;
char SMT2SIG @ 0xDAE;
char SMT2WIN @ 0xDAF;

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
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  CCP2IF  @ PIR2.0;
bit  TMR4IF  @ PIR2.1;
bit  TMR6IF  @ PIR2.2;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;

bit  ZCDIF   @ PIR3.4;
bit  CWGIF   @ PIR3.5;

bit  SMT1IF  @ PIR4.0;
bit  SMT1PRAIF @ PIR4.1;
bit  SMT1PWAIF @ PIR4.2;
bit  SMT2IF  @ PIR4.3;
bit  SMT2PRAIF @ PIR4.4;
bit  SMT2PWAIF @ PIR4.5;
bit  CRCIF   @ PIR4.6;
bit  SCANIF  @ PIR4.7;

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

bit  TMR2ON  @ T2CON.7;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  CCP1IE  @ PIE1.2;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  TMR4IE  @ PIE2.1;
bit  TMR6IE  @ PIE2.2;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;

bit  ZCDIE   @ PIE3.4;
bit  CWGIE   @ PIE3.5;

bit  SMT1IE  @ PIE4.0;
bit  SMT1PRAIE @ PIE4.1;
bit  SMT1PWAIE @ PIE4.2;
bit  SMT2IE  @ PIE4.3;
bit  SMT2PRAIE @ PIE4.4;
bit  SMT2PWAIE @ PIE4.5;
bit  CRCIE   @ PIE4.6;
bit  SCANIE  @ PIE4.7;

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
bit  WDTWV_  @ PCON.5;
bit  STKUNF  @ PCON.6;
bit  STKOVF  @ PCON.7;

bit  SCS0    @ OSCCON.0;
bit  SCS1    @ OSCCON.1;
bit  SPLLEN  @ OSCCON.7;

bit  HFIOFS  @ OSCSTAT.0;
bit  LFIOFR  @ OSCSTAT.1;
bit  MFIOFR  @ OSCSTAT.2;
bit  HFIOFL  @ OSCSTAT.3;
bit  HFIOFR  @ OSCSTAT.4;
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

bit  CCP2SEL @ APFCON.1;
bit  T1GSEL  @ APFCON.3;

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _16F1613
bit  VREGPM  @ VREGCON.1;
#endif

bit  TMR4ON  @ T4CON.7;

bit  TMR6ON  @ T6CON.7;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFC FOSC = INTOSC // INTOSC oscillator: I/O function on CLKIN pin
#pragma config /1 0x3FFD FOSC = ECL // ECL, External Clock, Low Power Mode (0-0.5 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFE FOSC = ECM // ECM, External Clock, Medium Power Mode (0.5-4 MHz): device clock supplied to CLKIN pins
#pragma config /1 0x3FFF FOSC = ECH // ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins
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
#pragma config /2 0x3F7F ZCD = ON // ZCD always enabled
#pragma config /2 0x3FFF ZCD = OFF // ZCD disable.  ZCD can be enabled by setting the ZCDSEN bit of ZCDCON
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
#pragma config /3 0x3FE0 WDTCPS = WDTCPS0 // 1:32 (1 ms period)
#pragma config /3 0x3FE1 WDTCPS = WDTCPS1 // 1:64 (2 ms period)
#pragma config /3 0x3FE2 WDTCPS = WDTCPS2 // 1:128 (4 ms period)
#pragma config /3 0x3FE3 WDTCPS = WDTCPS3 // 1:256 (8 ms period)
#pragma config /3 0x3FE4 WDTCPS = WDTCPS4 // 1:512 (16 ms period)
#pragma config /3 0x3FE5 WDTCPS = WDTCPS5 // 1:1024 (32 ms period)
#pragma config /3 0x3FE6 WDTCPS = WDTCPS6 // 1:2048 (64 ms period)
#pragma config /3 0x3FE7 WDTCPS = WDTCPS7 // 1:4096 (128 ms period)
#pragma config /3 0x3FE8 WDTCPS = WDTCPS8 // 1:8192 (256 ms period)
#pragma config /3 0x3FE9 WDTCPS = WDTCPS9 // 1:16384 (512 ms period)
#pragma config /3 0x3FEA WDTCPS = WDTCPSA // 1:32768 (1 s period)
#pragma config /3 0x3FEB WDTCPS = WDTCPSB // 1:65536 (2 s period)
#pragma config /3 0x3FEC WDTCPS = WDTCPSC // 1:131072 (4 s period)
#pragma config /3 0x3FED WDTCPS = WDTCPSD // 1:262144 (8 s period)
#pragma config /3 0x3FEE WDTCPS = WDTCPSE // 1:524299 (16 s period)
#pragma config /3 0x3FEF WDTCPS = WDTCPSF // 1:1048576 (32 s period)
#pragma config /3 0x3FF0 WDTCPS = WDTCPS10 // 1:2097152 (64 s period)
#pragma config /3 0x3FF1 WDTCPS = WDTCPS11 // 1:4194304 (128 s period)
#pragma config /3 0x3FF2 WDTCPS = WDTCPS12 // 1:8388608 (256 s period)
#pragma config /3 0x3FFF WDTCPS = WDTCPS1F // Software Control (WDTPS)
#pragma config /3 0x3F9F WDTE = OFF // WDT disabled
#pragma config /3 0x3FBF WDTE = SWDTEN // WDT controlled by the SWDTEN bit in the WDTCON register
#pragma config /3 0x3FDF WDTE = NSLEEP // WDT enabled while running and disabled in Sleep
#pragma config /3 0x3FFF WDTE = ON // WDT enabled
#pragma config /3 0x38FF WDTCWS = WDTCWS125 // 12.5 percent window open time
#pragma config /3 0x39FF WDTCWS = WDTCWS25 // 25 percent window open time
#pragma config /3 0x3AFF WDTCWS = WDTCWS375 // 37.5 percent window open time
#pragma config /3 0x3BFF WDTCWS = WDTCWS50 // 50 percent window open time
#pragma config /3 0x3CFF WDTCWS = WDTCWS625 // 62.5 percent window open time
#pragma config /3 0x3DFF WDTCWS = WDTCWS75 // 75 percent window open time
#pragma config /3 0x3EFF WDTCWS = WDTCWS100 // 100 percent window open time (Legacy WDT) 
#pragma config /3 0x3FFF WDTCWS = WDTCWSSW // Software WDT window size control (WDTWS bits)
#pragma config /3 0x07FF WDTCCS = LFINTOSC // 31.0 kHz LFINTOSC
#pragma config /3 0x0FFF WDTCCS = MFINTOSC // 31.25 kHz HFINTOSC (MFINTOSC)
#pragma config /3 0x3FFF WDTCCS = SWC // Software control, controlled by WDTCS bits
#endif
