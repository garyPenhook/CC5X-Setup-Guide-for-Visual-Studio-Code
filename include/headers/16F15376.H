// HEADER FILE
#pragma chip PIC16F15376, core 14 enh2, code 16384, ram 32 : 0xCBF // 2048 bytes
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

char PORTA    @ 0x0C;
char PORTB    @ 0x0D;
char PORTC    @ 0x0E;
char PORTD    @ 0x0F;
char PORTE    @ 0x10;

char TRISA    @ 0x12;
char TRISB    @ 0x13;
char TRISC    @ 0x14;
char TRISD    @ 0x15;
char TRISE    @ 0x16;

char LATA     @ 0x18;
char LATB     @ 0x19;
char LATC     @ 0x1A;
char LATD     @ 0x1B;
char LATE     @ 0x1C;

char ADRESL   @ 0x9B;
char ADRESH   @ 0x9C;
char ADCON0   @ 0x9D;
char ADCON1   @ 0x9E;
char ADACT    @ 0x9F;

char RC1REG   @ 0x119;
char RCREG1   @ RC1REG;
char TX1REG   @ 0x11A;
char TXREG1   @ TX1REG;
char SP1BRGL  @ 0x11B;
char SP1BRGH  @ 0x11C;
char RC1STA   @ 0x11D;
char RCSTA1   @ RC1STA;
char TX1STA   @ 0x11E;
char TXSTA1   @ TX1STA;
char BAUD1CON @ 0x11F;
char BAUDCON1 @ BAUD1CON;

char SSP1BUF  @ 0x18C;
char SSP1ADD  @ 0x18D;
char SSP1MSK  @ 0x18E;
char SSP1STAT @ 0x18F;
char SSP1CON1 @ 0x190;
char SSP1CON2 @ 0x191;
char SSP1CON3 @ 0x192;

char SSP2BUF  @ 0x196;
char SSP2ADD  @ 0x197;
char SSP2MSK  @ 0x198;
char SSP2STAT @ 0x199;
char SSP2CON1 @ 0x19A;
char SSP2CON2 @ 0x19B;
char SSP2CON3 @ 0x19C;

char TMR1L    @ 0x20C;
char TMR1H    @ 0x20D;
char T1CON    @ 0x20E;
char T1GCON   @ 0x20F;
char T1GATE   @ 0x210;
char TMR1GATE @ T1GATE;
char T1CLK    @ 0x211;
char TMR1CLK  @ T1CLK;

char T2TMR    @ 0x28C;
char T2PR     @ 0x28D;
char T2CON    @ 0x28E;
char T2HLT    @ 0x28F;
char T2CLKCON @ 0x290;
char T2RST    @ 0x291;

char CCPR1L   @ 0x30C;
char CCPR1H   @ 0x30D;
char CCP1CON  @ 0x30E;
char CCP1CAP  @ 0x30F;
char CCPR2L   @ 0x310;
char CCPR2H   @ 0x311;
char CCP2CON  @ 0x312;
char CCP2CAP  @ 0x313;
char PWM3DCL  @ 0x314;
char PWM3DCH  @ 0x315;
char PWM3CON  @ 0x316;

char PWM4DCL  @ 0x318;
char PWM4DCH  @ 0x319;
char PWM4CON  @ 0x31A;

char PWM5DCL  @ 0x31C;
char PWM5DCH  @ 0x31D;
char PWM5CON  @ 0x31E;

char PWM6DCL  @ 0x38C;
char PWM6DCH  @ 0x38D;
char PWM6CON  @ 0x38E;

char NCO1ACCL @ 0x58C;
char NCO1ACCH @ 0x58D;
char NCO1ACCU @ 0x58E;
char NCO1INCL @ 0x58F;
char NCO1INCH @ 0x590;
char NCO1INCU @ 0x591;
char NCO1CON  @ 0x592;
char NCO1CLK  @ 0x593;

char TMR0L    @ 0x59C;
char TMR0H    @ 0x59D;
char T0CON0   @ 0x59E;
char T0CON1   @ 0x59F;

char CWG1CLKCON @ 0x60C;
char CWG1DAT  @ 0x60D;
char CWG1DBR  @ 0x60E;
char CWG1DBF  @ 0x60F;
char CWG1CON0 @ 0x610;
char CWG1CON1 @ 0x611;
char CWG1AS0  @ 0x612;
char CWG1AS1  @ 0x613;
char CWG1STR  @ 0x614;

char PIR0     @ 0x70C;
char PIR1     @ 0x70D;
char PIR2     @ 0x70E;
char PIR3     @ 0x70F;
char PIR4     @ 0x710;
char PIR5     @ 0x711;
char PIR6     @ 0x712;
char PIR7     @ 0x713;

char PIE0     @ 0x716;
char PIE1     @ 0x717;
char PIE2     @ 0x718;
char PIE3     @ 0x719;
char PIE4     @ 0x71A;
char PIE5     @ 0x71B;
char PIE6     @ 0x71C;
char PIE7     @ 0x71D;

char PMD0     @ 0x796;
char PMD1     @ 0x797;
char PMD2     @ 0x798;
char PMD3     @ 0x799;
char PMD4     @ 0x79A;
char PMD5     @ 0x79B;

char WDTCON0  @ 0x80C;
char WDTCON1  @ 0x80D;
char WDTPSL   @ 0x80E;
char WDTPSH   @ 0x80F;
char WDTTMR   @ 0x810;
char BORCON   @ 0x811;
#if _16F15376
char VREGCON  @ 0x812;
#endif
char PCON0    @ 0x813;
char PCON1    @ 0x814;

char NVMADRL  @ 0x81A;
char NVMADRH  @ 0x81B;
char NVMDATL  @ 0x81C;
char NVMDATH  @ 0x81D;
char NVMCON1  @ 0x81E;
char NVMCON2  @ 0x81F;

char CPUDOZE  @ 0x88C;
char OSCCON1  @ 0x88D;
char OSCCON2  @ 0x88E;
char OSCCON3  @ 0x88F;
char OSCSTAT  @ 0x890;
char OSCEN    @ 0x891;
char OSCTUNE  @ 0x892;
char OSCFRQ   @ 0x893;

char CLKRCON  @ 0x895;
char CLKRCLK  @ 0x896;

char FVRCON   @ 0x90C;

char DAC1CON0 @ 0x90E;
char DAC1CON1 @ 0x90F;

char ZCDCON   @ 0x91F;

char CMOUT    @ 0x98F;
char CMSTAT   @ CMOUT;
char CM1CON0  @ 0x990;
char CM1CON1  @ 0x991;
char CM1NCH   @ 0x992;
char CM1PCH   @ 0x993;
char CM2CON0  @ 0x994;
char CM2CON1  @ 0x995;
char CM2NCH   @ 0x996;
char CM2PCH   @ 0x997;

char RC2REG   @ 0xA19;
char RCREG2   @ RC2REG;
char TX2REG   @ 0xA1A;
char TXREG2   @ TX2REG;
char SP2BRGL  @ 0xA1B;
char SP2BRGH  @ 0xA1C;
char RC2STA   @ 0xA1D;
char RCSTA2   @ RC2STA;
char TX2STA   @ 0xA1E;
char TXSTA2   @ TX2STA;
char BAUD2CON @ 0xA1F;
char BAUDCON2 @ BAUD2CON;

char CLCDATA  @ 0x1E0F;
char CLC1CON  @ 0x1E10;
char CLC1POL  @ 0x1E11;
char CLC1SEL0 @ 0x1E12;
char CLC1SEL1 @ 0x1E13;
char CLC1SEL2 @ 0x1E14;
char CLC1SEL3 @ 0x1E15;
char CLC1GLS0 @ 0x1E16;
char CLC1GLS1 @ 0x1E17;
char CLC1GLS2 @ 0x1E18;
char CLC1GLS3 @ 0x1E19;
char CLC2CON  @ 0x1E1A;
char CLC2POL  @ 0x1E1B;
char CLC2SEL0 @ 0x1E1C;
char CLC2SEL1 @ 0x1E1D;
char CLC2SEL2 @ 0x1E1E;
char CLC2SEL3 @ 0x1E1F;
char CLC2GLS0 @ 0x1E20;
char CLC2GLS1 @ 0x1E21;
char CLC2GLS2 @ 0x1E22;
char CLC2GLS3 @ 0x1E23;
char CLC3CON  @ 0x1E24;
char CLC3POL  @ 0x1E25;
char CLC3SEL0 @ 0x1E26;
char CLC3SEL1 @ 0x1E27;
char CLC3SEL2 @ 0x1E28;
char CLC3SEL3 @ 0x1E29;
char CLC3GLS0 @ 0x1E2A;
char CLC3GLS1 @ 0x1E2B;
char CLC3GLS2 @ 0x1E2C;
char CLC3GLS3 @ 0x1E2D;
char CLC4CON  @ 0x1E2E;
char CLC4POL  @ 0x1E2F;
char CLC4SEL0 @ 0x1E30;
char CLC4SEL1 @ 0x1E31;
char CLC4SEL2 @ 0x1E32;
char CLC4SEL3 @ 0x1E33;
char CLC4GLS0 @ 0x1E34;
char CLC4GLS1 @ 0x1E35;
char CLC4GLS2 @ 0x1E36;
char CLC4GLS3 @ 0x1E37;

