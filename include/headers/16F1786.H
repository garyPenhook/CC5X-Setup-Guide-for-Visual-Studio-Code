// HEADER FILE
#pragma chip PIC16F1786, core 14 enh, code 8192, ram 32 : 0x64F // 1024 bytes
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
char PORTB   @ 0x0D;
char PORTC   @ 0x0E;

char PORTE   @ 0x10;
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

char TRISA   @ 0x8C;
char TRISB   @ 0x8D;
char TRISC   @ 0x8E;

char PIE1    @ 0x91;
char PIE2    @ 0x92;
char PIE3    @ 0x93;
char PIE4    @ 0x94;
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
char DACCON0 @ 0x118;
char DACCON1 @ 0x119;
char CM4CON0 @ 0x11A;
char CM4CON1 @ 0x11B;
char APFCON2 @ 0x11C;
char APFCON1 @ 0x11D;
char CM3CON0 @ 0x11E;
char CM3CON1 @ 0x11F;

char ANSELA  @ 0x18C;
char ANSELB  @ 0x18D;

char EEADRL  @ 0x191;
char EEADRH  @ 0x192;
char EEDATL  @ 0x193;
char EEDATH  @ 0x194;
char EECON1  @ 0x195;
char EECON2  @ 0x196;
#if _16F1786
char VREGCON @ 0x197;
#endif

char RCREG   @ 0x199;
char TXREG   @ 0x19A;
char SPBRGL  @ 0x19B;
char SPBRGH  @ 0x19C;
char RCSTA   @ 0x19D;
char TXSTA   @ 0x19E;
char BAUDCON @ 0x19F;

char WPUA    @ 0x20C;
char WPUB    @ 0x20D;
char WPUC    @ 0x20E;

char WPUE    @ 0x210;
char SSPBUF  @ 0x211;
char SSPADD  @ 0x212;
char SSPMSK  @ 0x213;
char SSPSTAT @ 0x214;
char SSPCON  @ 0x215;
char SSPCON2 @ 0x216;
char SSPCON3 @ 0x217;

char ODCONA  @ 0x28C;
char ODCONB  @ 0x28D;
char ODCONC  @ 0x28E;

char CCPR1L  @ 0x291;
char CCPR1H  @ 0x292;
char CCP1CON @ 0x293;

char CCPR2L  @ 0x298;
char CCPR2H  @ 0x299;
char CCP2CON @ 0x29A;

char SLRCONA @ 0x30C;
char SLRCONB @ 0x30D;
char SLRCONC @ 0x30E;

char CCPR3L  @ 0x311;
char CCPR3H  @ 0x312;
char CCP3CON @ 0x313;

char INLVLA  @ 0x38C;
char INLVLB  @ 0x38D;
char INLVLC  @ 0x38E;

char INLVLE  @ 0x390;
char IOCAP   @ 0x391;
char IOCAN   @ 0x392;
char IOCAF   @ 0x393;
char IOCBP   @ 0x394;
char IOCBN   @ 0x395;
char IOCBF   @ 0x396;
char IOCCP   @ 0x397;
char IOCCN   @ 0x398;
char IOCCF   @ 0x399;

char IOCEP   @ 0x39D;
char IOCEN   @ 0x39E;
char IOCEF   @ 0x39F;

char OPA1CON @ 0x511;

char OPA2CON @ 0x513;

char CLKRCON @ 0x51A;

char PSMC1CON @ 0x811;
char PSMC1MDL @ 0x812;
char PSMC1SYNC @ 0x813;
char PSMC1CLK @ 0x814;
char PSMC1OEN @ 0x815;
char PSMC1POL @ 0x816;
char PSMC1BLNK @ 0x817;
char PSMC1REBS @ 0x818;
char PSMC1FEBS @ 0x819;
char PSMC1PHS @ 0x81A;
char PSMC1DCS @ 0x81B;
char PSMC1PRS @ 0x81C;
char PSMC1ASDC @ 0x81D;
char PSMC1ASDL @ 0x81E;
char PSMC1ASDS @ 0x81F;
char PSMC1INT @ 0x820;
char PSMC1PHL @ 0x821;
char PSMC1PHH @ 0x822;
char PSMC1DCL @ 0x823;
char PSMC1DCH @ 0x824;
char PSMC1PRL @ 0x825;
char PSMC1PRH @ 0x826;
char PSMC1TMRL @ 0x827;
char PSMC1TMRH @ 0x828;
char PSMC1DBR @ 0x829;
char PSMC1DBF @ 0x82A;
char PSMC1BLKR @ 0x82B;
char PSMC1BLKF @ 0x82C;
char PSMC1FFA @ 0x82D;
char PSMC1STR0 @ 0x82E;
char PSMC1STR1 @ 0x82F;

