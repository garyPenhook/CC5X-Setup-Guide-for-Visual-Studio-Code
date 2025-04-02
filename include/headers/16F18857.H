// HEADER FILE
#pragma chip PIC16F18857, core 14 enh2, code 32768, ram 32 : 0x197F // 4096 bytes
#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_enh_style

#pragma wideConstData h

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
char TRISA   @ 0x11;
char TRISB   @ 0x12;
char TRISC   @ 0x13;

char LATA    @ 0x16;
char LATB    @ 0x17;
char LATC    @ 0x18;

char TMR0L   @ 0x1C;
char TMR0H   @ 0x1D;
char T0CON0  @ 0x1E;
char T0CON1  @ 0x1F;

char ADRESL  @ 0x8C;
char ADRESH  @ 0x8D;
char ADPREVL @ 0x8E;
char ADPREVH @ 0x8F;
char ADACCL  @ 0x90;
char ADACCH  @ 0x91;

char ADCON0  @ 0x93;
char ADCON1  @ 0x94;
char ADCON2  @ 0x95;
char ADCON3  @ 0x96;
char ADSTAT  @ 0x97;
char ADCLK   @ 0x98;
char ADACT   @ 0x99;
char ADREF   @ 0x9A;
char ADCAP   @ 0x9B;
char ADPRE   @ 0x9C;
char ADACQ   @ 0x9D;
char ADPCH   @ 0x9E;

char ADCNT   @ 0x10C;
char ADRPT   @ 0x10D;
char ADLTHL  @ 0x10E;
char ADLTHH  @ 0x10F;
char ADUTHL  @ 0x110;
char ADUTHH  @ 0x111;
char ADSTPTL @ 0x112;
char ADSTPTH @ 0x113;
char ADFLTRL @ 0x114;
char ADFLTRH @ 0x115;
char ADERRL  @ 0x116;
char ADERRH  @ 0x117;

char RC1REG  @ 0x119;
char TX1REG  @ 0x11A;
char SP1BRGL @ 0x11B;
char SP1BRGH @ 0x11C;
char RC1STA  @ 0x11D;
char TX1STA  @ 0x11E;
char BAUD1CON @ 0x11F;

char SSP1BUF @ 0x18C;
char SSP1ADD @ 0x18D;
char SSP1MSK @ 0x18E;
char SSP1STAT @ 0x18F;
char SSP1CON1 @ 0x190;
char SSP1CON2 @ 0x191;
char SSP1CON3 @ 0x192;

char SSP2BUF @ 0x196;
char SSP2ADD @ 0x197;
char SSP2MSK @ 0x198;
char SSP2STAT @ 0x199;
char SSP2CON1 @ 0x19A;
char SSP2CON2 @ 0x19B;
char SSP2CON3 @ 0x19C;

char TMR1L   @ 0x20C;
char TMR1H   @ 0x20D;
char T1CON   @ 0x20E;
char T1GCON  @ 0x20F;
char T1GATE  @ 0x210;
char T1CLK   @ 0x211;
char TMR3L   @ 0x212;
char TMR3H   @ 0x213;
char T3CON   @ 0x214;
char T3GCON  @ 0x215;
char T3GATE  @ 0x216;
char T3CLK   @ 0x217;
char TMR5L   @ 0x218;
char TMR5H   @ 0x219;
char T5CON   @ 0x21A;
char T5GCON  @ 0x21B;
char T5GATE  @ 0x21C;
char T5CLK   @ 0x21D;
char CCPTMRS0 @ 0x21E;
char CCPTMRS1 @ 0x21F;

char T2TMR   @ 0x28C;
char T2PR    @ 0x28D;
char T2CON   @ 0x28E;
char T2HLT   @ 0x28F;
char T2CLKCON @ 0x290;
char T2RST   @ 0x291;
char T4TMR   @ 0x292;
char T4PR    @ 0x293;
char T4CON   @ 0x294;
char T4HLT   @ 0x295;
char T4CLKCON @ 0x296;
char T4RST   @ 0x297;
char T6TMR   @ 0x298;
char T6PR    @ 0x299;
char T6CON   @ 0x29A;
char T6HLT   @ 0x29B;
char T6CLKCON @ 0x29C;
char T6RST   @ 0x29D;

char CCPR1L  @ 0x30C;
char CCPR1H  @ 0x30D;
char CCP1CON @ 0x30E;
char CCP1CAP @ 0x30F;
char CCPR2L  @ 0x310;
char CCPR2H  @ 0x311;
char CCP2CON @ 0x312;
char CCP2CAP @ 0x313;
char CCPR3L  @ 0x314;
char CCPR3H  @ 0x315;
char CCP3CON @ 0x316;
char CCP3CAP @ 0x317;
char CCPR4L  @ 0x318;
char CCPR4H  @ 0x319;
char CCP4CON @ 0x31A;
char CCP4CAP @ 0x31B;
char CCPR5L  @ 0x31C;
char CCPR5H  @ 0x31D;
char CCP5CON @ 0x31E;
char CCP5CAP @ 0x31F;