char PPSLOCK  @ 0x1E8F;
char INTPPS   @ 0x1E90;
char T0CKIPPS @ 0x1E91;
char T1CKIPPS @ 0x1E92;
char T1GPPS   @ 0x1E93;

char T2INPPS  @ 0x1E9C;

char CCP1PPS  @ 0x1EA1;
char CCP2PPS  @ 0x1EA2;

char CWG1PPS  @ 0x1EB1;

char CLCIN0PPS @ 0x1EBB;
char CLCIN1PPS @ 0x1EBC;
char CLCIN2PPS @ 0x1EBD;
char CLCIN3PPS @ 0x1EBE;

char ADACTPPS @ 0x1EC3;

char SSP1CLKPPS @ 0x1EC5;
char SSP1DATPPS @ 0x1EC6;
char SSP1SSPPS @ 0x1EC7;
char SSP2CLKPPS @ 0x1EC8;
char SSP2DATPPS @ 0x1EC9;
char SSP2SSPPS @ 0x1ECA;
char RX1DTPPS @ 0x1ECB;
char TX1CKPPS @ 0x1ECC;
char RX2DTPPS @ 0x1ECD;
char TX2CKPPS @ 0x1ECE;

char RA0PPS   @ 0x1F10;
char RA1PPS   @ 0x1F11;
char RA2PPS   @ 0x1F12;
char RA3PPS   @ 0x1F13;
char RA4PPS   @ 0x1F14;
char RA5PPS   @ 0x1F15;
char RA6PPS   @ 0x1F16;
char RA7PPS   @ 0x1F17;
char RB0PPS   @ 0x1F18;
char RB1PPS   @ 0x1F19;
char RB2PPS   @ 0x1F1A;
char RB3PPS   @ 0x1F1B;
char RB4PPS   @ 0x1F1C;
char RB5PPS   @ 0x1F1D;
char RB6PPS   @ 0x1F1E;
char RB7PPS   @ 0x1F1F;
char RC0PPS   @ 0x1F20;
char RC1PPS   @ 0x1F21;
char RC2PPS   @ 0x1F22;
char RC3PPS   @ 0x1F23;
char RC4PPS   @ 0x1F24;
char RC5PPS   @ 0x1F25;
char RC6PPS   @ 0x1F26;
char RC7PPS   @ 0x1F27;
char RD0PPS   @ 0x1F28;
char RD1PPS   @ 0x1F29;
char RD2PPS   @ 0x1F2A;
char RD3PPS   @ 0x1F2B;
char RD4PPS   @ 0x1F2C;
char RD5PPS   @ 0x1F2D;
char RD6PPS   @ 0x1F2E;
char RD7PPS   @ 0x1F2F;
char RE0PPS   @ 0x1F30;
char RE1PPS   @ 0x1F31;
char RE2PPS   @ 0x1F32;

char ANSELA   @ 0x1F38;
char WPUA     @ 0x1F39;
char ODCONA   @ 0x1F3A;
char SLRCONA  @ 0x1F3B;
char INLVLA   @ 0x1F3C;
char IOCAP    @ 0x1F3D;
char IOCAN    @ 0x1F3E;
char IOCAF    @ 0x1F3F;

char ANSELB   @ 0x1F43;
char WPUB     @ 0x1F44;
char ODCONB   @ 0x1F45;
char SLRCONB  @ 0x1F46;
char INLVLB   @ 0x1F47;
char IOCBP    @ 0x1F48;
char IOCBN    @ 0x1F49;
char IOCBF    @ 0x1F4A;

char ANSELC   @ 0x1F4E;
char WPUC     @ 0x1F4F;
char ODCONC   @ 0x1F50;
char SLRCONC  @ 0x1F51;
char INLVLC   @ 0x1F52;
char IOCCP    @ 0x1F53;
char IOCCN    @ 0x1F54;
char IOCCF    @ 0x1F55;

char ANSELD   @ 0x1F59;
char WPUD     @ 0x1F5A;
char ODCOND   @ 0x1F5B;
char SLRCOND  @ 0x1F5C;
char INLVLD   @ 0x1F5D;

char ANSELE   @ 0x1F64;
char WPUE     @ 0x1F65;
char ODCONE   @ 0x1F66;
char SLRCONE  @ 0x1F67;
char INLVLE   @ 0x1F68;
char IOCEP    @ 0x1F69;
char IOCEN    @ 0x1F6A;
char IOCEF    @ 0x1F6B;

char STATUS_SHAD @ 0x1FE4;
char WREG_SHAD @ 0x1FE5;
char BSR_SHAD @ 0x1FE6;
char PCLATH_SHAD @ 0x1FE7;
char FSR0L_SHAD @ 0x1FE8;
char FSR0H_SHAD @ 0x1FE9;
char FSR1L_SHAD @ 0x1FEA;
char FSR1H_SHAD @ 0x1FEB;

char STKPTR   @ 0x1FED;
char TOSL     @ 0x1FEE;
char TOSH     @ 0x1FEF;


bit INTEDG   @ INTCON.0;
bit PEIE     @ INTCON.6;
bit GIE      @ INTCON.7;

bit RA0      @ PORTA.0;
bit RA1      @ PORTA.1;
bit RA2      @ PORTA.2;
bit RA3      @ PORTA.3;
bit RA4      @ PORTA.4;
bit RA5      @ PORTA.5;
bit RA6      @ PORTA.6;
bit RA7      @ PORTA.7;

bit RB0      @ PORTB.0;
bit RB1      @ PORTB.1;
bit RB2      @ PORTB.2;
bit RB3      @ PORTB.3;
bit RB4      @ PORTB.4;
bit RB5      @ PORTB.5;
bit RB6      @ PORTB.6;
bit RB7      @ PORTB.7;

bit RC0      @ PORTC.0;
bit RC1      @ PORTC.1;
bit RC2      @ PORTC.2;
bit RC3      @ PORTC.3;
bit RC4      @ PORTC.4;
bit RC5      @ PORTC.5;
bit RC6      @ PORTC.6;
bit RC7      @ PORTC.7;

bit RD0      @ PORTD.0;
bit RD1      @ PORTD.1;
bit RD2      @ PORTD.2;
bit RD3      @ PORTD.3;
bit RD4      @ PORTD.4;
bit RD5      @ PORTD.5;
bit RD6      @ PORTD.6;
bit RD7      @ PORTD.7;

bit RE0      @ PORTE.0;
bit RE1      @ PORTE.1;
bit RE2      @ PORTE.2;
bit RE3      @ PORTE.3;

bit TRISA0   @ TRISA.0;
bit TRISA1   @ TRISA.1;
bit TRISA2   @ TRISA.2;
bit TRISA3   @ TRISA.3;
bit TRISA4   @ TRISA.4;
bit TRISA5   @ TRISA.5;
bit TRISA6   @ TRISA.6;
bit TRISA7   @ TRISA.7;

bit TRISB0   @ TRISB.0;
bit TRISB1   @ TRISB.1;
bit TRISB2   @ TRISB.2;
bit TRISB3   @ TRISB.3;
bit TRISB4   @ TRISB.4;
bit TRISB5   @ TRISB.5;
bit TRISB6   @ TRISB.6;
bit TRISB7   @ TRISB.7;

bit TRISC0   @ TRISC.0;
bit TRISC1   @ TRISC.1;
bit TRISC2   @ TRISC.2;
bit TRISC3   @ TRISC.3;
bit TRISC4   @ TRISC.4;
bit TRISC5   @ TRISC.5;
bit TRISC6   @ TRISC.6;
bit TRISC7   @ TRISC.7;