char PSMC2CON @ 0x831;
char PSMC2MDL @ 0x832;
char PSMC2SYNC @ 0x833;
char PSMC2CLK @ 0x834;
char PSMC2OEN @ 0x835;
char PSMC2POL @ 0x836;
char PSMC2BLNK @ 0x837;
char PSMC2REBS @ 0x838;
char PSMC2FEBS @ 0x839;
char PSMC2PHS @ 0x83A;
char PSMC2DCS @ 0x83B;
char PSMC2PRS @ 0x83C;
char PSMC2ASDC @ 0x83D;
char PSMC2ASDL @ 0x83E;
char PSMC2ASDS @ 0x83F;
char PSMC2INT @ 0x840;
char PSMC2PHL @ 0x841;
char PSMC2PHH @ 0x842;
char PSMC2DCL @ 0x843;
char PSMC2DCH @ 0x844;
char PSMC2PRL @ 0x845;
char PSMC2PRH @ 0x846;
char PSMC2TMRL @ 0x847;
char PSMC2TMRH @ 0x848;
char PSMC2DBR @ 0x849;
char PSMC2DBF @ 0x84A;
char PSMC2BLKR @ 0x84B;
char PSMC2BLKF @ 0x84C;
char PSMC2FFA @ 0x84D;
char PSMC2STR0 @ 0x84E;
char PSMC2STR1 @ 0x84F;

char PSMC3CON @ 0x851;
char PSMC3MDL @ 0x852;
char PSMC3SYNC @ 0x853;
char PSMC3CLK @ 0x854;
char PSMC3OEN @ 0x855;
char PSMC3POL @ 0x856;
char PSMC3BLNK @ 0x857;
char PSMC3REBS @ 0x858;
char PSMC3FEBS @ 0x859;
char PSMC3PHS @ 0x85A;
char PSMC3DCS @ 0x85B;
char PSMC3PRS @ 0x85C;
char PSMC3ASDC @ 0x85D;
char PSMC3ASDL @ 0x85E;
char PSMC3ASDS @ 0x85F;
char PSMC3INT @ 0x860;
char PSMC3PHL @ 0x861;
char PSMC3PHH @ 0x862;
char PSMC3DCL @ 0x863;
char PSMC3DCH @ 0x864;
char PSMC3PRL @ 0x865;
char PSMC3PRH @ 0x866;
char PSMC3TMRL @ 0x867;
char PSMC3TMRH @ 0x868;
char PSMC3DBR @ 0x869;
char PSMC3DBF @ 0x86A;
char PSMC3BLKR @ 0x86B;
char PSMC3BLKF @ 0x86C;
char PSMC3FFA @ 0x86D;
char PSMC3STR0 @ 0x86E;
char PSMC3STR1 @ 0x86F;

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
bit  C3IF    @ PIR2.1;
bit  C4IF    @ PIR2.2;
bit  BCL1IF  @ PIR2.3;
bit  EEIF    @ PIR2.4;
bit  C1IF    @ PIR2.5;
bit  C2IF    @ PIR2.6;
bit  OSFIF   @ PIR2.7;

bit  CCP3IF  @ PIR3.4;

