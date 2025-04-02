// HEADER FILE
#pragma chip PIC16F18313, core 14 enh, code 2048, ram 32 : 0x17F // 256 bytes
#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_enh_style

#if __CC5X__ >= 3505
 #pragma wideConstData h
#endif

/* Predefined:
  char *FSR0, *FSR1;
  char INDF0, INDF1;
  char FSR0L, FSR0H, FSR1L, FSR1H;
  char W, WREG;
  char PCL, PCLATH, BSR, STATUS, INTCON;
  bit Carry, DC, Zero_, PD, TO;
*/

char PORTA   @ 0x0C;

char PIR0    @ 0x10;
char PIR1    @ 0x11;
char PIR2    @ 0x12;
char PIR3    @ 0x13;
char PIR4    @ 0x14;
char TMR0L   @ 0x15;
char TMR0H   @ 0x16;
char T0CON0  @ 0x17;
char T0CON1  @ 0x18;
char TMR1L   @ 0x19;
char TMR1H   @ 0x1A;
char T1CON   @ 0x1B;
char T1GCON  @ 0x1C;
char TMR2    @ 0x1D;
char PR2     @ 0x1E;
char T2CON   @ 0x1F;

char TRISA   @ 0x8C;

char PIE0    @ 0x90;
char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;
char PIE4    @ 0x94;

char WDTCON  @ 0x97;

char ADRESL  @ 0x9B;
char ADRESH  @ 0x9C;
char ADCON0  @ 0x9D;
char ADCON1  @ 0x9E;
char ADACT   @ 0x9F;

char LATA    @ 0x10C;

char CM1CON0 @ 0x111;
char CM1CON1 @ 0x112;

char CMOUT   @ 0x115;
char BORCON  @ 0x116;
char FVRCON  @ 0x117;
char DACCON0 @ 0x118;
char DACCON1 @ 0x119;

char ANSELA  @ 0x18C;

#ifdef _16F18313
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

char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char ODCONA  @ 0x28C;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;
char CCP1CAP @ 0x294;
char CCPR2L  @ 0x295;
char CCPR2H  @ 0x296;
char CCP2CON @ 0x297;
char CCP2CAP @ 0x298;

char CCPTMRS @ 0x29F;

char SLRCONA @ 0x30C;

char INLVLA  @ 0x38C;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;

char CLKRCON @ 0x39A;

char MDCON   @ 0x39C;
char MDSRC   @ 0x39D;
char MDCARH  @ 0x39E;
char MDCARL  @ 0x39F;

char CCDNA   @ 0x40C;

char NCO1ACCL @ 0x498;
char NCO1ACCH @ 0x499;
char NCO1ACCU @ 0x49A;
char NCO1INCL @ 0x49B;
char NCO1INCH @ 0x49C;
char NCO1INCU @ 0x49D;
char NCO1CON @ 0x49E;
char NCO1CLK @ 0x49F;

char PWM5DCL @ 0x617;
char PWM5DCH @ 0x618;
char PWM5CON @ 0x619;
char PWM6DCL @ 0x61A;
char PWM6DCH @ 0x61B;
char PWM6CON @ 0x61C;

char CWG1CLKCON @ 0x691;
char CWG1DAT @ 0x692;
char CWG1DBR @ 0x693;
char CWG1DBF @ 0x694;
char CWG1CON0 @ 0x695;
char CWG1CON1 @ 0x696;
char CWG1AS0 @ 0x697;
char CWG1AS1 @ 0x698;
char CWG1STR @ 0x699;

char NVMADRL @ 0x891;
char NVMADRH @ 0x892;
char NVMDATL @ 0x893;
char NVMDATH @ 0x894;
char NVMCON1 @ 0x895;
char NVMCON2 @ 0x896;

char PCON0   @ 0x89B;

char PMD0    @ 0x911;
char PMD1    @ 0x912;
char PMD2    @ 0x913;
char PMD3    @ 0x914;
char PMD4    @ 0x915;
char PMD5    @ 0x916;

char CPUDOZE @ 0x918;
char OSCCON1 @ 0x919;
char OSCCON2 @ 0x91A;
char OSCCON3 @ 0x91B;
char OSCSTAT1 @ 0x91C;
char OSCEN   @ 0x91D;
char OSCTUNE @ 0x91E;
char OSCFRQ  @ 0x91F;

