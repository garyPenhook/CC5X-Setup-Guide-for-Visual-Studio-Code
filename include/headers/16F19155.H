// HEADER FILE
#pragma chip PIC16F19155, core 14 enh2, code 8192, ram 32 : 0x64F // 1024 bytes

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
char PORTB   @ 0x0D;
char PORTC   @ 0x0E;

char PORTE   @ 0x10;

char TRISA   @ 0x12;
char TRISB   @ 0x13;
char TRISC   @ 0x14;

char LATA    @ 0x18;
char LATB    @ 0x19;
char LATC    @ 0x1A;

char ADCPCON0 @ 0x1F;

char ADLTHL  @ 0x8C;
char ADLTHH  @ 0x8D;
char ADUTHL  @ 0x8E;
char ADUTHH  @ 0x8F;
char ADERRL  @ 0x90;
char ADERRH  @ 0x91;
char ADSTPTL @ 0x92;
char ADSTPTH @ 0x93;
char ADFLTRL @ 0x94;
char ADFLTRH @ 0x95;
char ADACCL  @ 0x96;
char ADACCH  @ 0x97;
char ADACCU  @ 0x98;
char ADCNT   @ 0x99;
char ADRPT   @ 0x9A;
char ADPREVL @ 0x9B;
char ADPREVH @ 0x9C;
char ADRESL  @ 0x9D;
char ADRESH  @ 0x9E;
char ADPCH   @ 0x9F;

char ADACQL  @ 0x10C;
char ADACQH  @ 0x10D;
char ADCAP   @ 0x10E;
char ADPREL  @ 0x10F;
char ADPREH  @ 0x110;
char ADCON0  @ 0x111;
char ADCON1  @ 0x112;
char ADCON2  @ 0x113;
char ADCON3  @ 0x114;
char ADSTAT  @ 0x115;
char ADREF   @ 0x116;
char ADACT   @ 0x117;
char ADCLK   @ 0x118;
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

char TMR1L   @ 0x20C;
char TMR1H   @ 0x20D;
char T1CON   @ 0x20E;
char T1GCON  @ 0x20F;
char T1GATE  @ 0x210;
char T1CLK   @ 0x211;

char CCPTMRS0 @ 0x21E;

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

char CCPR1L  @ 0x30C;
char CCPR1H  @ 0x30D;
char CCP1CON @ 0x30E;
char CCP1CAP @ 0x30F;
char CCPR2L  @ 0x310;
char CCPR2H  @ 0x311;
char CCP2CON @ 0x312;
char CCP2CAP @ 0x313;
char PWM3DCL @ 0x314;
char PWM3DCH @ 0x315;
char PWM3CON @ 0x316;

char PWM4DCL @ 0x318;
char PWM4DCH @ 0x319;
char PWM4CON @ 0x31A;

char HIDRVB  @ 0x40D;

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

char TMR0L   @ 0x59C;
char TMR0H   @ 0x59D;
char T0CON0  @ 0x59E;
char T0CON1  @ 0x59F;

char CWG1CLKCON @ 0x60C;
char CWG1ISM @ 0x60D;
char CWG1DBR @ 0x60E;
char CWG1DBF @ 0x60F;
char CWG1CON0 @ 0x610;
char CWG1CON1 @ 0x611;
char CWG1AS0 @ 0x612;
char CWG1AS1 @ 0x613;
char CWG1STR @ 0x614;

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
#ifdef _16F19155
char VREGCON @ 0x812;
#endif
char PCON0   @ 0x813;
char PCON1   @ 0x814;

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
char ACTCON  @ 0x894;

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

char RC2REG  @ 0xA19;
char TX2REG  @ 0xA1A;
char SP2BRGL @ 0xA1B;
char SP2BRGH @ 0xA1C;
char RC2STA  @ 0xA1D;
char TX2STA  @ 0xA1E;
char BAUD2CON @ 0xA1F;

char RTCCON  @ 0xC0C;
char RTCCAL  @ 0xC0D;
char ALRMCON @ 0xC0E;
char ALRMRPT @ 0xC0F;
char YEAR    @ 0xC10;
char MONTH   @ 0xC11;
char WEEKDAY @ 0xC12;
char DAY     @ 0xC13;
char HOURS   @ 0xC14;
char MINUTES @ 0xC15;
char SECONDS @ 0xC16;
char ALRMMTH @ 0xC17;
char ALRMWD  @ 0xC18;
char ALRMDAY @ 0xC19;
char ALRMHR  @ 0xC1A;
char ALRMMIN @ 0xC1B;
char ALRMSEC @ 0xC1C;