bit  PSMC1SIF @ PIR4.0;
bit  PSMC2SIF @ PIR4.1;
bit  PSMC3SIF @ PIR4.2;
bit  PSMC1TIF @ PIR4.4;
bit  PSMC2TIF @ PIR4.5;
bit  PSMC3TIF @ PIR4.6;

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
bit  CCP1IE  @ PIE1.2;
bit  SSP1IE  @ PIE1.3;
bit  TXIE    @ PIE1.4;
bit  RCIE    @ PIE1.5;
bit  ADIE    @ PIE1.6;
bit  TMR1GIE @ PIE1.7;

bit  CCP2IE  @ PIE2.0;
bit  C3IE    @ PIE2.1;
bit  C4IE    @ PIE2.2;
bit  BCL1IE  @ PIE2.3;
bit  EEIE    @ PIE2.4;
bit  C1IE    @ PIE2.5;
bit  C2IE    @ PIE2.6;
bit  OSFIE   @ PIE2.7;

bit  CCP3IE  @ PIE3.4;

bit  PSMC1SIE @ PIE4.0;
bit  PSMC2SIE @ PIE4.1;
bit  PSMC3SIE @ PIE4.2;
bit  PSMC1TIE @ PIE4.4;
bit  PSMC2TIE @ PIE4.5;
bit  PMSC3TIE @ PIE4.6;

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
bit  ADRMD   @ ADCON0.7;

bit  ADPREF0 @ ADCON1.0;
bit  ADPREF1 @ ADCON1.1;
bit  ADNREF  @ ADCON1.2;
bit  ADCS0   @ ADCON1.4;
bit  ADCS1   @ ADCON1.5;
bit  ADCS2   @ ADCON1.6;
bit  ADFM    @ ADCON1.7;

bit  CHSN0   @ ADCON2.0;
bit  CHSN1   @ ADCON2.1;
bit  CHSN2   @ ADCON2.2;
bit  CHSN3   @ ADCON2.3;
bit  TRIGSEL0 @ ADCON2.4;
bit  TRIGSEL1 @ ADCON2.5;
bit  TRIGSEL2 @ ADCON2.6;
bit  TRIGSEL3 @ ADCON2.7;

bit  C1SYNC  @ CM1CON0.0;
bit  C1HYS   @ CM1CON0.1;
bit  C1SP    @ CM1CON0.2;
bit  C1ZLF   @ CM1CON0.3;
bit  C1POL   @ CM1CON0.4;
bit  C1OE    @ CM1CON0.5;
bit  C1OUT   @ CM1CON0.6;
bit  C1ON    @ CM1CON0.7;

bit  C1NCH0  @ CM1CON1.0;
bit  C1NCH1  @ CM1CON1.1;
bit  C1NCH2  @ CM1CON1.2;
bit  C1PCH0  @ CM1CON1.3;
bit  C1PCH1  @ CM1CON1.4;
bit  C1PCH2  @ CM1CON1.5;
bit  C1INTN  @ CM1CON1.6;
bit  C1INTP  @ CM1CON1.7;

bit  C2SYNC  @ CM2CON0.0;
bit  C2HYS   @ CM2CON0.1;
bit  C2SP    @ CM2CON0.2;
bit  C2ZLF   @ CM2CON0.3;
bit  C2POL   @ CM2CON0.4;
bit  C2OE    @ CM2CON0.5;
bit  C2OUT   @ CM2CON0.6;
bit  C2ON    @ CM2CON0.7;

bit  C2NCH0  @ CM2CON1.0;
bit  C2NCH1  @ CM2CON1.1;
bit  C2NCH2  @ CM2CON1.2;
bit  C2PCH0  @ CM2CON1.3;
bit  C2PCH1  @ CM2CON1.4;
bit  C2PCH2  @ CM2CON1.5;
bit  C2INTN  @ CM2CON1.6;
bit  C2INTP  @ CM2CON1.7;

bit  MC1OUT  @ CMOUT.0;
bit  MC2OUT  @ CMOUT.1;
bit  MC3OUT  @ CMOUT.2;
bit  MC4OUT  @ CMOUT.3;

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

bit  DACNSS  @ DACCON0.0;
bit  DACPSS0 @ DACCON0.2;
bit  DACPSS1 @ DACCON0.3;
bit  DACOE2  @ DACCON0.4;
bit  DACOE1  @ DACCON0.5;
bit  DACEN   @ DACCON0.7;