bit TRISD0   @ TRISD.0;
bit TRISD1   @ TRISD.1;
bit TRISD2   @ TRISD.2;
bit TRISD3   @ TRISD.3;
bit TRISD4   @ TRISD.4;
bit TRISD5   @ TRISD.5;
bit TRISD6   @ TRISD.6;
bit TRISD7   @ TRISD.7;

bit TRISE0   @ TRISE.0;
bit TRISE1   @ TRISE.1;
bit TRISE2   @ TRISE.2;
bit TRISE3   @ TRISE.3;

bit LATA0    @ LATA.0;
bit LATA1    @ LATA.1;
bit LATA2    @ LATA.2;
bit LATA3    @ LATA.3;
bit LATA4    @ LATA.4;
bit LATA5    @ LATA.5;
bit LATA6    @ LATA.6;
bit LATA7    @ LATA.7;

bit LATB0    @ LATB.0;
bit LATB1    @ LATB.1;
bit LATB2    @ LATB.2;
bit LATB3    @ LATB.3;
bit LATB4    @ LATB.4;
bit LATB5    @ LATB.5;
bit LATB6    @ LATB.6;
bit LATB7    @ LATB.7;

bit LATC0    @ LATC.0;
bit LATC1    @ LATC.1;
bit LATC2    @ LATC.2;
bit LATC3    @ LATC.3;
bit LATC4    @ LATC.4;
bit LATC5    @ LATC.5;
bit LATC6    @ LATC.6;
bit LATC7    @ LATC.7;

bit LATD0    @ LATD.0;
bit LATD1    @ LATD.1;
bit LATD2    @ LATD.2;
bit LATD3    @ LATD.3;
bit LATD4    @ LATD.4;
bit LATD5    @ LATD.5;
bit LATD6    @ LATD.6;
bit LATD7    @ LATD.7;

bit LATE0    @ LATE.0;
bit LATE1    @ LATE.1;
bit LATE2    @ LATE.2;

bit ADON     @ ADCON0.0;
bit ADGO     @ ADCON0.1;
bit GO       @ ADCON0.1;
bit ADCHS0   @ ADCON0.2;
bit ADCHS1   @ ADCON0.3;
bit ADCHS2   @ ADCON0.4;
bit ADCHS3   @ ADCON0.5;
bit ADCHS4   @ ADCON0.6;
bit ADCHS5   @ ADCON0.7;

bit ADPREF0  @ ADCON1.0;
bit ADPREF1  @ ADCON1.1;
bit ADCS0    @ ADCON1.4;
bit ADCS1    @ ADCON1.5;
bit ADCS2    @ ADCON1.6;
bit ADFM     @ ADCON1.7;

bit RX9D     @ RC1STA.0;
bit OERR     @ RC1STA.1;
bit FERR     @ RC1STA.2;
bit ADDEN    @ RC1STA.3;
bit CREN     @ RC1STA.4;
bit SREN     @ RC1STA.5;
bit RX9      @ RC1STA.6;
bit SPEN     @ RC1STA.7;

bit RX9D1    @ RCSTA1.0;
bit OERR1    @ RCSTA1.1;
bit FERR1    @ RCSTA1.2;
bit ADDEN1   @ RCSTA1.3;
bit CREN1    @ RCSTA1.4;
bit SREN1    @ RCSTA1.5;
bit RX9_1    @ RCSTA1.6;
bit SPEN1    @ RCSTA1.7;

bit TX9D     @ TX1STA.0;
bit TRMT     @ TX1STA.1;
bit BRGH     @ TX1STA.2;
bit SENDB    @ TX1STA.3;
bit SYNC     @ TX1STA.4;
bit TXEN     @ TX1STA.5;
bit TX9      @ TX1STA.6;
bit CSRC     @ TX1STA.7;

bit TX9D1    @ TXSTA1.0;
bit TRMT1    @ TXSTA1.1;
bit BRGH1    @ TXSTA1.2;
bit SENDB1   @ TXSTA1.3;
bit TXSYNC1  @ TXSTA1.4;
bit TXEN1    @ TXSTA1.5;
bit TX9_1    @ TXSTA1.6;
bit CSRC1    @ TXSTA1.7;

bit ABDEN    @ BAUD1CON.0;
bit WUE      @ BAUD1CON.1;
bit BRG16    @ BAUD1CON.3;
bit SCKP     @ BAUD1CON.4;
bit RCIDL    @ BAUD1CON.6;
bit ABDOVF   @ BAUD1CON.7;

bit ABDEN1   @ BAUDCON1.0;
bit WUE1     @ BAUDCON1.1;
bit BRG16_1  @ BAUDCON1.3;
bit SCKP1    @ BAUDCON1.4;
bit RCIDL1   @ BAUDCON1.6;
bit ABDOVF1  @ BAUDCON1.7;

bit BF       @ SSP1STAT.0;
bit UA       @ SSP1STAT.1;
bit RW_      @ SSP1STAT.2;
bit S        @ SSP1STAT.3;
bit P        @ SSP1STAT.4;
bit DA_      @ SSP1STAT.5;
bit CKE      @ SSP1STAT.6;
bit SMP      @ SSP1STAT.7;

bit SSPM0    @ SSP1CON1.0;
bit SSPM1    @ SSP1CON1.1;
bit SSPM2    @ SSP1CON1.2;
bit SSPM3    @ SSP1CON1.3;
bit CKP      @ SSP1CON1.4;
bit SSPEN    @ SSP1CON1.5;
bit SSPOV    @ SSP1CON1.6;
bit WCOL     @ SSP1CON1.7;

bit SEN      @ SSP1CON2.0;
bit RSEN     @ SSP1CON2.1;
bit PEN      @ SSP1CON2.2;
bit RCEN     @ SSP1CON2.3;
bit ACKEN    @ SSP1CON2.4;
bit ACKDT    @ SSP1CON2.5;
bit ACKSTAT  @ SSP1CON2.6;
bit GCEN     @ SSP1CON2.7;

bit DHEN     @ SSP1CON3.0;
bit AHEN     @ SSP1CON3.1;
bit SBCDE    @ SSP1CON3.2;
bit SDAHT    @ SSP1CON3.3;
bit BOEN     @ SSP1CON3.4;
bit SCIE     @ SSP1CON3.5;
bit PCIE     @ SSP1CON3.6;
bit ACKTIM   @ SSP1CON3.7;

bit BF2      @ SSP2STAT.0;
bit UA2      @ SSP2STAT.1;
bit RW_2     @ SSP2STAT.2;
bit S2       @ SSP2STAT.3;
bit P2       @ SSP2STAT.4;
bit DA_2     @ SSP2STAT.5;
bit CKE2     @ SSP2STAT.6;
bit SMP2     @ SSP2STAT.7;

bit SSP2M0   @ SSP2CON1.0;
bit SSP2M1   @ SSP2CON1.1;
bit SSP2M2   @ SSP2CON1.2;
bit SSP2M3   @ SSP2CON1.3;
bit CKP2     @ SSP2CON1.4;
bit SSPEN2   @ SSP2CON1.5;
bit SSPOV2   @ SSP2CON1.6;
bit WCOL2    @ SSP2CON1.7;

bit SEN2     @ SSP2CON2.0;
bit RSEN2    @ SSP2CON2.1;
bit PEN2     @ SSP2CON2.2;
bit RCEN2    @ SSP2CON2.3;
bit ACKEN2   @ SSP2CON2.4;
bit ACKDT2   @ SSP2CON2.5;
bit ACKSTAT2 @ SSP2CON2.6;
bit GCEN2    @ SSP2CON2.7;

bit DHEN2    @ SSP2CON3.0;
bit AHEN2    @ SSP2CON3.1;
bit SBCDE2   @ SSP2CON3.2;
bit SDAHT2   @ SSP2CON3.3;
bit BOEN2    @ SSP2CON3.4;
bit SCIE2    @ SSP2CON3.5;
bit PCIE2    @ SSP2CON3.6;
bit ACKTIM2  @ SSP2CON3.7;

bit TMR1ON   @ T1CON.0;
bit T1RD16   @ T1CON.1;
bit T1SYNC_  @ T1CON.2;
bit T1CKPS0  @ T1CON.4;
bit T1CKPS1  @ T1CON.5;

bit T1GVAL   @ T1GCON.2;
bit T1GGO    @ T1GCON.3;
bit T1GSPM   @ T1GCON.4;
bit T1GTM    @ T1GCON.5;
bit T1GPOL   @ T1GCON.6;
bit T1GE     @ T1GCON.7;

bit T1GSS0   @ TMR1GATE.0;
bit T1GSS1   @ TMR1GATE.1;
bit T1GSS2   @ TMR1GATE.2;
bit T1GSS3   @ TMR1GATE.3;
bit T1GSS4   @ TMR1GATE.4;

