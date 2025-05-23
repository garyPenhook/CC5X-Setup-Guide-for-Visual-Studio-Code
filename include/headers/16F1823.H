// HEADER FILE
#pragma chip PIC16F1823, core 14 enh, code 2048, ram 32 : 0xBF

#ifdef ICD2_DEBUG
 //RESERVED RAM LOCATIONS
 char reservedICD2[11] @ 0xB5;  // reserved RAM for ICD2

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

char PORTC   @ 0x0E;

char PIR1    @ 0x11;
char PIR2    @ 0x12;

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

char TRISC   @ 0x8E;

char PIE1    @ 0x91;
char PIE2    @ 0x92;

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
char SRCON0  @ 0x11A;
char SRCON1  @ 0x11B;

char APFCON  @ 0x11D;

char ANSELA  @ 0x18C;

char ANSELC  @ 0x18E;

char EEADRL  @ 0x191;
char EEADRH  @ 0x192;
char EEDATL  @ 0x193;
char EEDATH  @ 0x194;
char EECON1  @ 0x195;
char EECON2  @ 0x196;

char RCREG   @ 0x199;
char TXREG   @ 0x19A;
char SPBRGL  @ 0x19B;
char SPBRGH  @ 0x19C;
char RCSTA   @ 0x19D;
char TXSTA   @ 0x19E;
char BAUDCON @ 0x19F;

char WPUA    @ 0x20C;

char WPUC    @ 0x20E;

char SSP1BUF  @ 0x211;
char SSP1ADD  @ 0x212;
char SSP1MSK  @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;
char PWM1CON @ 0x294;
char CCP1AS  @ 0x295;
char PSTR1CON @ 0x296;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;

char CLKRCON @ 0x39A;

char MDCON   @ 0x39C;
char MDSRC   @ 0x39D;
char MDCARL  @ 0x39E;
char MDCARH  @ 0x39F;

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
bit  SSP1IF  @ PIR1.3;
bit  TXIF    @ PIR1.4;
bit  RCIF    @ PIR1.5;
bit  ADIF    @ PIR1.6;
bit  TMR1GIF @ PIR1.7;

bit  BCL1IF  @ PIR2.3;
bit  EEIF    @ PIR2.4;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

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
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  BCL1IE  @ PIE2.3;
bit  EEIE    @ PIE2.4;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

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

bit  BORRDY  @ BORCON.0;
bit  SBOREN  @ BORCON.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  CDAFVR0 @ FVRCON.2;
bit  CDAFVR1 @ FVRCON.3;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

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

bit  CCP1SEL @ APFCON.0;
bit  P1BSEL  @ APFCON.1;
bit  TXCKSEL @ APFCON.2;
bit  T1GSEL  @ APFCON.3;
bit  SSSEL   @ APFCON.5;
bit  SDOSEL  @ APFCON.6;
bit  RXDTSEL @ APFCON.7;

bit  RD      @ EECON1.0;
bit  WR      @ EECON1.1;
bit  WREN    @ EECON1.2;
bit  WRERR   @ EECON1.3;
bit  FREE    @ EECON1.4;
bit  LWLO    @ EECON1.5;
bit  CFGS    @ EECON1.6;
bit  EEPGD   @ EECON1.7;

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

bit  SSPM0   @ SSP1CON1.0;
bit  SSPM1   @ SSP1CON1.1;
bit  SSPM2   @ SSP1CON1.2;
bit  SSPM3   @ SSP1CON1.3;
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

bit  CLKRDIV0 @ CLKRCON.0;
bit  CLKRDIV1 @ CLKRCON.1;
bit  CLKRDIV2 @ CLKRCON.2;
bit  CLKRDC0 @ CLKRCON.3;
bit  CLKRDC1 @ CLKRCON.4;
bit  CLKRSLR @ CLKRCON.5;
bit  CLKROE  @ CLKRCON.6;
bit  CLKREN  @ CLKRCON.7;

bit  MDBIT   @ MDCON.0;
bit  MDOUT   @ MDCON.3;
bit  MDOPOL  @ MDCON.4;
bit  MDSLR   @ MDCON.5;
bit  MDOE    @ MDCON.6;
bit  MDEN    @ MDCON.7;

bit  MDMS0   @ MDSRC.0;
bit  MDMS1   @ MDSRC.1;
bit  MDMS2   @ MDSRC.2;
bit  MDMS3   @ MDSRC.3;
bit  MDMSODIS @ MDSRC.7;

bit  MDCL0   @ MDCARL.0;
bit  MDCL1   @ MDCARL.1;
bit  MDCL2   @ MDCARL.2;
bit  MDCL3   @ MDCARL.3;
bit  MDCLSYNC @ MDCARL.5;
bit  MDCLPOL @ MDCARL.6;
bit  MDCLODIS @ MDCARL.7;

bit  MDCH0   @ MDCARH.0;
bit  MDCH1   @ MDCARH.1;
bit  MDCH2   @ MDCARH.2;
bit  MDCH3   @ MDCARH.3;
bit  MDCHSYNC @ MDCARH.5;
bit  MDCHPOL @ MDCARH.6;
bit  MDCHODIS @ MDCARH.7;

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
#pragma config /2 0x3FFC WRT = ALL // 000h to 7FFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to 3FFh write protected, 400h to 7FFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 7FFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3EFF PLLEN = OFF // 4x PLL disabled
#pragma config /2 0x3FFF PLLEN = ON // 4x PLL enabled
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#ifdef _16LF1823
#pragma config /2 0x3FFF BORV = 19 // Brown-out Reset Voltage (Vbor), low trip point selected.
#endif
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