bit  C4SYNC  @ CM4CON0.0;
bit  C4HYS   @ CM4CON0.1;
bit  C4SP    @ CM4CON0.2;
bit  C4ZLF   @ CM4CON0.3;
bit  C4POL   @ CM4CON0.4;
bit  C4OE    @ CM4CON0.5;
bit  C4OUT   @ CM4CON0.6;
bit  C4ON    @ CM4CON0.7;

bit  C4INTN  @ CM4CON1.6;
bit  C4INTP  @ CM4CON1.7;

bit  CCP3SEL @ APFCON2.0;

bit  CCP2SEL @ APFCON1.0;
bit  RXSEL   @ APFCON1.1;
bit  TXSEL   @ APFCON1.2;
bit  SDISEL  @ APFCON1.3;
bit  SCKSEL  @ APFCON1.4;
bit  SDOSEL  @ APFCON1.5;
bit  CCP1SEL @ APFCON1.6;
bit  C2OUTSEL @ APFCON1.7;

bit  C3SYNC  @ CM3CON0.0;
bit  C3HYS   @ CM3CON0.1;
bit  C3SP    @ CM3CON0.2;
bit  C3ZLF   @ CM3CON0.3;
bit  C3POL   @ CM3CON0.4;
bit  C3OE    @ CM3CON0.5;
bit  C3OUT   @ CM3CON0.6;
bit  C3ON    @ CM3CON0.7;

bit  C3NCH0  @ CM3CON1.0;
bit  C3NCH1  @ CM3CON1.1;
bit  C3NCH2  @ CM3CON1.2;
bit  C3PCH0  @ CM3CON1.3;
bit  C3PCH1  @ CM3CON1.4;
bit  C3PCH2  @ CM3CON1.5;
bit  C3INTN  @ CM3CON1.6;
bit  C3INTP  @ CM3CON1.7;

bit  RD      @ EECON1.0;
bit  WR      @ EECON1.1;
bit  WREN    @ EECON1.2;
bit  WRERR   @ EECON1.3;
bit  FREE    @ EECON1.4;
bit  LWLO    @ EECON1.5;
bit  CFGS    @ EECON1.6;
bit  EEPGD   @ EECON1.7;

#if _16F1786
bit  VREGPM  @ VREGCON.1;
#endif

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

bit  BF      @ SSPSTAT.0;
bit  UA      @ SSPSTAT.1;
bit  RW_     @ SSPSTAT.2;
bit  S       @ SSPSTAT.3;
bit  P       @ SSPSTAT.4;
bit  DA_     @ SSPSTAT.5;
bit  CKE     @ SSPSTAT.6;
bit  SMP     @ SSPSTAT.7;

bit  CKP     @ SSPCON.4;
bit  SSPEN   @ SSPCON.5;
bit  SSPOV   @ SSPCON.6;
bit  WCOL    @ SSPCON.7;

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

bit  OPA1PCH0 @ OPA1CON.0;
bit  OPA1PCH1 @ OPA1CON.1;
bit  OPA1SP  @ OPA1CON.6;
bit  OPA1EN  @ OPA1CON.7;

bit  OPA2PCH0 @ OPA2CON.0;
bit  OPA2PCH1 @ OPA2CON.1;
bit  OPA2SP  @ OPA2CON.6;
bit  OPA2EN  @ OPA2CON.7;

bit  CLKRDC0 @ CLKRCON.3;
bit  CLKRDC1 @ CLKRCON.4;
bit  CLKRSLR @ CLKRCON.5;
bit  CLKROE  @ CLKRCON.6;
bit  CLKREN  @ CLKRCON.7;

bit  P1DBRE  @ PSMC1CON.4;
bit  P1DBFE  @ PSMC1CON.5;
bit  PSMC1LD @ PSMC1CON.6;
bit  PSMC1EN @ PSMC1CON.7;

bit  P1MDLBIT @ PSMC1MDL.5;
bit  P1MDLPOL @ PSMC1MDL.6;
bit  P1MDLEN @ PSMC1MDL.7;