char PWM6DCL @ 0x38C;
char PWM6DCH @ 0x38D;
char PWM6CON @ 0x38E;

char PWM7DCL @ 0x390;
char PWM7DCH @ 0x391;
char PWM7CON @ 0x392;

char SCANLADRL @ 0x40C;
char SCANLADRH @ 0x40D;
char SCANHADRL @ 0x40E;
char SCANHADRH @ 0x40F;
char SCANCON0 @ 0x410;
char SCANTRIG @ 0x411;

char CRCDATL @ 0x416;
char CRCDATH @ 0x417;
char CRCACCL @ 0x418;
char CRCACCH @ 0x419;
char CRCSHIFTL @ 0x41A;
char CRCSHIFTH @ 0x41B;
char CRCXORL @ 0x41C;
char CRCXORH @ 0x41D;
char CRCCON0 @ 0x41E;
char CRCCON1 @ 0x41F;

char SMT1TMRL @ 0x48C;
char SMT1TMRH @ 0x48D;
char SMT1TMRU @ 0x48E;
char SMT1CPRL @ 0x48F;
char SMT1CPRH @ 0x490;
char SMT1CPRU @ 0x491;
char SMT1CPWL @ 0x492;
char SMT1CPWH @ 0x493;
char SMT1CPWU @ 0x494;
char SMT1PRL @ 0x495;
char SMT1PRH @ 0x496;
char SMT1PRU @ 0x497;
char SMT1CON0 @ 0x498;
char SMT1CON1 @ 0x499;
char SMT1STAT @ 0x49A;
char SMT1CLK @ 0x49B;
char SMT1SIG @ 0x49C;
char SMT1WIN @ 0x49D;

char SMT2TMRL @ 0x50C;
char SMT2TMRH @ 0x50D;
char SMT2TMRU @ 0x50E;
char SMT2CPRL @ 0x50F;
char SMT2CPRH @ 0x510;
char SMT2CPRU @ 0x511;
char SMT2CPWL @ 0x512;
char SMT2CPWH @ 0x513;
char SMT2CPWU @ 0x514;
char SMT2PRL @ 0x515;
char SMT2PRH @ 0x516;
char SMT2PRU @ 0x517;
char SMT2CON0 @ 0x518;
char SMT2CON1 @ 0x519;
char SMT2STAT @ 0x51A;
char SMT2CLK @ 0x51B;
char SMT2SIG @ 0x51C;
char SMT2WIN @ 0x51D;

char NCO1ACCL @ 0x58C;
char NCO1ACCH @ 0x58D;
char NCO1ACCU @ 0x58E;
char NCO1INCL @ 0x58F;
char NCO1INCH @ 0x590;
char NCO1INCU @ 0x591;
char NCO1CON @ 0x592;
char NCO1CLK @ 0x593;

char CWG1CLKCON @ 0x60C;
char CWG1ISM @ 0x60D;
char CWG1DBR @ 0x60E;
char CWG1DBF @ 0x60F;
char CWG1CON0 @ 0x610;
char CWG1CON1 @ 0x611;
char CWG1AS0 @ 0x612;
char CWG1AS1 @ 0x613;
char CWG1STR @ 0x614;

char CWG2CLKCON @ 0x616;
char CWG2ISM @ 0x617;
char CWG2DBR @ 0x618;
char CWG2DBF @ 0x619;
char CWG2CON0 @ 0x61A;
char CWG2CON1 @ 0x61B;
char CWG2AS0 @ 0x61C;
char CWG2AS1 @ 0x61D;
char CWG2STR @ 0x61E;

char CWG3CLKCON @ 0x68C;
char CWG3ISM @ 0x68D;
char CWG3DBR @ 0x68E;
char CWG3DBF @ 0x68F;
char CWG3CON0 @ 0x690;
char CWG3CON1 @ 0x691;
char CWG3AS0 @ 0x692;
char CWG3AS1 @ 0x693;
char CWG3STR @ 0x694;

char PIR0    @ 0x70C;
char PIR1    @ 0x70D;
char PIR2    @ 0x70E;
char PIR3    @ 0x70F;
char PIR4    @ 0x710;
char PIR5    @ 0x711;
char PIR6    @ 0x712;
char PIR7    @ 0x713;
char PIR8    @ 0x714;

char PIE0    @ 0x716;
char PIE1    @ 0x717;
char PIE2    @ 0x718;
char PIE3    @ 0x719;
char PIE4    @ 0x71A;
char PIE5    @ 0x71B;
char PIE6    @ 0x71C;
char PIE7    @ 0x71D;
char PIE8    @ 0x71E;

char PMD0    @ 0x796;
char PMD1    @ 0x797;
char PMD2    @ 0x798;
char PMD3    @ 0x799;
char PMD4    @ 0x79A;
char PMD5    @ 0x79B;

char WDTCON0 @ 0x80C;
char WDTCON1 @ 0x80D;
char WDTPSL  @ 0x80E;
char WDTPSH  @ 0x80F;
char WDTTMR  @ 0x810;
char BORCON  @ 0x811;
#ifdef _16F18857
char VREGCON @ 0x812;
#endif
char PCON0   @ 0x813;
char CCDCON  @ 0x814;