char VB0GPR  @ 0xE8C;
char VB1GPR  @ 0xE8D;
char VB2GPR  @ 0xE8E;
char VB3GPR  @ 0xE8F;

char LCDCON  @ 0x1D0C;
char LCDPS   @ 0x1D0D;
char LCDSE0  @ 0x1D0E;
char LCDSE1  @ 0x1D0F;
char LCDSE2  @ 0x1D10;
char LCDSE3  @ 0x1D11;
char LCDSE4  @ 0x1D12;
char LCDSE5  @ 0x1D13;
char LCDVCON1 @ 0x1D14;
char LCDVCON2 @ 0x1D15;
char LCDREF  @ 0x1D16;
char LCDRL   @ 0x1D17;
char LCDDATA0 @ 0x1D18;
char LCDDATA1 @ 0x1D19;
char LCDDATA2 @ 0x1D1A;

char LCDDATA6 @ 0x1D1E;
char LCDDATA7 @ 0x1D1F;
char LCDDATA8 @ 0x1D20;

char LCDDATA12 @ 0x1D24;
char LCDDATA13 @ 0x1D25;
char LCDDATA14 @ 0x1D26;

char LCDDATA18 @ 0x1D2A;
char LCDDATA19 @ 0x1D2B;
char LCDDATA20 @ 0x1D2C;

char LCDDATA24 @ 0x1D30;
char LCDDATA25 @ 0x1D31;
char LCDDATA26 @ 0x1D32;

char LCDDATA30 @ 0x1D36;
char LCDDATA31 @ 0x1D37;
char LCDDATA32 @ 0x1D38;

char LCDDATA36 @ 0x1D3C;
char LCDDATA37 @ 0x1D3D;
char LCDDATA38 @ 0x1D3E;

char LCDDATA42 @ 0x1D42;
char LCDDATA43 @ 0x1D43;
char LCDDATA44 @ 0x1D44;

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

char T2INPPS @ 0x1E9C;
char T4INPPS @ 0x1E9D;

char CCP1PPS @ 0x1EA1;
char CCP2PPS @ 0x1EA2;

char SMT1WINPPS @ 0x1EA9;
char SMT1SIGPPS @ 0x1EAA;

char CWG1PPS @ 0x1EB1;

char CLCIN0PPS @ 0x1EBB;
char CLCIN1PPS @ 0x1EBC;
char CLCIN2PPS @ 0x1EBD;
char CLCIN3PPS @ 0x1EBE;

char ADCACTPPS @ 0x1EC3;

char SSP1CLKPPS @ 0x1EC5;
char SSP1DATPPS @ 0x1EC6;
char SSP1SSPPS @ 0x1EC7;

char RX1PPS  @ 0x1ECB;
char TX1PPS  @ 0x1ECC;
char RX2PPS  @ 0x1ECD;
char TX2PPS  @ 0x1ECE;

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

char ANSELB  @ 0x1F43;
char WPUB    @ 0x1F44;
char ODCONB  @ 0x1F45;
char SLRCONB @ 0x1F46;
char INLVLB  @ 0x1F47;
char IOCBP   @ 0x1F48;
char IOCBN   @ 0x1F49;
char IOCBF   @ 0x1F4A;

char ANSELC  @ 0x1F4E;
char WPUC    @ 0x1F4F;
char ODCONC  @ 0x1F50;
char SLRCONC @ 0x1F51;
char INLVLC  @ 0x1F52;
char IOCCP   @ 0x1F53;
char IOCCN   @ 0x1F54;
char IOCCF   @ 0x1F55;

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

bit  ADCPRDY @ ADCPCON0.0;
bit  ADCPON  @ ADCPCON0.7;

bit  ADGO    @ ADCON0.0;
bit  ADFM    @ ADCON0.2;
bit  ADCS    @ ADCON0.4;
bit  ADCONT  @ ADCON0.6;
bit  ADON    @ ADCON0.7;

bit  DSEN    @ ADCON1.0;
bit  ADGPOL  @ ADCON1.5;
bit  IPEN    @ ADCON1.6;
bit  PPOL    @ ADCON1.7;

bit  ACLR    @ ADCON2.3;
bit  PSIS    @ ADCON2.7;

bit  SOI     @ ADCON3.3;

bit  MATH    @ ADSTAT.4;
bit  LTHR    @ ADSTAT.5;
bit  UTHR    @ ADSTAT.6;
bit  OV      @ ADSTAT.7;