char PPSLOCK @ 0xE0F;
char INTPPS  @ 0xE10;
char T0CKIPPS @ 0xE11;
char T1CKIPPS @ 0xE12;
char T1GPPS  @ 0xE13;
char CCP1PPS @ 0xE14;
char CCP2PPS @ 0xE15;

char CWG1PPS @ 0xE18;

char MDCIN1PPS @ 0xE1A;
char MDCIN2PPS @ 0xE1B;
char MDMINPPS @ 0xE1C;

char SSP1CLKPPS @ 0xE20;
char SSP1DATPPS @ 0xE21;
char SSP1SSPPS @ 0xE22;

char RXPPS   @ 0xE24;
char TXPPS   @ 0xE25;

char CLCIN0PPS @ 0xE28;
char CLCIN1PPS @ 0xE29;
char CLCIN2PPS @ 0xE2A;
char CLCIN3PPS @ 0xE2B;

char RA0PPS  @ 0xE90;
char RA1PPS  @ 0xE91;
char RA2PPS  @ 0xE92;

char RA4PPS  @ 0xE94;
char RA5PPS  @ 0xE95;

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


bit  INTEDG  @ INTCON.0;
bit  PEIE    @ INTCON.6;
bit  GIE     @ INTCON.7;

bit  INTF    @ PIR0.0;
bit  IOCIF   @ PIR0.4;
bit  TMR0IF  @ PIR0.5;

bit  TMR1IF  @ PIR1.0;
bit  TMR2IF  @ PIR1.1;
bit  BCL1IF  @ PIR1.2;
bit  SSP1IF  @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  NCO1IF  @ PIR2.0;
bit  NVMIF   @ PIR2.4;
bit  C1IF    @ PIR2.5;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;
bit  CSWIF   @ PIR3.6;
bit  OSFIF   @ PIR3.7;

bit  CCP1IF  @ PIR4.0;
bit  CCP2IF  @ PIR4.1;
bit  CWG1IF  @ PIR4.6;

bit  T0OUTPS0 @ T0CON0.0;
bit  T0OUTPS1 @ T0CON0.1;
bit  T0OUTPS2 @ T0CON0.2;
bit  T0OUTPS3 @ T0CON0.3;
bit  T016BIT @ T0CON0.4;
bit  T0OUT   @ T0CON0.5;
bit  T0EN    @ T0CON0.7;

bit  T0CKPS0 @ T0CON1.0;
bit  T0CKPS1 @ T0CON1.1;
bit  T0CKPS2 @ T0CON1.2;
bit  T0CKPS3 @ T0CON1.3;
bit  T0ASYNC @ T0CON1.4;
bit  T0CS0   @ T0CON1.5;
bit  T0CS1   @ T0CON1.6;
bit  T0CS2   @ T0CON1.7;

bit  TMR1ON  @ T1CON.0;
bit  T1SYNC_ @ T1CON.2;
bit  T1SOSC  @ T1CON.3;
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

bit  INTE    @ PIE0.0;
bit  IOCIE   @ PIE0.4;
bit  TMR0IE  @ PIE0.5;

bit  TMR1IE  @ PIE1.0;
bit  TMR2IE  @ PIE1.1;
bit  BCL1IE  @ PIE1.2;
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  NCO1IE  @ PIE2.0;
bit  NVMIE   @ PIE2.4;
bit  C1IE    @ PIE2.5;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;
bit  CSWIE   @ PIE3.6;
bit  OSFIE   @ PIE3.7;

bit  CCP1IE  @ PIE4.0;
bit  CCP2IE  @ PIE4.1;
bit  CWG1IE  @ PIE4.6;

bit  SWDTEN  @ WDTCON.0;

bit  ADON    @ ADCON0.0;
bit  GO      @ ADCON0.1;
bit  CHS0    @ ADCON0.2;
bit  CHS1    @ ADCON0.3;
bit  CHS2    @ ADCON0.4;
bit  CHS3    @ ADCON0.5;
bit  CHS4    @ ADCON0.6;
bit  CHS5    @ ADCON0.7;

bit  ADPREF0 @ ADCON1.0;
bit  ADPREF1 @ ADCON1.1;
bit  ADNREF  @ ADCON1.2;
bit  ADCS0   @ ADCON1.4;
bit  ADCS1   @ ADCON1.5;
bit  ADCS2   @ ADCON1.6;
bit  ADFM    @ ADCON1.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;