char NVMADRL @ 0x81A;
char NVMADRH @ 0x81B;
char NVMDATL @ 0x81C;
char NVMDATH @ 0x81D;
char NVMCON1 @ 0x81E;
char NVMCON2 @ 0x81F;

char CPUDOZE @ 0x88C;
char OSCCON1 @ 0x88D;
char OSCCON2 @ 0x88E;
char OSCCON3 @ 0x88F;
char OSCSTAT @ 0x890;
char OSCEN   @ 0x891;
char OSCTUNE @ 0x892;
char OSCFRQ  @ 0x893;

char CLKRCON @ 0x895;
char CLKRCLK @ 0x896;
char MDCON0  @ 0x897;
char MDCON1  @ 0x898;
char MDSRC   @ 0x899;
char MDCARL  @ 0x89A;
char MDCARH  @ 0x89B;

char FVRCON  @ 0x90C;

char DAC1CON0 @ 0x90E;
char DAC1CON1 @ 0x90F;

char ZCDCON  @ 0x91F;

char CMOUT   @ 0x98F;
char CM1CON0 @ 0x990;
char CM1CON1 @ 0x991;
char CM1NSEL @ 0x992;
char CM1PSEL @ 0x993;
char CM2CON0 @ 0x994;
char CM2CON1 @ 0x995;
char CM2NSEL @ 0x996;
char CM2PSEL @ 0x997;

char CLCDATA @ 0x1E0F;
char CLC1CON @ 0x1E10;
char CLC1POL @ 0x1E11;
char CLC1SEL0 @ 0x1E12;
char CLC1SEL1 @ 0x1E13;
char CLC1SEL2 @ 0x1E14;
char CLC1SEL3 @ 0x1E15;
char CLC1GLS0 @ 0x1E16;
char CLC1GLS1 @ 0x1E17;
char CLC1GLS2 @ 0x1E18;
char CLC1GLS3 @ 0x1E19;
char CLC2CON @ 0x1E1A;
char CLC2POL @ 0x1E1B;
char CLC2SEL0 @ 0x1E1C;
char CLC2SEL1 @ 0x1E1D;
char CLC2SEL2 @ 0x1E1E;
char CLC2SEL3 @ 0x1E1F;
char CLC2GLS0 @ 0x1E20;
char CLC2GLS1 @ 0x1E21;
char CLC2GLS2 @ 0x1E22;
char CLC2GLS3 @ 0x1E23;
char CLC3CON @ 0x1E24;
char CLC3POL @ 0x1E25;
char CLC3SEL0 @ 0x1E26;
char CLC3SEL1 @ 0x1E27;
char CLC3SEL2 @ 0x1E28;
char CLC3SEL3 @ 0x1E29;
char CLC3GLS0 @ 0x1E2A;
char CLC3GLS1 @ 0x1E2B;
char CLC3GLS2 @ 0x1E2C;
char CLC3GLS3 @ 0x1E2D;
char CLC4CON @ 0x1E2E;
char CLC4POL @ 0x1E2F;
char CLC4SEL0 @ 0x1E30;
char CLC4SEL1 @ 0x1E31;
char CLC4SEL2 @ 0x1E32;
char CLC4SEL3 @ 0x1E33;
char CLC4GLS0 @ 0x1E34;
char CLC4GLS1 @ 0x1E35;
char CLC4GLS2 @ 0x1E36;
char CLC4GLS3 @ 0x1E37;

char PPSLOCK @ 0x1E8F;
char INTPPS  @ 0x1E90;
char T0CKIPPS @ 0x1E91;
char T1CKIPPS @ 0x1E92;
char T1GPPS  @ 0x1E93;
char T3CKIPPS @ 0x1E94;
char T3GPPS  @ 0x1E95;
char T5CKIPPS @ 0x1E96;
char T5GPPS  @ 0x1E97;

char T2AINPPS @ 0x1E9C;
char T4AINPPS @ 0x1E9D;
char T6AINPPS @ 0x1E9E;

char CCP1PPS @ 0x1EA1;
char CCP2PPS @ 0x1EA2;
char CCP3PPS @ 0x1EA3;
char CCP4PPS @ 0x1EA4;
char CCP5PPS @ 0x1EA5;

char SMT1WINPPS @ 0x1EA9;
char SMT1SIGPPS @ 0x1EAA;
char SMT2WINPPS @ 0x1EAB;
char SMT2SIGPPS @ 0x1EAC;

char CWG1PPS @ 0x1EB1;
char CWG2PPS @ 0x1EB2;
char CWG3PPS @ 0x1EB3;

char MDCARLPPS @ 0x1EB8;
char MDCARHPPS @ 0x1EB9;
char MDSRCPPS @ 0x1EBA;
char CLCIN0PPS @ 0x1EBB;
char CLCIN1PPS @ 0x1EBC;
char CLCIN2PPS @ 0x1EBD;
char CLCIN3PPS @ 0x1EBE;