bit  P1DCPOL @ PSMC1SYNC.5;
bit  P1PRPOL @ PSMC1SYNC.6;
bit  P1POFST @ PSMC1SYNC.7;

bit  P1CSRC0 @ PSMC1CLK.0;
bit  P1CSRC1 @ PSMC1CLK.1;
bit  P1CPRE0 @ PSMC1CLK.4;
bit  P1CPRE1 @ PSMC1CLK.5;

bit  P1OEA   @ PSMC1OEN.0;
bit  P1OEB   @ PSMC1OEN.1;
bit  P1OEC   @ PSMC1OEN.2;
bit  P1OED   @ PSMC1OEN.3;
bit  P1OEE   @ PSMC1OEN.4;
bit  P1OEF   @ PSMC1OEN.5;

bit  P1POLA  @ PSMC1POL.0;
bit  P1POLB  @ PSMC1POL.1;
bit  P1POLC  @ PSMC1POL.2;
bit  P1POLD  @ PSMC1POL.3;
bit  P1POLE  @ PSMC1POL.4;
bit  P1POLF  @ PSMC1POL.5;
bit  P1INPOL @ PSMC1POL.6;

bit  P1REBM0 @ PSMC1BLNK.0;
bit  P1REBM1 @ PSMC1BLNK.1;
bit  P1FEBM0 @ PSMC1BLNK.4;
bit  P1FEBM1 @ PSMC1BLNK.5;

bit  P1REBSC1 @ PSMC1REBS.1;
bit  P1REBSC2 @ PSMC1REBS.2;
bit  P1REBSC3 @ PSMC1REBS.3;
bit  P1REBSC4 @ PSMC1REBS.4;
bit  P1REBSIN @ PSMC1REBS.7;

bit  P1FEBSC1 @ PSMC1FEBS.1;
bit  P1FEBSC2 @ PSMC1FEBS.2;
bit  P1FEBSC3 @ PSMC1FEBS.3;
bit  P1FEBSC4 @ PSMC1FEBS.4;
bit  P1FEBSIN @ PSMC1FEBS.7;

bit  P1PHST  @ PSMC1PHS.0;
bit  P1PHSC1 @ PSMC1PHS.1;
bit  P1PHSC2 @ PSMC1PHS.2;
bit  P1PHSC3 @ PSMC1PHS.3;
bit  P1PHSC4 @ PSMC1PHS.4;
bit  P1PHSIN @ PSMC1PHS.7;

bit  P1DCST  @ PSMC1DCS.0;
bit  P1DCSC1 @ PSMC1DCS.1;
bit  P1DCSC2 @ PSMC1DCS.2;
bit  P1DCSC3 @ PSMC1DCS.3;
bit  P1DCSC4 @ PSMC1DCS.4;
bit  P1DCSIN @ PSMC1DCS.7;

bit  P1PRST  @ PSMC1PRS.0;
bit  P1PRSC1 @ PSMC1PRS.1;
bit  P1PRSC2 @ PSMC1PRS.2;
bit  P1PRSC3 @ PSMC1PRS.3;
bit  P1PRSC4 @ PSMC1PRS.4;
bit  P1PRSIN @ PSMC1PRS.7;

bit  P1ASDOV @ PSMC1ASDC.0;
bit  P1ARSEN @ PSMC1ASDC.5;
bit  P1ASDEN @ PSMC1ASDC.6;
bit  P1ASE   @ PSMC1ASDC.7;

bit  P1ASDLA @ PSMC1ASDL.0;
bit  P1ASDLB @ PSMC1ASDL.1;
bit  P1ASDLC @ PSMC1ASDL.2;
bit  P1ASDLD @ PSMC1ASDL.3;
bit  P1ASDLE @ PSMC1ASDL.4;
bit  P1ASDLF @ PSMC1ASDL.5;

bit  P1ASDSC1 @ PSMC1ASDS.1;
bit  P1ASDSC2 @ PSMC1ASDS.2;
bit  P1ASDSC3 @ PSMC1ASDS.3;
bit  P1ASDSC4 @ PSMC1ASDS.4;
bit  P1ASDSIN @ PSMC1ASDS.7;

