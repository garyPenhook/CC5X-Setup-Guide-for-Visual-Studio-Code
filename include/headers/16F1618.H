// HEADER FILE
#pragma chip PIC16F1618, core 14 enh, code 4096, ram 32 : 0x32F // 512 bytes
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

char PIR1    @ 0x10;
char PIR2    @ 0x11;
char PIR3    @ 0x12;
char PIR4    @ 0x13;
char PIR5    @ 0x14;
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
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;

char PIE1    @ 0x90;
char PIE2    @ 0x91;
char PIE3    @ 0x92;
char PIE4    @ 0x93;
char PIE5    @ 0x94;
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
char LATB    @ 0x10D;
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

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;
char ANSELC  @ 0x18E;

char PMADRL  @ 0x191;
char PMADRH  @ 0x192;
char PMDATL  @ 0x193;
char PMDATH  @ 0x194;
char PMCON1  @ 0x195;
char PMCON2  @ 0x196;
#if _16F1618
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
char WPUB    @ 0x20D;
char WPUC    @ 0x20E;

char SSP1BUF @ 0x211;
char SSP1ADD @ 0x212;
char SSP1MSK @ 0x213;
char SSP1STAT @ 0x214;
char SSP1CON1 @ 0x215;
char SSP1CON2 @ 0x216;
char SSP1CON3 @ 0x217;

char ODCONA  @ 0x28C;
char ODCONB  @ 0x28D;
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
char SLRCONB @ 0x30D;
char SLRCONC @ 0x30E;

char INLVLA  @ 0x38C;
char INLVLB  @ 0x38D;
char INLVLC  @ 0x38E;

char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;
char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;
char IOCCP   @ 0x397;
char IOCCN   @ 0x398;
char IOCCF   @ 0x399;

char HIDRVC  @ 0x40E;

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

char TMR3L   @ 0x493;
char TMR3H   @ 0x494;
char T3CON   @ 0x495;
char T3GCON  @ 0x496;

char TMR5L   @ 0x49A;
char TMR5H   @ 0x49B;
char T5CON   @ 0x49C;
char T5GCON  @ 0x49D;

char PID1SETL @ 0x58C;
char PID1SETH @ 0x58D;
char PID1INL @ 0x58E;
char PID1INH @ 0x58F;
char PID1K1L @ 0x590;
char PID1K1H @ 0x591;
char PID1K2L @ 0x592;
char PID1K2H @ 0x593;
char PID1K3L @ 0x594;
char PID1K3H @ 0x595;
char PID1OUTLL @ 0x596;
char PID1OUTLH @ 0x597;
char PID1OUTHL @ 0x598;
char PID1OUTHH @ 0x599;
char PID1OUTU @ 0x59A;
char PID1Z1L @ 0x59B;
char PID1Z1H @ 0x59C;
char PID1Z1U @ 0x59D;

char PID1Z2L @ 0x60C;
char PID1Z2H @ 0x60D;
char PID1Z2U @ 0x60E;
char PID1ACCLL @ 0x60F;
char PID1ACCLH @ 0x610;
char PID1ACCHL @ 0x611;
char PID1ACCHH @ 0x612;
char PID1ACCU @ 0x613;
char PID1CON1 @ 0x614;

char PWM3DCL @ 0x617;
char PWM3DCH @ 0x618;
char PWM3CON @ 0x619;
char PWM4DCL @ 0x61A;
char PWM4DCH @ 0x61B;
char PWM4CON @ 0x61C;

char CWG1DBR @ 0x691;
char CWG1DBF @ 0x692;
char CWG1AS0 @ 0x693;
char CWG1AS1 @ 0x694;
char CWG1OCON0 @ 0x695;
char CWG1CON0 @ 0x696;
char CWG1CON1 @ 0x697;

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

char AT1RESL @ 0x80C;
char AT1RESH @ 0x80D;
char AT1MISSL @ 0x80E;
char AT1MISSH @ 0x80F;
char AT1PERL @ 0x810;
char AT1PERH @ 0x811;
char AT1PHSL @ 0x812;
char AT1PHSH @ 0x813;
char AT1CON0 @ 0x814;
char AT1CON1 @ 0x815;
char AT1IR0  @ 0x816;
char AT1IE0  @ 0x817;
char AT1IR1  @ 0x818;
char AT1IE1  @ 0x819;
char AT1STPTL @ 0x81A;
char AT1STPTH @ 0x81B;
char AT1ERRL @ 0x81C;
char AT1ERRH @ 0x81D;