bit T1CS0    @ TMR1CLK.0;
bit T1CS1    @ TMR1CLK.1;
bit T1CS2    @ TMR1CLK.2;
bit T1CS3    @ TMR1CLK.3;

bit T2OUTPS0 @ T2CON.0;
bit T2OUTPS1 @ T2CON.1;
bit T2OUTPS2 @ T2CON.2;
bit T2OUTPS3 @ T2CON.3;
bit T2CKPS0  @ T2CON.4;
bit T2CKPS1  @ T2CON.5;
bit T2CKPS2  @ T2CON.6;
bit TMR2ON   @ T2CON.7;

bit T2MODE0  @ T2HLT.0;
bit T2MODE1  @ T2HLT.1;
bit T2MODE2  @ T2HLT.2;
bit T2MODE3  @ T2HLT.3;
bit T2MODE4  @ T2HLT.4;
bit T2CKSYNC @ T2HLT.5;
bit T2CKPOL  @ T2HLT.6;
bit T2PSYNC  @ T2HLT.7;

bit CCP1MODE0 @ CCP1CON.0;
bit CCP1MODE1 @ CCP1CON.1;
bit CCP1MODE2 @ CCP1CON.2;
bit CCP1MODE3 @ CCP1CON.3;
bit CCP1FMT  @ CCP1CON.4;
bit CCP1OUT  @ CCP1CON.5;
bit CCP1EN   @ CCP1CON.7;

bit CCP1CTS0 @ CCP1CAP.0;
bit CCP1CTS1 @ CCP1CAP.1;
bit CCP1CTS2 @ CCP1CAP.2;

bit CCP2MODE0 @ CCP2CON.0;
bit CCP2MODE1 @ CCP2CON.1;
bit CCP2MODE2 @ CCP2CON.2;
bit CCP2MODE3 @ CCP2CON.3;
bit CCP2FMT  @ CCP2CON.4;
bit CCP2OUT  @ CCP2CON.5;
bit CCP2EN   @ CCP2CON.7;

bit CCP2CTS0 @ CCP2CAP.0;
bit CCP2CTS1 @ CCP2CAP.1;
bit CCP2CTS2 @ CCP2CAP.2;

bit PWM3POL  @ PWM3CON.4;
bit PWM3OUT  @ PWM3CON.5;
bit PWM3EN   @ PWM3CON.7;

bit PWM4POL  @ PWM4CON.4;
bit PWM4OUT  @ PWM4CON.5;
bit PWM4EN   @ PWM4CON.7;

bit PWM5POL  @ PWM5CON.4;
bit PWM5OUT  @ PWM5CON.5;
bit PWM5EN   @ PWM5CON.7;

bit PWM6POL  @ PWM6CON.4;
bit PWM6OUT  @ PWM6CON.5;
bit PWM6EN   @ PWM6CON.7;

bit N1PFM    @ NCO1CON.0;
bit N1POL    @ NCO1CON.4;
bit N1OUT    @ NCO1CON.5;
bit N1EN     @ NCO1CON.7;

bit N1CKS0   @ NCO1CLK.0;
bit N1CKS1   @ NCO1CLK.1;
bit N1CKS2   @ NCO1CLK.2;
bit N1PWS0   @ NCO1CLK.5;
bit N1PWS1   @ NCO1CLK.6;
bit N1PWS2   @ NCO1CLK.7;

bit T0OUTPS0 @ T0CON0.0;
bit T0OUTPS1 @ T0CON0.1;
bit T0OUTPS2 @ T0CON0.2;
bit T0OUTPS3 @ T0CON0.3;
bit T016BIT  @ T0CON0.4;
bit T0OUT    @ T0CON0.5;
bit T0OE     @ T0CON0.6;
bit T0EN     @ T0CON0.7;

bit T0CKPS0  @ T0CON1.0;
bit T0CKPS1  @ T0CON1.1;
bit T0CKPS2  @ T0CON1.2;
bit T0CKPS3  @ T0CON1.3;
bit T0ASYNC  @ T0CON1.4;
bit T0CS0    @ T0CON1.5;
bit T0CS1    @ T0CON1.6;
bit T0CS2    @ T0CON1.7;

bit CWG1CS   @ CWG1CLKCON.0;

bit CWG1MODE0 @ CWG1CON0.0;
bit CWG1MODE1 @ CWG1CON0.1;
bit CWG1MODE2 @ CWG1CON0.2;
bit CWG1LD   @ CWG1CON0.6;
bit CWG1EN   @ CWG1CON0.7;

bit CWG1POLA @ CWG1CON1.0;
bit CWG1POLB @ CWG1CON1.1;
bit CWG1POLC @ CWG1CON1.2;
bit CWG1POLD @ CWG1CON1.3;
bit CWG1IN   @ CWG1CON1.5;

bit CWG1LSAC0 @ CWG1AS0.2;
bit CWG1LSAC1 @ CWG1AS0.3;
bit CWG1LSBD0 @ CWG1AS0.4;
bit CWG1LSBD1 @ CWG1AS0.5;
bit CWG1REN  @ CWG1AS0.6;
bit CWG1SHUTDOWN @ CWG1AS0.7;

bit CWG1AS1_AS0E @ CWG1AS1.0;
bit CWG1AS1_AS1E @ CWG1AS1.1;
bit CWG1AS1_AS2E @ CWG1AS1.2;
bit CWG1AS1_AS3E @ CWG1AS1.3;
bit CWG1AS1_AS4E @ CWG1AS1.4;

bit CWG1STRA @ CWG1STR.0;
bit CWG1STRB @ CWG1STR.1;
bit CWG1STRC @ CWG1STR.2;
bit CWG1STRD @ CWG1STR.3;
bit CWG1OVRA @ CWG1STR.4;
bit CWG1OVRB @ CWG1STR.5;
bit CWG1OVRC @ CWG1STR.6;
bit CWG1OVRD @ CWG1STR.7;

bit INTF     @ PIR0.0;
bit IOCIF    @ PIR0.4;
bit TMR0IF   @ PIR0.5;

bit ADIF     @ PIR1.0;
bit CSWIF    @ PIR1.6;
bit OSFIF    @ PIR1.7;

bit C1IF     @ PIR2.0;
bit C2IF     @ PIR2.1;
bit ZCDIF    @ PIR2.6;

bit SSP1IF   @ PIR3.0;
bit BCL1IF   @ PIR3.1;
bit SSP2IF   @ PIR3.2;
bit BCL2IF   @ PIR3.3;
bit TX1IF    @ PIR3.4;
bit RC1IF    @ PIR3.5;
bit TX2IF    @ PIR3.6;
bit RC2IF    @ PIR3.7;

bit TMR1IF   @ PIR4.0;
bit TMR2IF   @ PIR4.1;

bit TMR1GIF  @ PIR5.0;
bit CLC1IF   @ PIR5.4;
bit CLC2IF   @ PIR5.5;
bit CLC3IF   @ PIR5.6;
bit CLC4IF   @ PIR5.7;

bit CCP1IF   @ PIR6.0;
bit CCP2IF   @ PIR6.1;

bit CWG1IF   @ PIR7.0;
bit NCO1IF   @ PIR7.4;
bit NVMIF    @ PIR7.5;

bit INTE     @ PIE0.0;
bit IOCIE    @ PIE0.4;
bit TMR0IE   @ PIE0.5;

bit ADIE     @ PIE1.0;
bit ADTIE    @ PIE1.1;
bit CSWIE    @ PIE1.6;
bit OSFIE    @ PIE1.7;

bit C1IE     @ PIE2.0;
bit C2IE     @ PIE2.1;
bit ZCDIE    @ PIE2.6;

bit SSP1IE   @ PIE3.0;
bit BCL1IE   @ PIE3.1;
bit SSP2IE   @ PIE3.2;
bit BCL2IE   @ PIE3.3;
bit TX1IE    @ PIE3.4;
bit RC1IE    @ PIE3.5;
bit TX2IE    @ PIE3.6;
bit RC2IE    @ PIE3.7;

bit TMR1IE   @ PIE4.0;
bit TMR2IE   @ PIE4.1;

bit TMR1GIE  @ PIE5.0;
bit CLC1IE   @ PIE5.4;
bit CLC2IE   @ PIE5.5;
bit CLC3IE   @ PIE5.6;
bit CLC4IE   @ PIE5.7;

bit CCP1IE   @ PIE6.0;
bit CCP2IE   @ PIE6.1;