char ADCACTPPS @ 0x1EC3;

char SSP1CLKPPS @ 0x1EC5;
char SSP1DATPPS @ 0x1EC6;
char SSP1SSPPS @ 0x1EC7;
char SSP2CLKPPS @ 0x1EC8;
char SSP2DATPPS @ 0x1EC9;
char SSP2SSPPS @ 0x1ECA;
char RXPPS   @ 0x1ECB;
char TXPPS   @ 0x1ECC;

char RA0PPS  @ 0x1F10;
char RA1PPS  @ 0x1F11;
char RA2PPS  @ 0x1F12;
char RA3PPS  @ 0x1F13;
char RA4PPS  @ 0x1F14;
char RA5PPS  @ 0x1F15;
char RA6PPS  @ 0x1F16;
char RA7PPS  @ 0x1F17;
char RB0PPS  @ 0x1F18;
char RB1PPS  @ 0x1F19;
char RB2PPS  @ 0x1F1A;
char RB3PPS  @ 0x1F1B;
char RB4PPS  @ 0x1F1C;
char RB5PPS  @ 0x1F1D;
char RB6PPS  @ 0x1F1E;
char RB7PPS  @ 0x1F1F;
char RC0PPS  @ 0x1F20;
char RC1PPS  @ 0x1F21;
char RC2PPS  @ 0x1F22;
char RC3PPS  @ 0x1F23;
char RC4PPS  @ 0x1F24;
char RC5PPS  @ 0x1F25;
char RC6PPS  @ 0x1F26;
char RC7PPS  @ 0x1F27;

char ANSELA  @ 0x1F38;
char WPUA    @ 0x1F39;
char ODCONA  @ 0x1F3A;
char SLRCONA @ 0x1F3B;
char INLVLA  @ 0x1F3C;
char IOCAP   @ 0x1F3D;
char IOCAN   @ 0x1F3E;
char IOCAF   @ 0x1F3F;
char CCDNA   @ 0x1F40;
char CCDPA   @ 0x1F41;

char ANSELB  @ 0x1F43;
char WPUB    @ 0x1F44;
char ODCONB  @ 0x1F45;
char SLRCONB @ 0x1F46;
char INLVLB  @ 0x1F47;
char IOCBP   @ 0x1F48;
char IOCBN   @ 0x1F49;
char IOCBF   @ 0x1F4A;
char CCDNB   @ 0x1F4B;
char CCDPB   @ 0x1F4C;

char ANSELC  @ 0x1F4E;
char WPUC    @ 0x1F4F;
char ODCONC  @ 0x1F50;
char SLRCONC @ 0x1F51;
char INLVLC  @ 0x1F52;
char IOCCP   @ 0x1F53;
char IOCCN   @ 0x1F54;
char IOCCF   @ 0x1F55;
char CCDNC   @ 0x1F56;
char CCDPC   @ 0x1F57;

char WPUE    @ 0x1F65;

char INLVLE  @ 0x1F68;
char IOCEP   @ 0x1F69;
char IOCEN   @ 0x1F6A;
char IOCEF   @ 0x1F6B;

char STATUS_SHAD @ 0x1FE4;
char WREG_SHAD @ 0x1FE5;
char BSR_SHAD @ 0x1FE6;
char PCLATH_SHAD @ 0x1FE7;
char FSR0L_SHAD @ 0x1FE8;
char FSR0H_SHAD @ 0x1FE9;
char FSR1L_SHAD @ 0x1FEA;
char FSR1H_SHAD @ 0x1FEB;

char STKPTR  @ 0x1FED;
char TOSL    @ 0x1FEE;
char TOSH    @ 0x1FEF;


bit  INTEDG  @ INTCON.0;
bit  PEIE    @ INTCON.6;
bit  GIE     @ INTCON.7;

bit  T016BIT @ T0CON0.4;
bit  T0OUT   @ T0CON0.5;
bit  T0EN    @ T0CON0.7;

bit  T0ASYNC @ T0CON1.4;

bit  ADGO    @ ADCON0.0;
bit  ADFRM0  @ ADCON0.2;
bit  ADCS    @ ADCON0.4;
bit  ADCONT  @ ADCON0.6;
bit  ADON    @ ADCON0.7;

bit  ADDSEN  @ ADCON1.0;
bit  ADGPOL  @ ADCON1.5;
bit  ADIPEN  @ ADCON1.6;
bit  ADPPOL  @ ADCON1.7;

bit  ADMD0   @ ADCON2.0;
bit  ADMD1   @ ADCON2.1;
bit  ADMD2   @ ADCON2.2;
bit  ADACLR  @ ADCON2.3;
bit  ADCRS0  @ ADCON2.4;
bit  ADCRS1  @ ADCON2.5;
bit  ADCRS2  @ ADCON2.6;
bit  ADPSIS  @ ADCON2.7;