char AT1CLK  @ 0x88C;
char AT1SIG  @ 0x88D;
char AT1CSEL1 @ 0x88E;
char AT1CC1L @ 0x88F;
char AT1CC1H @ 0x890;
char AT1CCON1 @ 0x891;
char AT1CSEL2 @ 0x892;
char AT1CC2L @ 0x893;
char AT1CC2H @ 0x894;
char AT1CCON2 @ 0x895;
char AT1CSEL3 @ 0x896;
char AT1CC3L @ 0x897;
char AT1CC3H @ 0x898;
char AT1CCON3 @ 0x899;

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

char PPSLOCK @ 0xE0F;
char INTPPS  @ 0xE10;
char T0CKIPPS @ 0xE11;
char T1CKIPPS @ 0xE12;
char T1GPPS  @ 0xE13;
char CCP1PPS @ 0xE14;
char CCP2PPS @ 0xE15;
char ATINPPS @ 0xE16;
char CWGINPPS @ 0xE17;
char T2PPS   @ 0xE18;
char T3CKIPPS @ 0xE19;
char T3GPPS  @ 0xE1A;
char T4PPS   @ 0xE1B;
char T5CKIPPS @ 0xE1C;
char T5GPPS  @ 0xE1D;
char T6PPS   @ 0xE1E;
char ATCC1PPS @ 0xE1F;
char SSPCLKPPS @ 0xE20;
char SSPDATPPS @ 0xE21;
char SSPSSPPS @ 0xE22;
char ATCC2PPS @ 0xE23;
char RXPPS   @ 0xE24;
char CKPPS   @ 0xE25;
char SMT1SIGPPS @ 0xE26;
char SMT1WINPPS @ 0xE27;
char CLCIN0PPS @ 0xE28;
char CLCIN1PPS @ 0xE29;
char CLCIN2PPS @ 0xE2A;
char CLCIN3PPS @ 0xE2B;
char SMT2SIGPPS @ 0xE2C;
char SMT2WINPPS @ 0xE2D;
char ATCC3PPS @ 0xE2E;

char RA0PPS  @ 0xE90;
char RA1PPS  @ 0xE91;
char RA2PPS  @ 0xE92;

char RA4PPS  @ 0xE94;
char RA5PPS  @ 0xE95;

char RB4PPS  @ 0xE9C;
char RB5PPS  @ 0xE9D;
char RB6PPS  @ 0xE9E;
char RB7PPS  @ 0xE9F;
char RC0PPS  @ 0xEA0;
char RC1PPS  @ 0xEA1;
char RC2PPS  @ 0xEA2;
char RC3PPS  @ 0xEA3;
char RC4PPS  @ 0xEA4;
char RC5PPS  @ 0xEA5;
char RC6PPS  @ 0xEA6;
char RC7PPS  @ 0xEA7;

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

bit  CCP2IF  @ PIR2.0;
bit  TMR4IF  @ PIR2.1;
bit  TMR6IF  @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;

bit  CLC1IF  @ PIR3.0;
bit  CLC2IF  @ PIR3.1;
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

bit  PID1DIF @ PIR5.0;
bit  PID1EIF @ PIR5.1;
bit  AT1IF   @ PIR5.2;
bit  TMR5IF  @ PIR5.4;
bit  TMR5GIF @ PIR5.5;
bit  TMR3IF  @ PIR5.6;
bit  TMR3GIF @ PIR5.7;

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
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  TMR4IE  @ PIE2.1;
bit  TMR6IE  @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;

bit  CLC1IE  @ PIE3.0;
bit  CLC2IE  @ PIE3.1;
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

bit  PID1DIE @ PIE5.0;
bit  PID1EIE @ PIE5.1;
bit  AT1IE   @ PIE5.2;
bit  TMR5IE  @ PIE5.4;
bit  TMR5GIE @ PIE5.5;
bit  TMR3IE  @ PIE5.6;
bit  TMR3GIE @ PIE5.7;

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