bit CWG1IE   @ PIE7.0;
bit NCO1IE   @ PIE7.4;
bit NVMIE    @ PIE7.5;

bit IOCMD    @ PMD0.0;
bit CLKRMD   @ PMD0.1;
bit NVMMD    @ PMD0.2;
bit FVRMD    @ PMD0.6;
bit SYSCMD   @ PMD0.7;

bit TMR0MD   @ PMD1.0;
bit TMR1MD   @ PMD1.1;
bit TMR2MD   @ PMD1.2;
bit NCOMD    @ PMD1.7;
bit NCO1MD   @ PMD1.7;

bit ZCDMD    @ PMD2.0;
bit CMP1MD   @ PMD2.1;
bit CMP2MD   @ PMD2.2;
bit ADCMD    @ PMD2.5;
bit DAC1MD   @ PMD2.6;

bit CCP1MD   @ PMD3.0;
bit CCP2MD   @ PMD3.1;
bit PWM3MD   @ PMD3.2;
bit PWM4MD   @ PMD3.3;
bit PWM5MD   @ PMD3.4;
bit PWM6MD   @ PMD3.5;

bit CWG1MD   @ PMD4.0;
bit MSSP1MD  @ PMD4.4;
bit MSSP2MD  @ PMD4.5;
bit UART1MD  @ PMD4.6;
bit UART2MD  @ PMD4.7;

bit CLC1MD   @ PMD5.1;
bit CLC2MD   @ PMD5.2;
bit CLC3MD   @ PMD5.3;
bit CLC4MD   @ PMD5.4;

bit SWDTEN   @ WDTCON0.0;
bit WDTSEN   @ WDTCON0.0;
bit WDTPS0   @ WDTCON0.1;
bit WDTPS1   @ WDTCON0.2;
bit WDTPS2   @ WDTCON0.3;
bit WDTPS3   @ WDTCON0.4;
bit WDTPS4   @ WDTCON0.5;

bit WDTWINDOW0 @ WDTCON1.0;
bit WDTWINDOW1 @ WDTCON1.1;
bit WDTWINDOW2 @ WDTCON1.2;
bit WDTCS0   @ WDTCON1.4;
bit WDTCS1   @ WDTCON1.5;
bit WDTCS2   @ WDTCON1.6;

bit WDTPSCNT16 @ WDTTMR.0;
bit WDTPSCNT17 @ WDTTMR.1;
bit WDTSTATE @ WDTTMR.2;
bit WDTTMR0  @ WDTTMR.3;
bit WDTTMR1  @ WDTTMR.4;
bit WDTTMR2  @ WDTTMR.5;
bit WDTTMR3  @ WDTTMR.6;

bit BORRDY   @ BORCON.0;
bit SBOREN   @ BORCON.7;

#if _16F15376
bit VREGPM   @ VREGCON.1;
#endif

bit BOR_     @ PCON0.0;
bit POR_     @ PCON0.1;
bit RI_      @ PCON0.2;
bit RMCLR_   @ PCON0.3;
bit RWDT_    @ PCON0.4;
bit WDTWV_   @ PCON0.5;
bit STKUNF   @ PCON0.6;
bit STKOVF   @ PCON0.7;

bit MEMV_    @ PCON1.1;

bit RD       @ NVMCON1.0;
bit WR       @ NVMCON1.1;
bit WREN     @ NVMCON1.2;
bit WRERR    @ NVMCON1.3;
bit FREE     @ NVMCON1.4;
bit LWLO     @ NVMCON1.5;
bit NVMREGS  @ NVMCON1.6;

bit DOZE0    @ CPUDOZE.0;
bit DOZE1    @ CPUDOZE.1;
bit DOZE2    @ CPUDOZE.2;
bit DOE      @ CPUDOZE.4;
bit ROI      @ CPUDOZE.5;
bit DOZEN    @ CPUDOZE.6;
bit IDLEN    @ CPUDOZE.7;

bit NDIV0    @ OSCCON1.0;
bit NDIV1    @ OSCCON1.1;
bit NDIV2    @ OSCCON1.2;
bit NDIV3    @ OSCCON1.3;
bit NOSC0    @ OSCCON1.4;
bit NOSC1    @ OSCCON1.5;
bit NOSC2    @ OSCCON1.6;

bit CDIV0    @ OSCCON2.0;
bit CDIV1    @ OSCCON2.1;
bit CDIV2    @ OSCCON2.2;
bit CDIV3    @ OSCCON2.3;
bit COSC0    @ OSCCON2.4;
bit COSC1    @ OSCCON2.5;
bit COSC2    @ OSCCON2.6;

bit NOSCR    @ OSCCON3.3;
bit ORDY     @ OSCCON3.4;
bit SOSCPWR  @ OSCCON3.6;
bit CSWHOLD  @ OSCCON3.7;

bit PLLR     @ OSCSTAT.0;
bit ADOR     @ OSCSTAT.2;
bit SOR      @ OSCSTAT.3;
bit LFOR     @ OSCSTAT.4;
bit MFOR     @ OSCSTAT.5;
bit HFOR     @ OSCSTAT.6;
bit EXTOR    @ OSCSTAT.7;

bit ADOEN    @ OSCEN.2;
bit SOSCEN   @ OSCEN.3;
bit LFOEN    @ OSCEN.4;
bit MFOEN    @ OSCEN.5;
bit HFOEN    @ OSCEN.6;
bit EXTOEN   @ OSCEN.7;

bit HFFRQ0   @ OSCFRQ.0;
bit HFFRQ1   @ OSCFRQ.1;
bit HFFRQ2   @ OSCFRQ.2;

bit CLKRDIV0 @ CLKRCON.0;
bit CLKRDIV1 @ CLKRCON.1;
bit CLKRDIV2 @ CLKRCON.2;
bit CLKRDC0  @ CLKRCON.3;
bit CLKRDC1  @ CLKRCON.4;
bit CLKREN   @ CLKRCON.7;

bit ADFVR0   @ FVRCON.0;
bit ADFVR1   @ FVRCON.1;
bit CDAFVR0  @ FVRCON.2;
bit CDAFVR1  @ FVRCON.3;
bit TSRNG    @ FVRCON.4;
bit TSEN     @ FVRCON.5;
bit FVRRDY   @ FVRCON.6;
bit FVREN    @ FVRCON.7;

bit DAC1NSS  @ DAC1CON0.0;
bit DAC1PSS0 @ DAC1CON0.2;
bit DAC1PSS1 @ DAC1CON0.3;
bit DAC1OE2  @ DAC1CON0.4;
bit DAC1OE1  @ DAC1CON0.5;
bit DAC1EN   @ DAC1CON0.7;

bit ZCDINTN  @ ZCDCON.0;
bit ZCDINTP  @ ZCDCON.1;
bit ZCDPOL   @ ZCDCON.4;
bit ZCDOUT   @ ZCDCON.5;
bit ZCDSEN   @ ZCDCON.7;

bit MC1OUT   @ CMOUT.0;
bit MC2OUT   @ CMOUT.1;

bit C1SYNC   @ CM1CON0.0;
bit C1HYS    @ CM1CON0.1;
bit C1POL    @ CM1CON0.4;
bit CM1CON0_OUT @ CM1CON0.6;
bit C1EN     @ CM1CON0.7;

bit C1INTN   @ CM1CON1.0;
bit C1INTP   @ CM1CON1.1;

bit C2SYNC   @ CM2CON0.0;
bit C2HYS    @ CM2CON0.1;
bit C2POL    @ CM2CON0.4;
bit C2OUT    @ CM2CON0.6;
bit C2EN     @ CM2CON0.7;

bit C2INTN   @ CM2CON1.0;
bit C2INTP   @ CM2CON1.1;

bit RX9D2    @ RCSTA2.0;
bit OERR2    @ RCSTA2.1;
bit FERR2    @ RCSTA2.2;
bit ADDEN2   @ RCSTA2.3;
bit CREN2    @ RCSTA2.4;
bit SREN2    @ RCSTA2.5;
bit RX9_2    @ RCSTA2.6;
bit SPEN2    @ RCSTA2.7;

bit TX9D2    @ TXSTA2.0;
bit TRMT2    @ TXSTA2.1;
bit BRGH2    @ TXSTA2.2;
bit SENDB2   @ TXSTA2.3;
bit TXSYNC2  @ TXSTA2.4;
bit TXEN2    @ TXSTA2.5;
bit TX9_2    @ TXSTA2.6;
bit CSRC2    @ TXSTA2.7;