bit  ADTMD0  @ ADCON3.0;
bit  ADTMD1  @ ADCON3.1;
bit  ADTMD2  @ ADCON3.2;
bit  ADSOI   @ ADCON3.3;
bit  ADCALC0 @ ADCON3.4;
bit  ADCALC1 @ ADCON3.5;
bit  ADCALC2 @ ADCON3.6;

bit  ADSTAT0 @ ADSTAT.0;
bit  ADSTAT1 @ ADSTAT.1;
bit  ADSTAT2 @ ADSTAT.2;
bit  ADMATH  @ ADSTAT.4;
bit  ADLTHR  @ ADSTAT.5;
bit  ADUTHR  @ ADSTAT.6;
bit  ADAOV   @ ADSTAT.7;

bit  ADPREF0 @ ADREF.0;
bit  ADPREF1 @ ADREF.1;
bit  ADNREF  @ ADREF.4;

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

bit  INTF    @ PIR0.0;
bit  IOCIF   @ PIR0.4;
bit  TMR0IF  @ PIR0.5;

bit  ADIF    @ PIR1.0;
bit  ADTIF   @ PIR1.1;
bit  CSWIF   @ PIR1.6;
bit  OSFIF   @ PIR1.7;

bit  C1IF    @ PIR2.0;
bit  C2IF    @ PIR2.1;
bit  ZCDIF   @ PIR2.6;

bit  SSP1IF  @ PIR3.0;
bit  BCL1IF  @ PIR3.1;
bit  SSP2IF  @ PIR3.2;
bit  BCL2IF  @ PIR3.3;
bit  TXIF    @ PIR3.4;
bit  RCIF    @ PIR3.5;

bit  TMR1IF  @ PIR4.0;
bit  TMR2IF  @ PIR4.1;
bit  TMR3IF  @ PIR4.2;
bit  TMR4IF  @ PIR4.3;
bit  TMR5IF  @ PIR4.4;
bit  TMR6IF  @ PIR4.5;

bit  TMR1GIF @ PIR5.0;
bit  TMR3GIF @ PIR5.1;
bit  TMR5GIF @ PIR5.2;
bit  CLC1IF  @ PIR5.4;
bit  CLC2IF  @ PIR5.5;
bit  CLC3IF  @ PIR5.6;
bit  CLC4IF  @ PIR5.7;

bit  CCP1IF  @ PIR6.0;
bit  CCP2IF  @ PIR6.1;
bit  CCP3IF  @ PIR6.2;
bit  CCP4IF  @ PIR6.3;
bit  CCP5IF  @ PIR6.4;

bit  CWG1IF  @ PIR7.0;
bit  CWG2IF  @ PIR7.1;
bit  CWG3IF  @ PIR7.2;
bit  NCO1IF  @ PIR7.4;
bit  NVMIF   @ PIR7.5;
bit  CRCIF   @ PIR7.6;
bit  SCANIF  @ PIR7.7;

bit  SMT1IF  @ PIR8.0;
bit  SMT1PRAIF @ PIR8.1;
bit  SMT1PWAIF @ PIR8.2;
bit  SMT2IF  @ PIR8.3;
bit  SMT2PRAIF @ PIR8.4;
bit  SMT2PWAIF @ PIR8.5;

bit  INTE    @ PIE0.0;
bit  IOCIE   @ PIE0.4;
bit  TMR0IE  @ PIE0.5;

bit  ADIE    @ PIE1.0;
bit  ADTIE   @ PIE1.1;
bit  CSWIE   @ PIE1.6;
bit  OSFIE   @ PIE1.7;

bit  C1IE    @ PIE2.0;
bit  C2IE    @ PIE2.1;
bit  ZCDIE   @ PIE2.6;

bit  SSP1IE  @ PIE3.0;
bit  BCL1IE  @ PIE3.1;
bit  SSP2IE  @ PIE3.2;
bit  BCL2IE  @ PIE3.3;
bit  TXIE    @ PIE3.4;
bit  RCIE    @ PIE3.5;

bit  TMR1IE  @ PIE4.0;
bit  TMR2IE  @ PIE4.1;
bit  TMR3IE  @ PIE4.2;
bit  TMR4IE  @ PIE4.3;
bit  TMR5IE  @ PIE4.4;
bit  TMR6IE  @ PIE4.5;

bit  TMR1GIE @ PIE5.0;
bit  TMR3GIE @ PIE5.1;
bit  TMR5GIE @ PIE5.2;
bit  CLC1IE  @ PIE5.4;
bit  CLC2IE  @ PIE5.5;
bit  CLC3IE  @ PIE5.6;
bit  CLC4IE  @ PIE5.7;

bit  CCP1IE  @ PIE6.0;
bit  CCP2IE  @ PIE6.1;
bit  CCP3IE  @ PIE6.2;
bit  CCP4IE  @ PIE6.3;
bit  CCP5IE  @ PIE6.4;

bit  CWG1IE  @ PIE7.0;
bit  CWG2IE  @ PIE7.1;
bit  CWG3IE  @ PIE7.2;
bit  NCO1IE  @ PIE7.4;
bit  NVMIE   @ PIE7.5;
bit  CRCIE   @ PIE7.6;
bit  SCANIE  @ PIE7.7;