bit  BORRDY  @ BORCON.0;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  CDAFVR0 @ FVRCON.2;
bit  CDAFVR1 @ FVRCON.3;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  DAC1NSS @ DACCON0.0;
bit  DAC1PSS0 @ DACCON0.2;
bit  DAC1PSS1 @ DACCON0.3;
bit  DAC1OE  @ DACCON0.5;
bit  DAC1EN  @ DACCON0.7;

#ifdef _16F18313
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

bit  CCP1FMT @ CCP1CON.4;
bit  CCP1OUT @ CCP1CON.5;
bit  CCP1EN  @ CCP1CON.7;

bit  CCP2FMT @ CCP2CON.4;
bit  CCP2OUT @ CCP2CON.5;
bit  CCP2EN  @ CCP2CON.7;

bit  MDBIT   @ MDCON.0;
bit  MDOUT   @ MDCON.3;
bit  MDOPOL  @ MDCON.4;
bit  MDEN    @ MDCON.7;

bit  MDMS0   @ MDSRC.0;
bit  MDMS1   @ MDSRC.1;
bit  MDMS2   @ MDSRC.2;
bit  MDMS3   @ MDSRC.3;

bit  PWM5POL @ PWM5CON.4;
bit  PWM5OUT @ PWM5CON.5;
bit  PWM5EN  @ PWM5CON.7;

bit  PWM6POL @ PWM6CON.4;
bit  PWM6OUT @ PWM6CON.5;
bit  PWM6EN  @ PWM6CON.7;

bit  RD      @ NVMCON1.0;
bit  WR      @ NVMCON1.1;
bit  WREN    @ NVMCON1.2;
bit  WRERR   @ NVMCON1.3;
bit  FREE    @ NVMCON1.4;
bit  LWLO    @ NVMCON1.5;
bit  NVMREGS @ NVMCON1.6;

bit  BOR_    @ PCON0.0;
bit  POR_    @ PCON0.1;
bit  RI_     @ PCON0.2;
bit  RMCLR_  @ PCON0.3;
bit  RWDT_   @ PCON0.4;
bit  STKUNF  @ PCON0.6;
bit  STKOVF  @ PCON0.7;

bit  IOCMD   @ PMD0.0;
bit  CLKRMD  @ PMD0.1;
bit  NVMMD   @ PMD0.2;
bit  FVRMD   @ PMD0.6;
bit  SYSCMD  @ PMD0.7;

bit  TMR0MD  @ PMD1.0;
bit  TMR1MD  @ PMD1.1;
bit  TMR2MD  @ PMD1.2;
bit  NCOMD   @ PMD1.7;

bit  CMP1MD  @ PMD2.1;
bit  ADCMD   @ PMD2.5;
bit  DACMD   @ PMD2.6;

bit  CCP1MD  @ PMD3.0;
bit  CCP2MD  @ PMD3.1;
bit  PWM5MD  @ PMD3.4;
bit  PWM6MD  @ PMD3.5;
bit  CWG1MD  @ PMD3.6;

bit  MSSP1MD @ PMD4.1;
bit  UART1MD @ PMD4.5;

bit  DSMMD   @ PMD5.0;
bit  CLC1MD  @ PMD5.1;
bit  CLC2MD  @ PMD5.2;

bit  PLLR    @ OSCSTAT1.0;
bit  ADOR    @ OSCSTAT1.2;
bit  SOR     @ OSCSTAT1.3;
bit  LFOR    @ OSCSTAT1.4;
bit  HFOR    @ OSCSTAT1.6;
bit  EXTOR   @ OSCSTAT1.7;

bit  ADOEN   @ OSCEN.2;
bit  SOSCEN  @ OSCEN.3;
bit  LFOEN   @ OSCEN.4;
bit  HFOEN   @ OSCEN.6;
bit  EXTOEN  @ OSCEN.7;

bit  PPSLOCKED @ PPSLOCK.0;