bit ABDEN2   @ BAUDCON2.0;
bit WUE2     @ BAUDCON2.1;
bit BRG16_2  @ BAUDCON2.3;
bit SCKP2    @ BAUDCON2.4;
bit RCIDL2   @ BAUDCON2.6;
bit ABDOVF2  @ BAUDCON2.7;

bit MLC1OUT  @ CLCDATA.0;
bit MLC2OUT  @ CLCDATA.1;
bit MLC3OUT  @ CLCDATA.2;
bit MLC4OUT  @ CLCDATA.3;

bit LC1MODE0 @ CLC1CON.0;
bit LC1MODE1 @ CLC1CON.1;
bit LC1MODE2 @ CLC1CON.2;
bit LC1INTN  @ CLC1CON.3;
bit LC1INTP  @ CLC1CON.4;
bit LC1OUT   @ CLC1CON.5;
bit LC1EN    @ CLC1CON.7;

bit LC1G1POL @ CLC1POL.0;
bit LC1G2POL @ CLC1POL.1;
bit LC1G3POL @ CLC1POL.2;
bit LC1G4POL @ CLC1POL.3;
bit LC1POL   @ CLC1POL.7;

bit LC1D1S0  @ CLC1SEL0.0;
bit LC1D1S1  @ CLC1SEL0.1;
bit LC1D1S2  @ CLC1SEL0.2;
bit LC1D1S3  @ CLC1SEL0.3;
bit LC1D1S4  @ CLC1SEL0.4;
bit LC1D1S5  @ CLC1SEL0.5;

bit LC1D2S0  @ CLC1SEL1.0;
bit LC1D2S1  @ CLC1SEL1.1;
bit LC1D2S2  @ CLC1SEL1.2;
bit LC1D2S3  @ CLC1SEL1.3;
bit LC1D2S4  @ CLC1SEL1.4;
bit LC1D2S5  @ CLC1SEL1.5;

bit LC1D3S0  @ CLC1SEL2.0;
bit LC1D3S1  @ CLC1SEL2.1;
bit LC1D3S2  @ CLC1SEL2.2;
bit LC1D3S3  @ CLC1SEL2.3;
bit LC1D3S4  @ CLC1SEL2.4;
bit LC1D3S5  @ CLC1SEL2.5;

bit LC1D4S0  @ CLC1SEL3.0;
bit LC1D4S1  @ CLC1SEL3.1;
bit LC1D4S2  @ CLC1SEL3.2;
bit LC1D4S3  @ CLC1SEL3.3;
bit LC1D4S4  @ CLC1SEL3.4;
bit LC1D4S5  @ CLC1SEL3.5;

bit LC1G1D1N @ CLC1GLS0.0;
bit LC1G1D1T @ CLC1GLS0.1;
bit LC1G1D2N @ CLC1GLS0.2;
bit LC1G1D2T @ CLC1GLS0.3;
bit LC1G1D3N @ CLC1GLS0.4;
bit LC1G1D3T @ CLC1GLS0.5;
bit LC1G1D4N @ CLC1GLS0.6;
bit LC1G1D4T @ CLC1GLS0.7;

bit LC1G2D1N @ CLC1GLS1.0;
bit LC1G2D1T @ CLC1GLS1.1;
bit LC1G2D2N @ CLC1GLS1.2;
bit LC1G2D2T @ CLC1GLS1.3;
bit LC1G2D3N @ CLC1GLS1.4;
bit LC1G2D3T @ CLC1GLS1.5;
bit LC1G2D4N @ CLC1GLS1.6;
bit LC1G2D4T @ CLC1GLS1.7;

bit LC1G3D1N @ CLC1GLS2.0;
bit LC1G3D1T @ CLC1GLS2.1;
bit LC1G3D2N @ CLC1GLS2.2;
bit LC1G3D2T @ CLC1GLS2.3;
bit LC1G3D3N @ CLC1GLS2.4;
bit LC1G3D3T @ CLC1GLS2.5;
bit LC1G3D4N @ CLC1GLS2.6;
bit LC1G3D4T @ CLC1GLS2.7;

bit LC1G4D1N @ CLC1GLS3.0;
bit LC1G4D1T @ CLC1GLS3.1;
bit LC1G4D2N @ CLC1GLS3.2;
bit LC1G4D2T @ CLC1GLS3.3;
bit LC1G4D3N @ CLC1GLS3.4;
bit LC1G4D3T @ CLC1GLS3.5;
bit LC1G4D4N @ CLC1GLS3.6;
bit LC1G4D4T @ CLC1GLS3.7;

bit LC2MODE0 @ CLC2CON.0;
bit LC2MODE1 @ CLC2CON.1;
bit LC2MODE2 @ CLC2CON.2;
bit LC2INTN  @ CLC2CON.3;
bit LC2INTP  @ CLC2CON.4;
bit LC2OUT   @ CLC2CON.5;
bit LC2EN    @ CLC2CON.7;

bit LC2G1POL @ CLC2POL.0;
bit LC2G2POL @ CLC2POL.1;
bit LC2G3POL @ CLC2POL.2;
bit LC2G4POL @ CLC2POL.3;
bit LC2POL   @ CLC2POL.7;

bit LC2D1S0  @ CLC2SEL0.0;
bit LC2D1S1  @ CLC2SEL0.1;
bit LC2D1S2  @ CLC2SEL0.2;
bit LC2D1S3  @ CLC2SEL0.3;
bit LC2D1S4  @ CLC2SEL0.4;
bit LC2D1S5  @ CLC2SEL0.5;

bit LC2D2S0  @ CLC2SEL1.0;
bit LC2D2S1  @ CLC2SEL1.1;
bit LC2D2S2  @ CLC2SEL1.2;
bit LC2D2S3  @ CLC2SEL1.3;
bit LC2D2S4  @ CLC2SEL1.4;
bit LC2D2S5  @ CLC2SEL1.5;

bit LC2D3S0  @ CLC2SEL2.0;
bit LC2D3S1  @ CLC2SEL2.1;
bit LC2D3S2  @ CLC2SEL2.2;
bit LC2D3S3  @ CLC2SEL2.3;
bit LC2D3S4  @ CLC2SEL2.4;
bit LC2D3S5  @ CLC2SEL2.5;

bit LC2D4S0  @ CLC2SEL3.0;
bit LC2D4S1  @ CLC2SEL3.1;
bit LC2D4S2  @ CLC2SEL3.2;
bit LC2D4S3  @ CLC2SEL3.3;
bit LC2D4S4  @ CLC2SEL3.4;
bit LC2D4S5  @ CLC2SEL3.5;

bit LC2G1D1N @ CLC2GLS0.0;
bit LC2G1D1T @ CLC2GLS0.1;
bit LC2G1D2N @ CLC2GLS0.2;
bit LC2G1D2T @ CLC2GLS0.3;
bit LC2G1D3N @ CLC2GLS0.4;
bit LC2G1D3T @ CLC2GLS0.5;
bit LC2G1D4N @ CLC2GLS0.6;
bit LC2G1D4T @ CLC2GLS0.7;

bit LC2G2D1N @ CLC2GLS1.0;
bit LC2G2D1T @ CLC2GLS1.1;
bit LC2G2D2N @ CLC2GLS1.2;
bit LC2G2D2T @ CLC2GLS1.3;
bit LC2G2D3N @ CLC2GLS1.4;
bit LC2G2D3T @ CLC2GLS1.5;
bit LC2G2D4N @ CLC2GLS1.6;
bit LC2G2D4T @ CLC2GLS1.7;

bit LC2G3D1N @ CLC2GLS2.0;
bit LC2G3D1T @ CLC2GLS2.1;
bit LC2G3D2N @ CLC2GLS2.2;
bit LC2G3D2T @ CLC2GLS2.3;
bit LC2G3D3N @ CLC2GLS2.4;
bit LC2G3D3T @ CLC2GLS2.5;
bit LC2G3D4N @ CLC2GLS2.6;
bit LC2G3D4T @ CLC2GLS2.7;

bit LC2G4D1N @ CLC2GLS3.0;
bit LC2G4D1T @ CLC2GLS3.1;
bit LC2G4D2N @ CLC2GLS3.2;
bit LC2G4D2T @ CLC2GLS3.3;
bit LC2G4D3N @ CLC2GLS3.4;
bit LC2G4D3T @ CLC2GLS3.5;
bit LC2G4D4N @ CLC2GLS3.6;
bit LC2G4D4T @ CLC2GLS3.7;