bit  P1TPRIF @ PSMC1INT.0;
bit  P1TDCIF @ PSMC1INT.1;
bit  P1TPHIF @ PSMC1INT.2;
bit  P1TOVIF @ PSMC1INT.3;
bit  P1TPRIE @ PSMC1INT.4;
bit  P1TDCIE @ PSMC1INT.5;
bit  P1TPHIE @ PSMC1INT.6;
bit  P1TOVIE @ PSMC1INT.7;

bit  P1STRA  @ PSMC1STR0.0;
bit  P1STRB  @ PSMC1STR0.1;
bit  P1STRC  @ PSMC1STR0.2;
bit  P1STRD  @ PSMC1STR0.3;
bit  P1STRE  @ PSMC1STR0.4;
bit  P1STRF  @ PSMC1STR0.5;

bit  P1HSMEN @ PSMC1STR1.0;
bit  P1LSMEN @ PSMC1STR1.1;
bit  P1SSYNC @ PSMC1STR1.7;

bit  P2DBRE  @ PSMC2CON.4;
bit  P2DBFE  @ PSMC2CON.5;
bit  PSMC2LD @ PSMC2CON.6;
bit  PSMC2EN @ PSMC2CON.7;

bit  P2MDLBIT @ PSMC2MDL.5;
bit  P2MDLPOL @ PSMC2MDL.6;
bit  P2MDLEN @ PSMC2MDL.7;

bit  P2DCPOL @ PSMC2SYNC.5;
bit  P2PRPOL @ PSMC2SYNC.6;
bit  P2POFST @ PSMC2SYNC.7;

bit  P2CSRC0 @ PSMC2CLK.0;
bit  P2CSRC1 @ PSMC2CLK.1;
bit  P2CPRE0 @ PSMC2CLK.4;
bit  P2CPRE1 @ PSMC2CLK.5;

bit  P2OEA   @ PSMC2OEN.0;
bit  P2OEB   @ PSMC2OEN.1;

bit  P2POLA  @ PSMC2POL.0;
bit  P2POLB  @ PSMC2POL.1;
bit  P2INPOL @ PSMC2POL.6;

bit  P2REBM0 @ PSMC2BLNK.0;
bit  P2REBM1 @ PSMC2BLNK.1;
bit  P2FEBM0 @ PSMC2BLNK.4;
bit  P2FEBM1 @ PSMC2BLNK.5;

bit  P2REBSC1 @ PSMC2REBS.1;
bit  P2REBSC2 @ PSMC2REBS.2;
bit  P2REBSC3 @ PSMC2REBS.3;
bit  P2REBSC4 @ PSMC2REBS.4;
bit  P2REBSIN @ PSMC2REBS.7;

bit  P2FEBSC1 @ PSMC2FEBS.1;
bit  P2FEBSC2 @ PSMC2FEBS.2;
bit  P2FEBSC3 @ PSMC2FEBS.3;
bit  P2FEBSC4 @ PSMC2FEBS.4;
bit  P2FEBSIN @ PSMC2FEBS.7;

bit  P2PHST  @ PSMC2PHS.0;
bit  P2PHSC1 @ PSMC2PHS.1;
bit  P2PHSC2 @ PSMC2PHS.2;
bit  P2PHSC3 @ PSMC2PHS.3;
bit  P2PHSC4 @ PSMC2PHS.4;
bit  P2PHSIN @ PSMC2PHS.7;

bit  P2DCST  @ PSMC2DCS.0;
bit  P2DCSC1 @ PSMC2DCS.1;
bit  P2DCSC2 @ PSMC2DCS.2;
bit  P2DCSC3 @ PSMC2DCS.3;
bit  P2DCSC4 @ PSMC2DCS.4;
bit  P2DCSIN @ PSMC2DCS.7;

bit  P2PRST  @ PSMC2PRS.0;
bit  P2PRSC1 @ PSMC2PRS.1;
bit  P2PRSC2 @ PSMC2PRS.2;
bit  P2PRSC3 @ PSMC2PRS.3;
bit  P2PRSC4 @ PSMC2PRS.4;
bit  P2PRSIN @ PSMC2PRS.7;