bit  PREF0   @ ADREF.0;
bit  PREF1   @ ADREF.1;

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

bit  TMR1ON  @ T1CON.0;
bit  T1RD16  @ T1CON.1;
bit  T1CKPS0 @ T1CON.4;
bit  T1CKPS1 @ T1CON.5;

bit  TMR2ON  @ T2CON.7;

bit  TMR4ON  @ T4CON.7;

bit  T016BIT @ T0CON0.4;
bit  T0OUT   @ T0CON0.5;
bit  T0EN    @ T0CON0.7;

bit  T0ASYNC @ T0CON1.4;

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
bit  TX1IF   @ PIR3.4;
bit  RC1IF   @ PIR3.5;
bit  TX2IF   @ PIR3.6;
bit  RC2IF   @ PIR3.7;

bit  TMR1IF  @ PIR4.0;
bit  TMR2IF  @ PIR4.1;
bit  TMR4IF  @ PIR4.3;

bit  TMR1GIF @ PIR5.0;
bit  CLC1IF  @ PIR5.4;
bit  CLC2IF  @ PIR5.5;
bit  CLC3IF  @ PIR5.6;
bit  CLC4IF  @ PIR5.7;

bit  CCP1IF  @ PIR6.0;
bit  CCP2IF  @ PIR6.1;
bit  CRIF    @ PIR6.7;

bit  CWG1IF  @ PIR7.0;
bit  NVMIF   @ PIR7.5;

bit  SMT1IF  @ PIR8.0;
bit  SMT1PRAIF @ PIR8.1;
bit  SMT1PWAIF @ PIR8.2;
bit  RTCCIF  @ PIR8.6;
bit  LCDIF   @ PIR8.7;

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
bit  TX1IE   @ PIE3.4;
bit  RC1IE   @ PIE3.5;
bit  TX2IE   @ PIE3.6;
bit  RC2IE   @ PIE3.7;

bit  TMR1IE  @ PIE4.0;
bit  TMR2IE  @ PIE4.1;
bit  TMR4IE  @ PIE4.3;

bit  TMR1GIE @ PIE5.0;
bit  CLC1IE  @ PIE5.4;
bit  CLC2IE  @ PIE5.5;
bit  CLC3IE  @ PIE5.6;
bit  CLC4IE  @ PIE5.7;

bit  CCP1IE  @ PIE6.0;
bit  CCP2IE  @ PIE6.1;
bit  CRIE    @ PIE6.7;

bit  CWG1IE  @ PIE7.0;
bit  NVMIE   @ PIE7.5;

bit  SMT1IE  @ PIE8.0;
bit  SMT1PRAIE @ PIE8.1;
bit  SMT1PWAIE @ PIE8.2;
bit  RTCCIE  @ PIE8.6;
bit  LCDIE   @ PIE8.7;

bit  IOCMD   @ PMD0.0;
bit  NVMMD   @ PMD0.2;
bit  ACTMD   @ PMD0.5;
bit  FVRMD   @ PMD0.6;
bit  SYSCMD  @ PMD0.7;

bit  TMR0MD  @ PMD1.0;
bit  TMR1MD  @ PMD1.1;
bit  TMR2MD  @ PMD1.2;
bit  TMR4MD  @ PMD1.4;

bit  ZCDMD   @ PMD2.0;
bit  CMP1MD  @ PMD2.1;
bit  CMP2MD  @ PMD2.2;
bit  ADCMD   @ PMD2.5;
bit  DACMD   @ PMD2.6;
bit  RTCCMD  @ PMD2.7;

bit  CCP1MD  @ PMD3.0;
bit  CCP2MD  @ PMD3.1;
bit  CCP3MD  @ PMD3.2;
bit  CCP4MD  @ PMD3.3;

bit  CWG1MD  @ PMD4.0;
bit  MSSP1MD @ PMD4.4;
bit  UART1MD @ PMD4.6;
bit  UART2MD @ PMD4.7;

bit  CLC1MD  @ PMD5.1;
bit  CLC2MD  @ PMD5.2;
bit  CLC3MD  @ PMD5.3;
bit  CLC4MD  @ PMD5.4;
bit  LCDMD   @ PMD5.5;
bit  SMT1MD  @ PMD5.6;

bit  BORRDY  @ BORCON.0;
bit  SBOREN  @ BORCON.7;

#ifdef _16F19155
bit  VREGPM  @ VREGCON.1;
#endif