bit LC3MODE0 @ CLC3CON.0;
bit LC3MODE1 @ CLC3CON.1;
bit LC3MODE2 @ CLC3CON.2;
bit LC3INTN  @ CLC3CON.3;
bit LC3INTP  @ CLC3CON.4;
bit LC3OUT   @ CLC3CON.5;
bit LC3EN    @ CLC3CON.7;

bit LC3G1POL @ CLC3POL.0;
bit LC3G2POL @ CLC3POL.1;
bit LC3G3POL @ CLC3POL.2;
bit LC3G4POL @ CLC3POL.3;
bit LC3POL   @ CLC3POL.7;

bit LC3D1S0  @ CLC3SEL0.0;
bit LC3D1S1  @ CLC3SEL0.1;
bit LC3D1S2  @ CLC3SEL0.2;
bit LC3D1S3  @ CLC3SEL0.3;
bit LC3D1S4  @ CLC3SEL0.4;
bit LC3D1S5  @ CLC3SEL0.5;

bit LC3D2S0  @ CLC3SEL1.0;
bit LC3D2S1  @ CLC3SEL1.1;
bit LC3D2S2  @ CLC3SEL1.2;
bit LC3D2S3  @ CLC3SEL1.3;
bit LC3D2S4  @ CLC3SEL1.4;
bit LC3D2S5  @ CLC3SEL1.5;

bit LC3D3S0  @ CLC3SEL2.0;
bit LC3D3S1  @ CLC3SEL2.1;
bit LC3D3S2  @ CLC3SEL2.2;
bit LC3D3S3  @ CLC3SEL2.3;
bit LC3D3S4  @ CLC3SEL2.4;
bit LC3D3S5  @ CLC3SEL2.5;

bit LC3D4S0  @ CLC3SEL3.0;
bit LC3D4S1  @ CLC3SEL3.1;
bit LC3D4S2  @ CLC3SEL3.2;
bit LC3D4S3  @ CLC3SEL3.3;
bit LC3D4S4  @ CLC3SEL3.4;
bit LC3D4S5  @ CLC3SEL3.5;

bit LC3G1D1N @ CLC3GLS0.0;
bit LC3G1D1T @ CLC3GLS0.1;
bit LC3G1D2N @ CLC3GLS0.2;
bit LC3G1D2T @ CLC3GLS0.3;
bit LC3G1D3N @ CLC3GLS0.4;
bit LC3G1D3T @ CLC3GLS0.5;
bit LC3G1D4N @ CLC3GLS0.6;
bit LC3G1D4T @ CLC3GLS0.7;

bit LC3G2D1N @ CLC3GLS1.0;
bit LC3G2D1T @ CLC3GLS1.1;
bit LC3G2D2N @ CLC3GLS1.2;
bit LC3G2D2T @ CLC3GLS1.3;
bit LC3G2D3N @ CLC3GLS1.4;
bit LC3G2D3T @ CLC3GLS1.5;
bit LC3G2D4N @ CLC3GLS1.6;
bit LC3G2D4T @ CLC3GLS1.7;

bit LC3G3D1N @ CLC3GLS2.0;
bit LC3G3D1T @ CLC3GLS2.1;
bit LC3G3D2N @ CLC3GLS2.2;
bit LC3G3D2T @ CLC3GLS2.3;
bit LC3G3D3N @ CLC3GLS2.4;
bit LC3G3D3T @ CLC3GLS2.5;
bit LC3G3D4N @ CLC3GLS2.6;
bit LC3G3D4T @ CLC3GLS2.7;

bit LC3G4D1N @ CLC3GLS3.0;
bit LC3G4D1T @ CLC3GLS3.1;
bit LC3G4D2N @ CLC3GLS3.2;
bit LC3G4D2T @ CLC3GLS3.3;
bit LC3G4D3N @ CLC3GLS3.4;
bit LC3G4D3T @ CLC3GLS3.5;
bit LC3G4D4N @ CLC3GLS3.6;
bit LC3G4D4T @ CLC3GLS3.7;

bit LC4MODE0 @ CLC4CON.0;
bit LC4MODE1 @ CLC4CON.1;
bit LC4MODE2 @ CLC4CON.2;
bit LC4INTN  @ CLC4CON.3;
bit LC4INTP  @ CLC4CON.4;
bit LC4OUT   @ CLC4CON.5;
bit LC4EN    @ CLC4CON.7;

bit LC4G1POL @ CLC4POL.0;
bit LC4G2POL @ CLC4POL.1;
bit LC4G3POL @ CLC4POL.2;
bit LC4G4POL @ CLC4POL.3;
bit LC4POL   @ CLC4POL.7;

bit LC4D1S0  @ CLC4SEL0.0;
bit LC4D1S1  @ CLC4SEL0.1;
bit LC4D1S2  @ CLC4SEL0.2;
bit LC4D1S3  @ CLC4SEL0.3;
bit LC4D1S4  @ CLC4SEL0.4;
bit LC4D1S5  @ CLC4SEL0.5;

bit LC4D2S0  @ CLC4SEL1.0;
bit LC4D2S1  @ CLC4SEL1.1;
bit LC4D2S2  @ CLC4SEL1.2;
bit LC4D2S3  @ CLC4SEL1.3;
bit LC4D2S4  @ CLC4SEL1.4;
bit LC4D2S5  @ CLC4SEL1.5;

bit LC4D3S0  @ CLC4SEL2.0;
bit LC4D3S1  @ CLC4SEL2.1;
bit LC4D3S2  @ CLC4SEL2.2;
bit LC4D3S3  @ CLC4SEL2.3;
bit LC4D3S4  @ CLC4SEL2.4;
bit LC4D3S5  @ CLC4SEL2.5;

bit LC4D4S0  @ CLC4SEL3.0;
bit LC4D4S1  @ CLC4SEL3.1;
bit LC4D4S2  @ CLC4SEL3.2;
bit LC4D4S3  @ CLC4SEL3.3;
bit LC4D4S4  @ CLC4SEL3.4;
bit LC4D4S5  @ CLC4SEL3.5;

bit LC4G1D1N @ CLC4GLS0.0;
bit LC4G1D1T @ CLC4GLS0.1;
bit LC4G1D2N @ CLC4GLS0.2;
bit LC4G1D2T @ CLC4GLS0.3;
bit LC4G1D3N @ CLC4GLS0.4;
bit LC4G1D3T @ CLC4GLS0.5;
bit LC4G1D4N @ CLC4GLS0.6;
bit LC4G1D4T @ CLC4GLS0.7;

bit LC4G2D1N @ CLC4GLS1.0;
bit LC4G2D1T @ CLC4GLS1.1;
bit LC4G2D2N @ CLC4GLS1.2;
bit LC4G2D2T @ CLC4GLS1.3;
bit LC4G2D3N @ CLC4GLS1.4;
bit LC4G2D3T @ CLC4GLS1.5;
bit LC4G2D4N @ CLC4GLS1.6;
bit LC4G2D4T @ CLC4GLS1.7;

bit LC4G3D1N @ CLC4GLS2.0;
bit LC4G3D1T @ CLC4GLS2.1;
bit LC4G3D2N @ CLC4GLS2.2;
bit LC4G3D2T @ CLC4GLS2.3;
bit LC4G3D3N @ CLC4GLS2.4;
bit LC4G3D3T @ CLC4GLS2.5;
bit LC4G3D4N @ CLC4GLS2.6;
bit LC4G3D4T @ CLC4GLS2.7;

bit LC4G4D1N @ CLC4GLS3.0;
bit LC4G4D1T @ CLC4GLS3.1;
bit LC4G4D2N @ CLC4GLS3.2;
bit LC4G4D2T @ CLC4GLS3.3;
bit LC4G4D3N @ CLC4GLS3.4;
bit LC4G4D3T @ CLC4GLS3.5;
bit LC4G4D4N @ CLC4GLS3.6;
bit LC4G4D4T @ CLC4GLS3.7;

bit PPSLOCKED @ PPSLOCK.0;

bit ANSA0    @ ANSELA.0;
bit ANSA1    @ ANSELA.1;
bit ANSA2    @ ANSELA.2;
bit ANSA3    @ ANSELA.3;
bit ANSA4    @ ANSELA.4;
bit ANSA5    @ ANSELA.5;
bit ANSA6    @ ANSELA.6;
bit ANSA7    @ ANSELA.7;

bit WPUA0    @ WPUA.0;
bit WPUA1    @ WPUA.1;
bit WPUA2    @ WPUA.2;
bit WPUA3    @ WPUA.3;
bit WPUA4    @ WPUA.4;
bit WPUA5    @ WPUA.5;
bit WPUA6    @ WPUA.6;
bit WPUA7    @ WPUA.7;