bit  SMT1IE  @ PIE8.0;
bit  SMT1PRAIE @ PIE8.1;
bit  SMT1PWAIE @ PIE8.2;
bit  SMT2IE  @ PIE8.3;
bit  SMT2PRAIE @ PIE8.4;
bit  SMT2PWAIE @ PIE8.5;

bit  IOCMD   @ PMD0.0;
bit  CLKRMD  @ PMD0.1;
bit  NVMMD   @ PMD0.2;
bit  SCANMD  @ PMD0.3;
bit  CRCMD   @ PMD0.4;
bit  FVRMD   @ PMD0.6;
bit  SYSCMD  @ PMD0.7;

bit  TMR0MD  @ PMD1.0;
bit  TMR1MD  @ PMD1.1;
bit  TMR2MD  @ PMD1.2;
bit  TMR3MD  @ PMD1.3;
bit  TMR4MD  @ PMD1.4;
bit  TMR5MD  @ PMD1.5;
bit  TMR6MD  @ PMD1.6;
bit  NCOMD   @ PMD1.7;

bit  ZCDMD   @ PMD2.0;
bit  CMP1MD  @ PMD2.1;
bit  CMP2MD  @ PMD2.2;
bit  ADCMD   @ PMD2.5;
bit  DACMD   @ PMD2.6;

bit  CCP1MD  @ PMD3.0;
bit  CCP2MD  @ PMD3.1;
bit  CCP3MD  @ PMD3.2;
bit  CCP4MD  @ PMD3.3;
bit  CCP5MD  @ PMD3.4;
bit  PWM6MD  @ PMD3.5;
bit  PWM7MD  @ PMD3.6;

bit  CWG1MD  @ PMD4.0;
bit  CWG2MD  @ PMD4.1;
bit  CWG3MD  @ PMD4.2;
bit  MSSP1MD @ PMD4.4;
bit  MSSP2MD @ PMD4.5;
bit  UART1MD @ PMD4.6;

bit  DSMMD   @ PMD5.0;
bit  CLC1MD  @ PMD5.1;
bit  CLC2MD  @ PMD5.2;
bit  CLC3MD  @ PMD5.3;
bit  CLC4MD  @ PMD5.4;
bit  SMT1MD  @ PMD5.6;
bit  SMT2MD  @ PMD5.7;

bit  BORRDY  @ BORCON.0;
bit  SBOREN  @ BORCON.7;

#ifdef _16F18857
bit  VREGPM @ VREGCON.1;
#endif

bit  BOR_    @ PCON0.0;
bit  POR_    @ PCON0.1;
bit  RI_     @ PCON0.2;
bit  RMCLR_  @ PCON0.3;
bit  RWDT_   @ PCON0.4;
bit  WDTWV_  @ PCON0.5;
bit  STKUNF  @ PCON0.6;
bit  STKOVF  @ PCON0.7;

bit  CCDS0   @ CCDCON.0;
bit  CCDS1   @ CCDCON.1;
bit  CCDEN   @ CCDCON.7;

bit  RD      @ NVMCON1.0;
bit  WR      @ NVMCON1.1;
bit  WREN    @ NVMCON1.2;
bit  WRERR   @ NVMCON1.3;
bit  FREE    @ NVMCON1.4;
bit  LWLO    @ NVMCON1.5;
bit  NVMREGS @ NVMCON1.6;

bit  PLLR    @ OSCSTAT.0;
bit  ADOR    @ OSCSTAT.2;
bit  SOR     @ OSCSTAT.3;
bit  LFOR    @ OSCSTAT.4;
bit  MFOR    @ OSCSTAT.5;
bit  HFOR    @ OSCSTAT.6;
bit  EXTOR   @ OSCSTAT.7;

bit  ADOEN   @ OSCEN.2;
bit  LFOEN   @ OSCEN.4;
bit  MFOEN   @ OSCEN.5;
bit  HFOEN   @ OSCEN.6;
bit  EXTOEN  @ OSCEN.7;

bit  ADFVR0  @ FVRCON.0;
bit  ADFVR1  @ FVRCON.1;
bit  CDAFVR0 @ FVRCON.2;
bit  CDAFVR1 @ FVRCON.3;
bit  TSRNG   @ FVRCON.4;
bit  TSEN    @ FVRCON.5;
bit  FVRRDY  @ FVRCON.6;
bit  FVREN   @ FVRCON.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;

bit  MLC1OUT @ CLCDATA.0;
bit  MLC2OUT @ CLCDATA.1;
bit  MLC3OUT @ CLCDATA.2;
bit  MLC4OUT @ CLCDATA.3;