bit  BOR_    @ PCON0.0;
bit  POR_    @ PCON0.1;
bit  RI_     @ PCON0.2;
bit  RMCLR_  @ PCON0.3;
bit  RWDT_   @ PCON0.4;
bit  WDTWV_  @ PCON0.5;
bit  STKUNF  @ PCON0.6;
bit  STKOVF  @ PCON0.7;

bit  VBATBOR_ @ PCON1.0;
bit  MEMV_   @ PCON1.1;

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

bit  ACTORS  @ ACTCON.1;
bit  ACTLOCK @ ACTCON.3;
bit  ACTUD   @ ACTCON.6;
bit  ACTEN   @ ACTCON.7;

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

bit  RTCCLKSEL0 @ RTCCON.0;
bit  RTCCLKSEL1 @ RTCCON.1;
bit  HALFSEC @ RTCCON.3;
bit  RTCSYNC @ RTCCON.4;
bit  RTCWREN @ RTCCON.5;
bit  RTCEN   @ RTCCON.7;

bit  CHIME   @ ALRMCON.6;
bit  ALRMEN  @ ALRMCON.7;

bit  LMUX0   @ LCDCON.0;
bit  LMUX1   @ LCDCON.1;
bit  LMUX2   @ LCDCON.2;
bit  LMUX3   @ LCDCON.3;
bit  LCD_CS  @ LCDCON.4;
bit  WERR    @ LCDCON.5;
bit  SLPEN   @ LCDCON.6;
bit  LCDEN   @ LCDCON.7;

bit  LP0     @ LCDPS.0;
bit  LP1     @ LCDPS.1;
bit  LP2     @ LCDPS.2;
bit  LP3     @ LCDPS.3;
bit  WA      @ LCDPS.4;
bit  LCDA    @ LCDPS.5;
bit  WFT     @ LCDPS.7;

bit  SE00    @ LCDSE0.0;
bit  SE01    @ LCDSE0.1;
bit  SE02    @ LCDSE0.2;
bit  SE03    @ LCDSE0.3;
bit  SE04    @ LCDSE0.4;
bit  SE05    @ LCDSE0.5;
bit  SE06    @ LCDSE0.6;
bit  SE07    @ LCDSE0.7;

bit  SE08    @ LCDSE1.0;
bit  SE09    @ LCDSE1.1;
bit  SE10    @ LCDSE1.2;
bit  SE11    @ LCDSE1.3;
bit  SE12    @ LCDSE1.4;
bit  SE13    @ LCDSE1.5;
bit  SE14    @ LCDSE1.6;
bit  SE15    @ LCDSE1.7;

bit  SE16    @ LCDSE2.0;
bit  SE17    @ LCDSE2.1;
bit  SE18    @ LCDSE2.2;
bit  SE19    @ LCDSE2.3;
bit  SE20    @ LCDSE2.4;
bit  SE21    @ LCDSE2.5;
bit  SE22    @ LCDSE2.6;
bit  SE23    @ LCDSE2.7;

bit  SE24    @ LCDSE3.0;
bit  SE25    @ LCDSE3.1;
bit  SE26    @ LCDSE3.2;
bit  SE27    @ LCDSE3.3;
bit  SE28    @ LCDSE3.4;
bit  SE29    @ LCDSE3.5;
bit  SE30    @ LCDSE3.6;
bit  SE31    @ LCDSE3.7;

bit  SE32    @ LCDSE4.0;
bit  SE33    @ LCDSE4.1;
bit  SE34    @ LCDSE4.2;
bit  SE35    @ LCDSE4.3;
bit  SE36    @ LCDSE4.4;
bit  SE37    @ LCDSE4.5;
bit  SE38    @ LCDSE4.6;
bit  SE39    @ LCDSE4.7;

bit  SE40    @ LCDSE5.0;
bit  SE41    @ LCDSE5.1;
bit  SE42    @ LCDSE5.2;
bit  SE43    @ LCDSE5.3;
bit  SE44    @ LCDSE5.4;
bit  SE45    @ LCDSE5.5;
bit  SE46    @ LCDSE5.6;
bit  SE47    @ LCDSE5.7;

bit  BIAS0   @ LCDVCON1.0;
bit  BIAS1   @ LCDVCON1.1;
bit  BIAS2   @ LCDVCON1.2;
bit  EN5V    @ LCDVCON1.6;
bit  LPEN    @ LCDVCON1.7;