bit  P2ASDOV @ PSMC2ASDC.0;
bit  P2ARSEN @ PSMC2ASDC.5;
bit  P2ASDEN @ PSMC2ASDC.6;
bit  P2ASE   @ PSMC2ASDC.7;

bit  P2ASDLA @ PSMC2ASDL.0;
bit  P2ASDLB @ PSMC2ASDL.1;

bit  P2ASDSC1 @ PSMC2ASDS.1;
bit  P2ASDSC2 @ PSMC2ASDS.2;
bit  P2ASDSC3 @ PSMC2ASDS.3;
bit  P2ASDSC4 @ PSMC2ASDS.4;
bit  P2ASDSIN @ PSMC2ASDS.7;

bit  P2TPRIF @ PSMC2INT.0;
bit  P2TDCIF @ PSMC2INT.1;
bit  P2TPHIF @ PSMC2INT.2;
bit  P2TOVIF @ PSMC2INT.3;
bit  P2TPRIE @ PSMC2INT.4;
bit  P2TDCIE @ PSMC2INT.5;
bit  P2TPHIE @ PSMC2INT.6;
bit  P2TOVIE @ PSMC2INT.7;

bit  P2STRA  @ PSMC2STR0.0;
bit  P2STRB  @ PSMC2STR0.1;

bit  P2HSMEN @ PSMC2STR1.0;
bit  P2LSMEN @ PSMC2STR1.1;
bit  P2SSYNC @ PSMC2STR1.7;

bit  P3DBRE  @ PSMC3CON.4;
bit  P3DBFE  @ PSMC3CON.5;
bit  PSMC3LD @ PSMC3CON.6;
bit  PSMC3EN @ PSMC3CON.7;

bit  P3MDLBIT @ PSMC3MDL.5;
bit  P3MDLPOL @ PSMC3MDL.6;
bit  P3MDLEN @ PSMC3MDL.7;

bit  P3DCPOL @ PSMC3SYNC.5;
bit  P3PRPOL @ PSMC3SYNC.6;
bit  P3POFST @ PSMC3SYNC.7;

bit  P3CSRC0 @ PSMC3CLK.0;
bit  P3CSRC1 @ PSMC3CLK.1;
bit  P3CPRE0 @ PSMC3CLK.4;
bit  P3CPRE1 @ PSMC3CLK.5;

bit  P3OEA   @ PSMC3OEN.0;
bit  P3OEB   @ PSMC3OEN.1;
bit  P3OEC   @ PSMC3OEN.2;
bit  P3OED   @ PSMC3OEN.3;
bit  P3OEE   @ PSMC3OEN.4;
bit  P3OEF   @ PSMC3OEN.5;

bit  P3POLA  @ PSMC3POL.0;
bit  P3POLB  @ PSMC3POL.1;
bit  P3POLC  @ PSMC3POL.2;
bit  P3POLD  @ PSMC3POL.3;
bit  P3POLE  @ PSMC3POL.4;
bit  P3POLF  @ PSMC3POL.5;
bit  P3INPOL @ PSMC3POL.6;

bit  P3REBM0 @ PSMC3BLNK.0;
bit  P3REBM1 @ PSMC3BLNK.1;
bit  P3FEBM0 @ PSMC3BLNK.4;
bit  P3FEBM1 @ PSMC3BLNK.5;

bit  P3REBSC1 @ PSMC3REBS.1;
bit  P3REBSC2 @ PSMC3REBS.2;
bit  P3REBSC3 @ PSMC3REBS.3;
bit  P3REBSC4 @ PSMC3REBS.4;
bit  P3REBSIN @ PSMC3REBS.7;

bit  P3FEBSC1 @ PSMC3FEBS.1;
bit  P3FEBSC2 @ PSMC3FEBS.2;
bit  P3FEBSC3 @ PSMC3FEBS.3;
bit  P3FEBSC4 @ PSMC3FEBS.4;
bit  P3FEBSIN @ PSMC3FEBS.7;