bit  PPSLOCKED @ PPSLOCK.0;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FEXTOSC = LP // LP (crystal oscillator) optimized for 32.768kHz; PFM set to low power
#pragma config /1 0x3FF9 FEXTOSC = XT // XT (crystal oscillator) above 500kHz, below 4MHz; PFM set to medium power
#pragma config /1 0x3FFA FEXTOSC = HS // HS (crystal oscillator) above 4MHz; PFM set to high power
#pragma config /1 0x3FFC FEXTOSC = OFF // Oscillator not enabled
#pragma config /1 0x3FFD FEXTOSC = ECL // EC below 500kHz; PFM set to low power
#pragma config /1 0x3FFE FEXTOSC = ECM // EC for 500kHz to 8MHz; PFM set to medium power
#pragma config /1 0x3FFF FEXTOSC = ECH // EC above 8MHz; PFM set to high power
#pragma config /1 0x3F8F RSTOSC = HFINT32 // HFINTOSC with OSCFRQ= 32 MHz and CDIV = 1:1
#pragma config /1 0x3F9F RSTOSC = HFINTPLL // HFINTOSC with 2x PLL, with OSCFRQ = 16 MHz and CDIV = 1:1 (FOSC = 32 MHz)
#pragma config /1 0x3FAF RSTOSC = EXT4X // EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3FCF RSTOSC = SOSC // SOSC
#pragma config /1 0x3FDF RSTOSC = LFINT // LFINTOSC
#pragma config /1 0x3FEF RSTOSC = HFINT1 // HFINTOSC (1MHz)
#pragma config /1 0x3FFF RSTOSC = EXT1X // EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3EFF CLKOUTEN = ON // CLKOUT function is enabled; FOSC/4 clock appears at OSC2
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled; i/o or oscillator function on OSC2
#pragma config /1 0x37FF CSWEN = OFF // The NOSC and NDIV bits cannot be changed by user software
#pragma config /1 0x3FFF CSWEN = ON // Writing to NOSC and NDIV is allowed
#pragma config /1 0x1FFF FCMEN = OFF // FSCM timer disabled
#pragma config /1 0x3FFF FCMEN = ON // FSCM timer enabled
#pragma config /2 0x3FFE MCLRE = OFF // MCLR pin function is port defined function
#pragma config /2 0x3FFF MCLRE = ON // MCLR pin is Master Clear function
#pragma config /2 0x3FFD PWRTE = ON // PWRT enabled
#pragma config /2 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /2 0x3FDF LPBOREN = ON // ULPBOR enabled
#pragma config /2 0x3FFF LPBOREN = OFF // ULPBOR disabled
#pragma config /2 0x3F3F BOREN = OFF // Brown-out reset disabled
#pragma config /2 0x3F7F BOREN = SBOREN // Brown-out reset enabled according to SBOREN bit
#pragma config /2 0x3FBF BOREN = NSLEEP // Brown-out Reset enabled while running, disabled in sleep; SBOREN is ignored
#pragma config /2 0x3FFF BOREN = ON // Brown-out Reset Enabled, SBOREN bit is ignored
#pragma config /2 0x3DFF BORV = HI // Brown-out Reset Voltage (VBOR) is set to 2.7V
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices
#pragma config /2 0x3BFF ZCD = ON // Zero-cross detect circuit is always enabled
#pragma config /2 0x3FFF ZCD = OFF // Zero-cross detect circuit is disabled at POR.
#pragma config /2 0x3BFF ZCDDIS = ON // Zero-cross detect circuit is always enabled
#pragma config /2 0x3FFF ZCDDIS = OFF // Zero-cross detect circuit is disabled at POR.
#pragma config /2 0x37FF PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly by software
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit can be cleared and set only once in software
#pragma config /2 0x2FFF STVREN = OFF // Stack Overflow or Underflow will not cause a reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a reset
#pragma config /2 0x1FFF DEBUG = ON // background debugger enabled
#pragma config /2 0x3FFF DEBUG = OFF // Background Debugger disabled
#pragma config /3 0x3FE0 WDTCPS = WDTCPS_0 // Divider ratio 1:32
#pragma config /3 0x3FE1 WDTCPS = WDTCPS_1 // Divider ratio 1:64
#pragma config /3 0x3FE2 WDTCPS = WDTCPS_2 // Divider ratio 1:128
#pragma config /3 0x3FE3 WDTCPS = WDTCPS_3 // Divider ratio 1:256
#pragma config /3 0x3FE4 WDTCPS = WDTCPS_4 // Divider ratio 1:512
#pragma config /3 0x3FE5 WDTCPS = WDTCPS_5 // Divider ratio 1:1024
#pragma config /3 0x3FE6 WDTCPS = WDTCPS_6 // Divider ratio 1:2048
#pragma config /3 0x3FE7 WDTCPS = WDTCPS_7 // Divider ratio 1:4096
#pragma config /3 0x3FE8 WDTCPS = WDTCPS_8 // Divider ratio 1:8192
#pragma config /3 0x3FE9 WDTCPS = WDTCPS_9 // Divider ratio 1:16384
#pragma config /3 0x3FEA WDTCPS = WDTCPS_10 // Divider ratio 1:32768
#pragma config /3 0x3FEB WDTCPS = WDTCPS_11 // Divider ratio 1:65536
#pragma config /3 0x3FEC WDTCPS = WDTCPS_12 // Divider ratio 1:131072
#pragma config /3 0x3FED WDTCPS = WDTCPS_13 // Divider ratio 1:262144
#pragma config /3 0x3FEE WDTCPS = WDTCPS_14 // Divider ratio 1:524299
#pragma config /3 0x3FEF WDTCPS = WDTCPS_15 // Divider ratio 1:1048576
#pragma config /3 0x3FF0 WDTCPS = WDTCPS_16 // Divider ratio 1:2097152
#pragma config /3 0x3FF1 WDTCPS = WDTCPS_17 // Divider ratio 1:4194304
#pragma config /3 0x3FF2 WDTCPS = WDTCPS_18 // Divider ratio 1:8388608
#pragma config /3 0x3FF3 WDTCPS = WDTCPS_19 // Divider ratio 1:32
#pragma config /3 0x3FF4 WDTCPS = WDTCPS_20 // Divider ratio 1:32
#pragma config /3 0x3FF5 WDTCPS = WDTCPS_21 // Divider ratio 1:32
#pragma config /3 0x3FF6 WDTCPS = WDTCPS_22 // Divider ratio 1:32
#pragma config /3 0x3FF7 WDTCPS = WDTCPS_23 // Divider ratio 1:32
#pragma config /3 0x3FF8 WDTCPS = WDTCPS_24 // Divider ratio 1:32
#pragma config /3 0x3FF9 WDTCPS = WDTCPS_25 // Divider ratio 1:32
#pragma config /3 0x3FFA WDTCPS = WDTCPS_26 // Divider ratio 1:32
#pragma config /3 0x3FFB WDTCPS = WDTCPS_27 // Divider ratio 1:32
#pragma config /3 0x3FFC WDTCPS = WDTCPS_28 // Divider ratio 1:32
#pragma config /3 0x3FFD WDTCPS = WDTCPS_29 // Divider ratio 1:32
#pragma config /3 0x3FFE WDTCPS = WDTCPS_30 // Divider ratio 1:32
#pragma config /3 0x3FFF WDTCPS = WDTCPS_31 // Divider ratio 1:65536; software control of WDTPS
#pragma config /3 0x3F9F WDTE = OFF // WDT Disabled, SWDTEN is ignored
#pragma config /3 0x3FBF WDTE = SWDTEN // WDT enabled/disabled by SWDTEN bit in WDTCON0
#pragma config /3 0x3FDF WDTE = NSLEEP // WDT enabled while sleep=0, suspended when sleep=1; SWDTEN ignored
#pragma config /3 0x3FFF WDTE = ON // WDT enabled regardless of sleep; SWDTEN ignored
#pragma config /3 0x38FF WDTCWS = WDTCWS_0 // window delay = 87.5 percent of time; no software control; keyed access required
#pragma config /3 0x39FF WDTCWS = WDTCWS_1 // window delay = 75 percent of time; no software control; keyed access required
#pragma config /3 0x3AFF WDTCWS = WDTCWS_2 // window delay = 62.5 percent of time; no software control; keyed access required
#pragma config /3 0x3BFF WDTCWS = WDTCWS_3 // window delay = 50 percent of time; no software control; keyed access required
#pragma config /3 0x3CFF WDTCWS = WDTCWS_4 // window delay = 37.5 percent of time; no software control; keyed access required
#pragma config /3 0x3DFF WDTCWS = WDTCWS_5 // window delay = 25 percent of time; no software control; keyed access required
#pragma config /3 0x3EFF WDTCWS = WDTCWS_6 // window always open (100%); no software control; keyed access required
#pragma config /3 0x3FFF WDTCWS = WDTCWS_7 // window always open (100%); software control; keyed access not required
#pragma config /3 0x07FF WDTCCS = LFINTOSC // WDT reference clock is the 31.0kHz LFINTOSC output
#pragma config /3 0x0FFF WDTCCS = HFINTOSC // WDT reference clock is the 31.25 kHz HFINTOSC
#pragma config /3 0x3FFF WDTCCS = SC // Software Control
#pragma config /4 0x3FFC WRT = ON // 0x0000 to 0x7FFF write protected
#pragma config /4 0x3FFD WRT = WRT_lower // 0x0000 to x3FFF write protected
#pragma config /4 0x3FFE WRT = WRT_upper // 0x0000 to 0x01FF write protected
#pragma config /4 0x3FFF WRT = OFF // Write protection off
#pragma config /4 0x2FFF SCANE = not_available // Scanner module is not available for use
#pragma config /4 0x3FFF SCANE = available // Scanner module is available for use
#pragma config /4 0x1FFF LVP = OFF // High Voltage on MCLR/Vpp must be used for programming
#pragma config /4 0x3FFF LVP = ON // Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.
#pragma config /5 0x3FFE CP = ON // Program Memory code protection enabled
#pragma config /5 0x3FFF CP = OFF // Program Memory code protection disabled
#pragma config /5 0x3FFD CPD = ON // Data EEPROM code protection enabled
#pragma config /5 0x3FFF CPD = OFF // Data EEPROM code protection disabled
#endif