bit  RD      @ PMCON1.0;
bit  WR      @ PMCON1.1;
bit  WREN    @ PMCON1.2;
bit  WRERR   @ PMCON1.3;
bit  FREE    @ PMCON1.4;
bit  LWLO    @ PMCON1.5;
bit  CFGS    @ PMCON1.6;

#if _16F1618
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

bit  TMR4ON  @ T4CON.7;

bit  TMR6ON  @ T6CON.7;

bit  TMR3ON  @ T3CON.0;
bit  T3SYNC  @ T3CON.2;

bit  T3GSS0  @ T3GCON.0;
bit  T3GSS1  @ T3GCON.1;
bit  T3GVAL  @ T3GCON.2;
bit  T3GGO   @ T3GCON.3;
bit  T3GSPM  @ T3GCON.4;
bit  T3GTM   @ T3GCON.5;
bit  T3GPOL  @ T3GCON.6;
bit  TMR3GE  @ T3GCON.7;

bit  TMR5ON  @ T5CON.0;
bit  T5SYNC  @ T5CON.2;

bit  T5GSS0  @ T5GCON.0;
bit  T5GSS1  @ T5GCON.1;
bit  T5GVAL  @ T5GCON.2;
bit  T5GGO   @ T5GCON.3;
bit  T5GSPM  @ T5GCON.4;
bit  T5GTM   @ T5GCON.5;
bit  T5GPOL  @ T5GCON.6;
bit  TMR5GE  @ T5GCON.7;

bit  AT1PERIF @ AT1IR0.0;
bit  AT1MISSIF @ AT1IR0.1;
bit  AT1PHSIF @ AT1IR0.2;

bit  AT1PERIE @ AT1IE0.0;
bit  AT1MISSIE @ AT1IE0.1;
bit  AT1PHSIE @ AT1IE0.2;

bit  AT1CC1IF @ AT1IR1.0;
bit  AT1CC2IF @ AT1IR1.1;
bit  AT1CC3IF @ AT1IR1.2;

bit  AT1CC1IE @ AT1IE1.0;
bit  AT1CC2IE @ AT1IE1.1;
bit  AT1CC3IE @ AT1IE1.2;

bit  PPSLOCKED @ PPSLOCK.0;

bit  MLC1OUT @ CLCDATA.0;
bit  MLC2OUT @ CLCDATA.1;

bit  LC1MODE0 @ CLC1CON.0;
bit  LC1MODE1 @ CLC1CON.1;
bit  LC1MODE2 @ CLC1CON.2;
bit  LC1INTN @ CLC1CON.3;
bit  LC1INTP @ CLC1CON.4;
bit  LC1OUT  @ CLC1CON.5;
bit  LC1EN   @ CLC1CON.7;

bit  LC1G1POL @ CLC1POL.0;
bit  LC1G2POL @ CLC1POL.1;
bit  LC1G3POL @ CLC1POL.2;
bit  LC1G4POL @ CLC1POL.3;
bit  LC1POL  @ CLC1POL.7;

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
bit  LC2EN   @ CLC2CON.7;

bit  LC2G1POL @ CLC2POL.0;
bit  LC2G2POL @ CLC2POL.1;
bit  LC2G3POL @ CLC2POL.2;
bit  LC2G4POL @ CLC2POL.3;
bit  LC2POL  @ CLC2POL.7;

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
#pragma config /2 0x3FFC WRT = ALL // 000h to 1FFFh write protected, no addresses may be modified by PMCON control
#pragma config /2 0x3FFD WRT = HALF // 000h to FFFh write protected, 1000h to 1FFFh may be modified by PMCON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 1FFFh may be modified by PMCON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#pragma config /2 0x3FFB PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly by software
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit cannot be cleared once it is set by software
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
#pragma config /3 0x07FF WDTCCS = LFINTOSC // 31.0kHz LFINTOSC
#pragma config /3 0x0FFF WDTCCS = MFINTOSC // 31.25 kHz HFINTOSC (MFINTOSC)
#pragma config /3 0x3FFF WDTCCS = SWC // Software control, controlled by WDTCS bits
#endif