bit  MLC1OUT @ CLCDATA.0;
bit  MLC2OUT @ CLCDATA.1;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FEXTOSC = LP // LP (crystal oscillator) optimized for 32.768 kHz
#pragma config /1 0x3FF9 FEXTOSC = XT // XT (crystal oscillator) from 100 kHz to 4 MHz
#pragma config /1 0x3FFA FEXTOSC = HS // HS (crystal oscillator) above 4 MHz
#pragma config /1 0x3FFC FEXTOSC = OFF // Oscillator not enabled
#pragma config /1 0x3FFD FEXTOSC = ECL // EC (external clock) below 100 kHz
#pragma config /1 0x3FFE FEXTOSC = ECM // EC (external clock) for 100 kHz to 8 MHz
#pragma config /1 0x3FFF FEXTOSC = ECH // EC (external clock) above 8 MHz
#pragma config /1 0x3F8F RSTOSC = HFINT32 // HFINTOSC with 2x PLL (32MHz)
#pragma config /1 0x3F9F RSTOSC = EXT4X // EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3FBF RSTOSC = SOSC // SOSC (31kHz)
#pragma config /1 0x3FCF RSTOSC = LFINT // LFINTOSC (31kHz)
#pragma config /1 0x3FEF RSTOSC = HFINT1 // HFINTOSC (1MHz)
#pragma config /1 0x3FFF RSTOSC = EXT1X // EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3EFF CLKOUTEN = ON // CLKOUT function is enabled; FOSC/4 clock appears at OSC2
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled; I/O or oscillator function on OSC2
#pragma config /1 0x37FF CSWEN = OFF // The NOSC and NDIV bits cannot be changed by user software
#pragma config /1 0x3FFF CSWEN = ON // Writing to NOSC and NDIV is allowed
#pragma config /1 0x1FFF FCMEN = OFF // Fail-Safe Clock Monitor is disabled
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor is enabled
#pragma config /2 0x3FFE MCLRE = OFF // MCLR/VPP pin function is digital input; MCLR internally disabled; Weak pull-up under control of port pin's WPU control bit.
#pragma config /2 0x3FFF MCLRE = ON // MCLR/VPP pin function is MCLR; Weak pull-up enabled 
#pragma config /2 0x3FFD PWRTE = ON // PWRT enabled
#pragma config /2 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /2 0x3FF3 WDTE = OFF // WDT disabled; SWDTEN is ignored
#pragma config /2 0x3FF7 WDTE = SWDTEN // WDT controlled by the SWDTEN bit in the WDTCON register
#pragma config /2 0x3FFB WDTE = SLEEP // WDT enabled while running and disabled while in SLEEP/IDLE; SWDTEN is ignored
#pragma config /2 0x3FFF WDTE = ON // WDT enabled, SWDTEN is ignored
#pragma config /2 0x3FDF LPBOREN = ON // ULPBOR enabled
#pragma config /2 0x3FFF LPBOREN = OFF // ULPBOR disabled
#pragma config /2 0x3F3F BOREN = OFF // Brown-out Reset disabled
#pragma config /2 0x3F7F BOREN = SBOREN // Brown-out Reset enabled according to SBOREN
#pragma config /2 0x3FBF BOREN = SLEEP // Brown-out Reset enabled while running, disabled in Sleep; SBOREN is ignored
#pragma config /2 0x3FFF BOREN = ON // Brown-out Reset enabled, SBOREN bit ignored
#pragma config /2 0x3DFF BORV = HIGH // Brown-out voltage (Vbor) set to 2.7V
#pragma config /2 0x3FFF BORV = LOW // Brown-out voltage (Vbor) set to 2.45V
#pragma config /2 0x37FF PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly (subject to the unlock sequence)
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle
#pragma config /2 0x2FFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x1FFF DEBUG = ON // Background debugger enabled
#pragma config /2 0x3FFF DEBUG = OFF // Background debugger disabled
#pragma config /3 0x3FFC WRT = ALL // 0000h to 07FFh write protected, no addresses may be modified
#pragma config /3 0x3FFD WRT = HALF // 0000h to 03FFh write-protected, 0400h to 07FFh may be modified
#pragma config /3 0x3FFE WRT = BOOT // 0000h to 01FFh write-protected, 0200h to 07FFh may be modified
#pragma config /3 0x3FFF WRT = OFF // Write protection off
#pragma config /3 0x1FFF LVP = OFF // HV on MCLR/VPP must be used for programming.
#pragma config /3 0x3FFF LVP = ON // Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored.
#pragma config /4 0x3FFE CP = ON // User NVM code protection enabled
#pragma config /4 0x3FFF CP = OFF // User NVM code protection disabled
#pragma config /4 0x3FFD CPD = ON // Data NVM code protection enabled
#pragma config /4 0x3FFF CPD = OFF // Data NVM code protection disabled
#endif