bit  CPWDT   @ LCDVCON2.7;

bit  PPSLOCKED @ PPSLOCK.0;

bit  C_SHAD  @ STATUS_SHAD.0;
bit  DC_SHAD @ STATUS_SHAD.1;
bit  Z_SHAD  @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FEXTOSC = OFF // Oscillator not enabled
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
#pragma config /1 0x3DFF VBATEN = ON // VBAT functionality is enabled
#pragma config /1 0x3FFF VBATEN = OFF // VBAT functionality is disabled
#pragma config /1 0x3BFF LCDPEN = OFF // LCD Charge Pump is disabled.
#pragma config /1 0x3FFF LCDPEN = ON // LCD Charge Pump is enabled
#pragma config /1 0x37FF CSWEN = OFF // The NOSC and NDIV bits cannot be changed by user software
#pragma config /1 0x3FFF CSWEN = ON // Writing to NOSC and NDIV is allowed
#pragma config /1 0x1FFF FCMEN = OFF // FSCM timer disabled
#pragma config /1 0x3FFF FCMEN = ON // FSCM timer enabled
#pragma config /2 0x3FFE MCLRE = OFF // MCLR pin function is port defined function
#pragma config /2 0x3FFF MCLRE = ON // MCLR pin is Master Clear function
#pragma config /2 0x3FF9 PWRTE = PWRT_1 // PWRT set at 1 ms
#pragma config /2 0x3FFB PWRTE = PWRT_16 // PWRT set at 16 ms
#pragma config /2 0x3FFD PWRTE = PWRT_64 // PWRT set at 64 ms
#pragma config /2 0x3FFF PWRTE = OFF // PWRT disable
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
#pragma config /2 0x37FF PPS1WAY = OFF // The PPSLOCK bit can be set and cleared repeatedly by software
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCK bit can be cleared and set only once in software
#pragma config /2 0x2FFF STVREN = OFF // Stack Overflow or Underflow will not cause a reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a reset
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
#pragma config /3 0x17FF WDTCCS = SOSC // WDT reference clock is the SOSC
#pragma config /3 0x3FFF WDTCCS = SC // Software Control
#pragma config /4 0x3FF8 BBSIZE = 65536 // Boot Block Size (Words) 65536
#pragma config /4 0x3FF9 BBSIZE = 32768 // Boot Block Size (Words) 32768
#pragma config /4 0x3FFA BBSIZE = 16384 // Boot Block Size (Words) 16384
#pragma config /4 0x3FFB BBSIZE = 8192 // Boot Block Size (Words) 8192
#pragma config /4 0x3FFC BBSIZE = 4096 // Boot Block Size (Words) 4069
#pragma config /4 0x3FFD BBSIZE = 2048 // Boot Block Size (Words) 2048
#pragma config /4 0x3FFE BBSIZE = 1024 // Boot Block Size (Words) 1024
#pragma config /4 0x3FFF BBSIZE = 512 // Boot Block Size (Words) 512
#pragma config /4 0x3FF7 BBEN = ON // Boot Block enabled
#pragma config /4 0x3FFF BBEN = OFF // Boot Block disabled
#pragma config /4 0x3FEF SAFEN = ON // SAF enabled
#pragma config /4 0x3FFF SAFEN = OFF // SAF disabled
#pragma config /4 0x3F7F WRTAPP = ON // Application Block write-protected
#pragma config /4 0x3FFF WRTAPP = OFF // Application Block NOT write-protected
#pragma config /4 0x3EFF WRTB = ON // Boot Block write-protected
#pragma config /4 0x3FFF WRTB = OFF // Boot Block NOT write-protected
#pragma config /4 0x3DFF WRTC = ON // Configuration Word write-protected
#pragma config /4 0x3FFF WRTC = OFF // Configuration Words NOT write-protected
#pragma config /4 0x3BFF WRTD = ON // Data EEPROM write-protected
#pragma config /4 0x3FFF WRTD = OFF // Data EEPROM NOT write-protected
#pragma config /4 0x37FF WRTSAF = ON // SAF write-protected
#pragma config /4 0x3FFF WRTSAF = OFF // SAF NOT write-protected
#pragma config /4 0x1FFF LVP = OFF // High Voltage on MCLR/Vpp must be used for programming
#pragma config /4 0x3FFF LVP = ON // Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.
#pragma config /5 0x3FFE CP = ON // UserNVM code protection enabled
#pragma config /5 0x3FFF CP = OFF // UserNVM code protection disabled
#endif