bit  P3PHST  @ PSMC3PHS.0;
bit  P3PHSC1 @ PSMC3PHS.1;
bit  P3PHSC2 @ PSMC3PHS.2;
bit  P3PHSC3 @ PSMC3PHS.3;
bit  P3PHSC4 @ PSMC3PHS.4;
bit  P3PHSIN @ PSMC3PHS.7;

bit  P3DCST  @ PSMC3DCS.0;
bit  P3DCSC1 @ PSMC3DCS.1;
bit  P3DCSC2 @ PSMC3DCS.2;
bit  P3DCSC3 @ PSMC3DCS.3;
bit  P3DCSC4 @ PSMC3DCS.4;
bit  P3DCSIN @ PSMC3DCS.7;

bit  P3PRST  @ PSMC3PRS.0;
bit  P3PRSC1 @ PSMC3PRS.1;
bit  P3PRSC2 @ PSMC3PRS.2;
bit  P3PRSC3 @ PSMC3PRS.3;
bit  P3PRSC4 @ PSMC3PRS.4;
bit  P3PRSIN @ PSMC3PRS.7;

bit  P3ASDOV @ PSMC3ASDC.0;
bit  P3ARSEN @ PSMC3ASDC.5;
bit  P3ASDEN @ PSMC3ASDC.6;
bit  P3ASE   @ PSMC3ASDC.7;

bit  P3ASDLA @ PSMC3ASDL.0;
bit  P3ASDLB @ PSMC3ASDL.1;

bit  P3ASDSC1 @ PSMC3ASDS.1;
bit  P3ASDSC2 @ PSMC3ASDS.2;
bit  P3ASDSC3 @ PSMC3ASDS.3;
bit  P3ASDSC4 @ PSMC3ASDS.4;
bit  P3ASDSIN @ PSMC3ASDS.7;

bit  P3TPRIF @ PSMC3INT.0;
bit  P3TDCIF @ PSMC3INT.1;
bit  P3TPHIF @ PSMC3INT.2;
bit  P3TOVIF @ PSMC3INT.3;
bit  P3TPRIE @ PSMC3INT.4;
bit  P3TDCIE @ PSMC3INT.5;
bit  P3TPHIE @ PSMC3INT.6;
bit  P3TOVIE @ PSMC3INT.7;

bit  P3STRA  @ PSMC3STR0.0;
bit  P3STRB  @ PSMC3STR0.1;

bit  P3HSMEN @ PSMC3STR1.0;
bit  P3LSMEN @ PSMC3STR1.1;
bit  P3SSYNC @ PSMC3STR1.7;

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
#pragma config /2 0x3FFC WRT = ALL // 000h to 1FFFh write protected, no addresses may be modified by EECON control
#pragma config /2 0x3FFD WRT = HALF // 000h to FFFh write protected, 1000h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFE WRT = BOOT // 000h to 1FFh write protected, 200h to 1FFFh may be modified by EECON control
#pragma config /2 0x3FFF WRT = OFF // Write protection off
#ifdef _16F1786
#pragma config /2 0x3FDF VCAPEN = ON // Vcap functionality is enabled on RA6 (Vddcore is connected to the pad)
#pragma config /2 0x3FFF VCAPEN = OFF // Vcap functionality is disabled on RA6.
#endif
#pragma config /2 0x3EFF PLLEN = OFF // 4x PLL disabled
#pragma config /2 0x3FFF PLLEN = ON // 4x PLL enabled
#pragma config /2 0x3DFF STVREN = OFF // Stack Overflow or Underflow will not cause a Reset
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a Reset
#pragma config /2 0x3BFF BORV = HI // Brown-out Reset Voltage (Vbor), high trip point selected.
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config /2 0x37FF LPBOR = ON // Low power brown-out is enabled
#pragma config /2 0x3FFF LPBOR = OFF // Low power brown-out is disabled
#pragma config /2 0x1FFF LVP = OFF // High-voltage on MCLR/VPP must be used for programming
#pragma config /2 0x3FFF LVP = ON // Low-voltage programming enabled
#endif