bit SLRA0    @ SLRCONA.0;
bit SLRA1    @ SLRCONA.1;
bit SLRA2    @ SLRCONA.2;
bit SLRA3    @ SLRCONA.3;
bit SLRA4    @ SLRCONA.4;
bit SLRA5    @ SLRCONA.5;
bit SLRA6    @ SLRCONA.6;
bit SLRA7    @ SLRCONA.7;

bit INLVLA0  @ INLVLA.0;
bit INLVLA1  @ INLVLA.1;
bit INLVLA2  @ INLVLA.2;
bit INLVLA3  @ INLVLA.3;
bit INLVLA4  @ INLVLA.4;
bit INLVLA5  @ INLVLA.5;
bit INLVLA6  @ INLVLA.6;
bit INLVLA7  @ INLVLA.7;

bit ANSB0    @ ANSELB.0;
bit ANSB1    @ ANSELB.1;
bit ANSB2    @ ANSELB.2;
bit ANSB3    @ ANSELB.3;
bit ANSB4    @ ANSELB.4;
bit ANSB5    @ ANSELB.5;
bit ANSB6    @ ANSELB.6;
bit ANSB7    @ ANSELB.7;

bit WPUB0    @ WPUB.0;
bit WPUB1    @ WPUB.1;
bit WPUB2    @ WPUB.2;
bit WPUB3    @ WPUB.3;
bit WPUB4    @ WPUB.4;
bit WPUB5    @ WPUB.5;
bit WPUB6    @ WPUB.6;
bit WPUB7    @ WPUB.7;

bit SLRB0    @ SLRCONB.0;
bit SLRB1    @ SLRCONB.1;
bit SLRB2    @ SLRCONB.2;
bit SLRB3    @ SLRCONB.3;
bit SLRB4    @ SLRCONB.4;
bit SLRB5    @ SLRCONB.5;
bit SLRB6    @ SLRCONB.6;
bit SLRB7    @ SLRCONB.7;

bit INLVLB0  @ INLVLB.0;
bit INLVLB1  @ INLVLB.1;
bit INLVLB2  @ INLVLB.2;
bit INLVLB3  @ INLVLB.3;
bit INLVLB4  @ INLVLB.4;
bit INLVLB5  @ INLVLB.5;
bit INLVLB6  @ INLVLB.6;
bit INLVLB7  @ INLVLB.7;

bit ANSC0    @ ANSELC.0;
bit ANSC1    @ ANSELC.1;
bit ANSC2    @ ANSELC.2;
bit ANSC3    @ ANSELC.3;
bit ANSC4    @ ANSELC.4;
bit ANSC5    @ ANSELC.5;
bit ANSC6    @ ANSELC.6;
bit ANSC7    @ ANSELC.7;

bit WPUC0    @ WPUC.0;
bit WPUC1    @ WPUC.1;
bit WPUC2    @ WPUC.2;
bit WPUC3    @ WPUC.3;
bit WPUC4    @ WPUC.4;
bit WPUC5    @ WPUC.5;
bit WPUC6    @ WPUC.6;
bit WPUC7    @ WPUC.7;

bit SLRC0    @ SLRCONC.0;
bit SLRC1    @ SLRCONC.1;
bit SLRC2    @ SLRCONC.2;
bit SLRC3    @ SLRCONC.3;
bit SLRC4    @ SLRCONC.4;
bit SLRC5    @ SLRCONC.5;
bit SLRC6    @ SLRCONC.6;
bit SLRC7    @ SLRCONC.7;

bit INLVLC0  @ INLVLC.0;
bit INLVLC1  @ INLVLC.1;
bit INLVLC2  @ INLVLC.2;
bit INLVLC3  @ INLVLC.3;
bit INLVLC4  @ INLVLC.4;
bit INLVLC5  @ INLVLC.5;
bit INLVLC6  @ INLVLC.6;
bit INLVLC7  @ INLVLC.7;

bit ANSD0    @ ANSELD.0;
bit ANSD1    @ ANSELD.1;
bit ANSD2    @ ANSELD.2;
bit ANSD3    @ ANSELD.3;
bit ANSD4    @ ANSELD.4;
bit ANSD5    @ ANSELD.5;
bit ANSD6    @ ANSELD.6;
bit ANSD7    @ ANSELD.7;

bit WPUD0    @ WPUD.0;
bit WPUD1    @ WPUD.1;
bit WPUD2    @ WPUD.2;
bit WPUD3    @ WPUD.3;
bit WPUD4    @ WPUD.4;
bit WPUD5    @ WPUD.5;
bit WPUD6    @ WPUD.6;
bit WPUD7    @ WPUD.7;

bit SLRD0    @ SLRCOND.0;
bit SLRD1    @ SLRCOND.1;
bit SLRD2    @ SLRCOND.2;
bit SLRD3    @ SLRCOND.3;
bit SLRD4    @ SLRCOND.4;
bit SLRD5    @ SLRCOND.5;
bit SLRD6    @ SLRCOND.6;
bit SLRD7    @ SLRCOND.7;

bit INLVLD0  @ INLVLD.0;
bit INLVLD1  @ INLVLD.1;
bit INLVLD2  @ INLVLD.2;
bit INLVLD3  @ INLVLD.3;
bit INLVLD4  @ INLVLD.4;
bit INLVLD5  @ INLVLD.5;
bit INLVLD6  @ INLVLD.6;
bit INLVLD7  @ INLVLD.7;

bit ANSE0    @ ANSELE.0;
bit ANSE1    @ ANSELE.1;
bit ANSE2    @ ANSELE.2;

bit WPUE0    @ WPUE.0;
bit WPUE1    @ WPUE.1;
bit WPUE2    @ WPUE.2;
bit WPUE3    @ WPUE.3;

bit SLRE0    @ SLRCONE.0;
bit SLRE1    @ SLRCONE.1;
bit SLRE2    @ SLRCONE.2;

bit INLVLE0  @ INLVLE.0;
bit INLVLE1  @ INLVLE.1;
bit INLVLE2  @ INLVLE.2;
bit INLVLE3  @ INLVLE.3;

bit C_SHAD   @ STATUS_SHAD.0;
bit DC_SHAD  @ STATUS_SHAD.1;
bit Z_SHAD   @ STATUS_SHAD.2;


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
#pragma config /3 0x17FF WDTCCS = SOSC // WDT reference clock is the 32kHz secondary oscillator
#pragma config /3 0x3FFF WDTCCS = SC // Software Control
#pragma config /4 0x3FF8 BBSIZE = BB64K // * half of user program memory
#pragma config /4 0x3FF9 BBSIZE = BB32K // * half of user program memory
#pragma config /4 0x3FFA BBSIZE = BB16K // * half of user program memory
#pragma config /4 0x3FFB BBSIZE = BB8K // 8192 words boot block size
#pragma config /4 0x3FFC BBSIZE = BB4K // 4096 words boot block size
#pragma config /4 0x3FFD BBSIZE = BB2K // 2048 words boot block size
#pragma config /4 0x3FFE BBSIZE = BB1K // 1024 words boot block size
#pragma config /4 0x3FFF BBSIZE = BB512 // 512 words boot block size
#pragma config /4 0x3FF7 BBEN = ON // Boot Block enabled
#pragma config /4 0x3FFF BBEN = OFF // Boot Block disabled
#pragma config /4 0x3FEF SAFEN = ON // SAF enabled
#pragma config /4 0x3FFF SAFEN = OFF // SAF disabled
#pragma config /4 0x3F7F WRTAPP = ON // Application Block write protected
#pragma config /4 0x3FFF WRTAPP = OFF // Application Block not write protected
#pragma config /4 0x3EFF WRTB = ON // Boot Block write protected
#pragma config /4 0x3FFF WRTB = OFF // Boot Block not write protected
#pragma config /4 0x3DFF WRTC = ON // Configuration Register write protected
#pragma config /4 0x3FFF WRTC = OFF // Configuration Register not write protected
#pragma config /4 0x37FF WRTSAF = ON // SAF write protected
#pragma config /4 0x3FFF WRTSAF = OFF // SAF not write protected
#pragma config /4 0x1FFF LVP = OFF // High Voltage on MCLR/Vpp must be used for programming
#pragma config /4 0x3FFF LVP = ON // Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.
#pragma config /5 0x3FFE CP = ON // UserNVM code protection enabled
#pragma config /5 0x3FFF CP = OFF // UserNVM code protection disabled
#endif
