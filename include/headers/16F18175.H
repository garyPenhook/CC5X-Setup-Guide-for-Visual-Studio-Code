// HEADER FILE
#pragma chip PIC16F18175, core 14 enh2, code 8192, ram 32 : 0x64F // 1024 bytes
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


/*
* The following REGISTER and CONFIG definitions are generated automatically
* from INI and CFGDATA files for the specific device. Note that some bit names
* are modified compared to the names found in the INI file.
*
* The INI and CFGDATA files contains a copyright and disclaimer notice from Microchip.
* The following text is copied from the INI file and should contain the notice:

# Generated 21/06/2023 GMT

# Copyright © 2023, Microchip Technology Inc. and its subsidiaries ("Microchip")
# All rights reserved.
# 
# This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
# 
# Redistribution and use in source and binary forms, with or without modification, are
# permitted provided that the following conditions are met:
# 
#     1. Redistributions of source code must retain the above copyright notice, this list of
#        conditions and the following disclaimer.
# 
#     2. Redistributions in binary form must reproduce the above copyright notice, this list
#        of conditions and the following disclaimer in the documentation and/or other
#        materials provided with the distribution. Publication is not required when
#        this file is used in an embedded application.
# 
#     3. Microchip's name may not be used to endorse or promote products derived from this
#        software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
# INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

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

char PIR0     @ 0x8C;
char PIR1     @ 0x8D;
char PIR2     @ 0x8E;
char PIR3     @ 0x8F;
char PIR4     @ 0x90;
char PIR5     @ 0x91;
char PIR6     @ 0x92;

char PIE0     @ 0x96;
char PIE1     @ 0x97;
char PIE2     @ 0x98;
char PIE3     @ 0x99;
char PIE4     @ 0x9A;
char PIE5     @ 0x9B;
char PIE6     @ 0x9C;

char PMD0     @ 0x10C;
char PMD1     @ 0x10D;
char PMD2     @ 0x10E;
char PMD3     @ 0x10F;
char PMD4     @ 0x110;

char WDTCON0  @ 0x18C;
char WDTCON1  @ 0x18D;
char WDTPSL   @ 0x18E;
char WDTPSH   @ 0x18F;
char WDTTMR   @ 0x190;
char BORCON   @ 0x191;
char PCON0    @ 0x192;
char PCON1    @ 0x193;

char TMR0L    @ 0x19C;
char TMR0H    @ 0x19D;
char PR0      @ TMR0H;
char T0CON0   @ 0x19E;
char T0CON1   @ 0x19F;

char FVRCON   @ 0x20C;
char CPCON    @ 0x20D;

char ZCDCON   @ 0x21F;

char CPUDOZE  @ 0x28C;
char OSCCON1  @ 0x28D;
char OSCCON2  @ 0x28E;
char OSCCON3  @ 0x28F;
char OSCSTAT  @ 0x290;
char OSCEN    @ 0x291;
char OSCTUNE  @ 0x292;
char OSCFRQ   @ 0x293;
char ACTCON   @ 0x294;

char CLKRCON  @ 0x296;
char CLKRCLK  @ 0x297;

char TMR1L    @ 0x30C;
char TMR1H    @ 0x30D;
char T1CON    @ 0x30E;
char T1GCON   @ 0x30F;
char PR1      @ T1GCON;
char T1GATE   @ 0x310;
char TMR1GATE @ T1GATE;
char T1CLK    @ 0x311;
char TMR1CLK  @ T1CLK;
char TMR3L    @ 0x312;
char TMR3H    @ 0x313;
char T3CON    @ 0x314;
char T3GCON   @ 0x315;
char PR3      @ T3GCON;
char T3GATE   @ 0x316;
char TMR3GATE @ T3GATE;
char T3CLK    @ 0x317;
char TMR3CLK  @ T3CLK;

char T2TMR    @ 0x38C;
char TMR2     @ T2TMR;
char T2PR     @ 0x38D;
char PR2      @ T2PR;
char T2CON    @ 0x38E;
char T2HLT    @ 0x38F;
char T2CLKCON @ 0x390;
char T2CLK    @ T2CLKCON;
char T2RST    @ 0x391;
char T4TMR    @ 0x392;
char TMR4     @ T4TMR;
char T4PR     @ 0x393;
char PR4      @ T4PR;
char T4CON    @ 0x394;
char T4HLT    @ 0x395;
char T4CLKCON @ 0x396;
char T4CLK    @ T4CLKCON;
char T4RST    @ 0x397;
char T6TMR    @ 0x398;
char TMR6     @ T6TMR;
char T6PR     @ 0x399;
char PR6      @ T6PR;
char T6CON    @ 0x39A;
char T6HLT    @ 0x39B;
char T6CLKCON @ 0x39C;
char T6CLK    @ T6CLKCON;
char T6RST    @ 0x39D;

char CCPR1L   @ 0x40C;
char CCPR1H   @ 0x40D;
char CCP1CON  @ 0x40E;
char CCP1CAP  @ 0x40F;
char CCPR2L   @ 0x410;
char CCPR2H   @ 0x411;
char CCP2CON  @ 0x412;
char CCP2CAP  @ 0x413;

char CCPTMRS0 @ 0x41F;

char PWM1ERS  @ 0x48C;
char PWM1CLK  @ 0x48D;
char PWM1LDS  @ 0x48E;
char PWM1PRL  @ 0x48F;
char PWM1PRH  @ 0x490;
char PWM1CPRE @ 0x491;
char PWM1PIPOS @ 0x492;
char PWM1GIR  @ 0x493;
char PWM1GIE  @ 0x494;
char PWM1CON  @ 0x495;
char PWM1S1CFG @ 0x496;
char PWM1S1P1L @ 0x497;
char PWM1S1P1H @ 0x498;
char PWM1S1P2L @ 0x499;
char PWM1S1P2H @ 0x49A;

char PWMLOAD  @ 0x49E;
char PWMEN    @ 0x49F;

char PWM2ERS  @ 0x50C;
char PWM2CLK  @ 0x50D;
char PWM2LDS  @ 0x50E;
char PWM2PRL  @ 0x50F;
char PWM2PRH  @ 0x510;
char PWM2CPRE @ 0x511;
char PWM2PIPOS @ 0x512;
char PWM2GIR  @ 0x513;
char PWM2GIE  @ 0x514;
char PWM2CON  @ 0x515;
char PWM2S1CFG @ 0x516;
char PWM2S1P1L @ 0x517;
char PWM2S1P1H @ 0x518;
char PWM2S1P2L @ 0x519;
char PWM2S1P2H @ 0x51A;

char NCO1ACCL @ 0x58C;
char NCO1ACCH @ 0x58D;
char NCO1ACCU @ 0x58E;
char NCO1INCL @ 0x58F;
char NCO1INCH @ 0x590;
char NCO1INCU @ 0x591;
char NCO1CON  @ 0x592;
char NCO1CLK  @ 0x593;

char CWG1CLK  @ 0x60C;
char CWG1CLKCON @ CWG1CLK;
char CWG1ISM  @ 0x60D;
char CWG1DAT  @ CWG1ISM;
char CWG1DBR  @ 0x60E;
char CWG1DBF  @ 0x60F;
char CWG1CON0 @ 0x610;
char CWG1CON1 @ 0x611;
char CWG1AS0  @ 0x612;
char CWG1AS1  @ 0x613;
char CWG1STR  @ 0x614;

char CLCnCON  @ 0x68C;
char CLCnPOL  @ 0x68D;
char CLCnSEL0 @ 0x68E;
char CLCnSEL1 @ 0x68F;
char CLCnSEL2 @ 0x690;
char CLCnSEL3 @ 0x691;
char CLCnGLS0 @ 0x692;
char CLCnGLS1 @ 0x693;
char CLCnGLS2 @ 0x694;
char CLCnGLS3 @ 0x695;
char CLCSELECT @ 0x696;
char CLCDATA  @ 0x697;

char RC1REG   @ 0x70C;
char TX1REG   @ 0x70D;
char SP1BRGL  @ 0x70E;
char SP1BRGH  @ 0x70F;
char RC1STA   @ 0x710;
char TX1STA   @ 0x711;
char BAUD1CON @ 0x712;

char RC2REG   @ 0x716;
char TX2REG   @ 0x717;
char SP2BRGL  @ 0x718;
char SP2BRGH  @ 0x719;
char RC2STA   @ 0x71A;
char TX2STA   @ 0x71B;
char BAUD2CON @ 0x71C;

char SSP1BUF  @ 0x78C;
char SSP1ADD  @ 0x78D;
char SSP1MSK  @ 0x78E;
char SSP1STAT @ 0x78F;
char SSP1CON1 @ 0x790;
char SSP1CON2 @ 0x791;
char SSP1CON3 @ 0x792;

char SSP2BUF  @ 0x796;
char SSP2ADD  @ 0x797;
char SSP2MSK  @ 0x798;
char SSP2STAT @ 0x799;
char SSP2CON1 @ 0x79A;
char SSP2CON2 @ 0x79B;
char SSP2CON3 @ 0x79C;

char CM1CON0  @ 0x80C;
char CM1CON1  @ 0x80D;
char CM1NCH   @ 0x80E;
char CM1PCH   @ 0x80F;
char CM2CON0  @ 0x810;
char CM2CON1  @ 0x811;
char CM2NCH   @ 0x812;
char CM2PCH   @ 0x813;

char CMOUT    @ 0x81F;
char CMSTAT   @ CMOUT;

char DAC1CON  @ 0x88C;
char DAC1DATL @ 0x88D;

char DAC2CON  @ 0x890;
char DAC2DATL @ 0x891;

char PWM3ERS  @ 0x98C;
char PWM3CLK  @ 0x98D;
char PWM3LDS  @ 0x98E;
char PWM3PRL  @ 0x98F;
char PWM3PRH  @ 0x990;
char PWM3CPRE @ 0x991;
char PWM3PIPOS @ 0x992;
char PWM3GIR  @ 0x993;
char PWM3GIE  @ 0x994;
char PWM3CON  @ 0x995;
char PWM3S1CFG @ 0x996;
char PWM3S1P1L @ 0x997;
char PWM3S1P1H @ 0x998;
char PWM3S1P2L @ 0x999;
char PWM3S1P2H @ 0x99A;

char PWM4ERS  @ 0xA0C;
char PWM4CLK  @ 0xA0D;
char PWM4LDS  @ 0xA0E;
char PWM4PRL  @ 0xA0F;
char PWM4PRH  @ 0xA10;
char PWM4CPRE @ 0xA11;
char PWM4PIPOS @ 0xA12;
char PWM4GIR  @ 0xA13;
char PWM4GIE  @ 0xA14;
char PWM4CON  @ 0xA15;
char PWM4S1CFG @ 0xA16;
char PWM4S1P1L @ 0xA17;
char PWM4S1P1H @ 0xA18;
char PWM4S1P2L @ 0xA19;
char PWM4S1P2H @ 0xA1A;

char NVMADRL  @ 0x1C8C;
char NVMADRH  @ 0x1C8D;
char NVMDATL  @ 0x1C8E;
char NVMDATH  @ 0x1C8F;
char NVMCON1  @ 0x1C90;
char NVMCON2  @ 0x1C91;
char SCANHADRL @ 0x1C92;
char SCANHADRH @ 0x1C93;

char SCANLADRL @ 0x1C95;
char SCANLADRH @ 0x1C96;

char SCANCON0 @ 0x1C98;
char SCANTRIG @ 0x1C99;
char CRCDATAL @ 0x1C9A;
char CRCDATAH @ 0x1C9B;
char CRCDATAU @ 0x1C9C;
char CRCDATAT @ 0x1C9D;
char CRCSHFT  @ 0x1C9E;
char CRCXOR   @ CRCSHFT;
char CRCOUTL  @ CRCSHFT;
char CRCSHFTL @ CRCSHFT;
char CRCSHIFTL @ CRCSHFT;
char CRCXORL  @ CRCSHFT;
char CRCOUTH  @ 0x1C9F;
char CRCSHFTH @ CRCOUTH;
char CRCSHIFTH @ CRCOUTH;
char CRCXORH  @ CRCOUTH;
char CRCOUTU  @ 0x1CA0;
char CRCSHFTU @ CRCOUTU;
char CRCSHIFTU @ CRCOUTU;
char CRCXORU  @ CRCOUTU;
char CRCOUTT  @ 0x1CA1;
char CRCSHFTT @ CRCOUTT;
char CRCSHIFTT @ CRCOUTT;
char CRCXORT  @ CRCOUTT;
char CRCCON0  @ 0x1CA2;
char CRCCON1  @ 0x1CA3;
char CRCCON2  @ 0x1CA4;

char ADLTHL   @ 0x1D0C;
char ADLTHH   @ 0x1D0D;
char ADUTHL   @ 0x1D0E;
char ADUTHH   @ 0x1D0F;
char ADERRL   @ 0x1D10;
char ADERRH   @ 0x1D11;
char ADSTPTL  @ 0x1D12;
char ADSTPTH  @ 0x1D13;
char ADFLTRL  @ 0x1D14;
char ADFLTRH  @ 0x1D15;
char ADACCL   @ 0x1D16;
char ADACCH   @ 0x1D17;
char ADACCU   @ 0x1D18;
char ADCNT    @ 0x1D19;
char ADRPT    @ 0x1D1A;
char ADPREVL  @ 0x1D1B;
char ADPREVH  @ 0x1D1C;
char ADRESL   @ 0x1D1D;
char ADRESH   @ 0x1D1E;
char ADPCH    @ 0x1D1F;
char ADNCH    @ 0x1D20;
char ADACQL   @ 0x1D21;
char ADACQH   @ 0x1D22;
char ADCAP    @ 0x1D23;
char ADPREL   @ 0x1D24;
char ADPREH   @ 0x1D25;
char ADCON0   @ 0x1D26;
char ADCON1   @ 0x1D27;
char ADCON2   @ 0x1D28;
char ADCON3   @ 0x1D29;
char ADSTAT   @ 0x1D2A;
char ADREF    @ 0x1D2B;
char ADACT    @ 0x1D2C;
char ADCLK    @ 0x1D2D;
char ADCG1A   @ 0x1D2E;
char ADCG1B   @ 0x1D2F;
char ADCG1C   @ 0x1D30;
char ADCG1D   @ 0x1D31;
char ADCG1E   @ 0x1D32;

char RA0PPS   @ 0x1D8C;
char RA1PPS   @ 0x1D8D;
char RA2PPS   @ 0x1D8E;
char RA3PPS   @ 0x1D8F;
char RA4PPS   @ 0x1D90;
char RA5PPS   @ 0x1D91;
char RA6PPS   @ 0x1D92;
char RA7PPS   @ 0x1D93;
char RB0PPS   @ 0x1D94;
char RB1PPS   @ 0x1D95;
char RB2PPS   @ 0x1D96;
char RB3PPS   @ 0x1D97;
char RB4PPS   @ 0x1D98;
char RB5PPS   @ 0x1D99;
char RB6PPS   @ 0x1D9A;
char RB7PPS   @ 0x1D9B;
char RC0PPS   @ 0x1D9C;
char RC1PPS   @ 0x1D9D;
char RC2PPS   @ 0x1D9E;
char RC3PPS   @ 0x1D9F;
char RC4PPS   @ 0x1DA0;
char RC5PPS   @ 0x1DA1;
char RC6PPS   @ 0x1DA2;
char RC7PPS   @ 0x1DA3;
char RD0PPS   @ 0x1DA4;
char RD1PPS   @ 0x1DA5;
char RD2PPS   @ 0x1DA6;
char RD3PPS   @ 0x1DA7;
char RD4PPS   @ 0x1DA8;
char RD5PPS   @ 0x1DA9;
char RD6PPS   @ 0x1DAA;
char RD7PPS   @ 0x1DAB;
char RE0PPS   @ 0x1DAC;
char RE1PPS   @ 0x1DAD;
char RE2PPS   @ 0x1DAE;

char PPSLOCK  @ 0x1E0C;
char INTPPS   @ 0x1E0D;
char T0CKIPPS @ 0x1E0E;
char T1CKIPPS @ 0x1E0F;
char T1GPPS   @ 0x1E10;
char T3CKIPPS @ 0x1E11;
char T3GPPS   @ 0x1E12;

char T2INPPS  @ 0x1E19;
char T4INPPS  @ 0x1E1A;
char T6INPPS  @ 0x1E1B;

char CCP1PPS  @ 0x1E1E;
char CCP2PPS  @ 0x1E1F;

char PWMIN0PPS @ 0x1E24;
char PWMIN1PPS @ 0x1E25;
char PWM1ERSPPS @ 0x1E26;
char PWM2ERSPPS @ 0x1E27;
char PWM3ERSPPS @ 0x1E28;
char PWM4ERSPPS @ 0x1E29;

char CWG1PPS  @ 0x1E39;

char CLCIN0PPS @ 0x1E3D;
char CLCIN1PPS @ 0x1E3E;
char CLCIN2PPS @ 0x1E3F;
char CLCIN3PPS @ 0x1E40;
char CK1PPS   @ 0x1E41;
char TX1CKPPS @ CK1PPS;
char RX1PPS   @ 0x1E42;
char RX1DTPPS @ RX1PPS;
char CK2PPS   @ 0x1E43;
char TX2CKPPS @ CK2PPS;
char RX2PPS   @ 0x1E44;
char RX2DTPPS @ RX2PPS;

char SSP1CLKPPS @ 0x1E47;
char SSP1DATPPS @ 0x1E48;
char SSP1SSPPS @ 0x1E49;
char SSP2CLKPPS @ 0x1E4A;
char SSP2DATPPS @ 0x1E4B;
char SSP2SSPPS @ 0x1E4C;

char ADACTPPS @ 0x1E50;

char ANSELA   @ 0x1E8C;
char WPUA     @ 0x1E8D;
char ODCONA   @ 0x1E8E;
char SLRCONA  @ 0x1E8F;
char INLVLA   @ 0x1E90;
char IOCAP    @ 0x1E91;
char IOCAN    @ 0x1E92;
char IOCAF    @ 0x1E93;

char ANSELB   @ 0x1E96;
char WPUB     @ 0x1E97;
char ODCONB   @ 0x1E98;
char SLRCONB  @ 0x1E99;
char INLVLB   @ 0x1E9A;
char IOCBP    @ 0x1E9B;
char IOCBN    @ 0x1E9C;
char IOCBF    @ 0x1E9D;

char ANSELC   @ 0x1EA0;
char WPUC     @ 0x1EA1;
char ODCONC   @ 0x1EA2;
char SLRCONC  @ 0x1EA3;
char INLVLC   @ 0x1EA4;
char IOCCP    @ 0x1EA5;
char IOCCN    @ 0x1EA6;
char IOCCF    @ 0x1EA7;

char ANSELD   @ 0x1EAA;
char WPUD     @ 0x1EAB;
char ODCOND   @ 0x1EAC;
char SLRCOND  @ 0x1EAD;
char INLVLD   @ 0x1EAE;

char ANSELE   @ 0x1EB4;
char WPUE     @ 0x1EB5;
char ODCONE   @ 0x1EB6;
char SLRCONE  @ 0x1EB7;
char INLVLE   @ 0x1EB8;
char IOCEP    @ 0x1EB9;
char IOCEN    @ 0x1EBA;
char IOCEF    @ 0x1EBB;

char RB1I2C   @ 0x1EE3;
char RB2I2C   @ 0x1EE4;

char RC3I2C   @ 0x1EEB;
char RC4I2C   @ 0x1EEC;

char RD0I2C   @ 0x1EEE;
char RD1I2C   @ 0x1EEF;

char UMTOAP   @ 0x1F0C;
char UMTOAL   @ 0x1F0D;
char UMTOAH   @ 0x1F0E;

char STATUS_SHAD @ 0x1FE4;
char WREG_SHAD @ 0x1FE5;
char BSR_SHAD @ 0x1FE6;
char PCLATH_SHAD @ 0x1FE7;
char FSR0_SHAD @ 0x1FE8;
char FSR0L_SHAD @ FSR0_SHAD;
char FSR0H_SHAD @ 0x1FE9;
char FSR1_SHAD @ 0x1FEA;
char FSR1L_SHAD @ FSR1_SHAD;
char FSR1H_SHAD @ 0x1FEB;

char STKPTR   @ 0x1FED;
char TOSL     @ 0x1FEE;
char TOSH     @ 0x1FEF;


bit INTEDG   @ INTCON.0;
bit INTCON_INTEDG @ INTCON.0;
bit PEIE     @ INTCON.6;
bit INTCON_PEIE @ INTCON.6;
bit GIE      @ INTCON.7;
bit INTCON_GIE @ INTCON.7;

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

bit INTF     @ PIR0.0;
bit PIR0_INTF @ PIR0.0;
bit IOCIF    @ PIR0.4;
bit PIR0_IOCIF @ PIR0.4;
bit TMR0IF   @ PIR0.5;
bit PIR0_TMR0IF @ PIR0.5;

bit NVMIF    @ PIR1.0;
bit PIR1_NVMIF @ PIR1.0;
bit CRCIF    @ PIR1.1;
bit PIR1_CRCIF @ PIR1.1;
bit SCANIF   @ PIR1.2;
bit PIR1_SCANIF @ PIR1.2;
bit ACTIF    @ PIR1.3;
bit PIR1_ACTIF @ PIR1.3;
bit CSWIF    @ PIR1.4;
bit PIR1_CSWIF @ PIR1.4;
bit OSFIF    @ PIR1.5;
bit PIR1_OSFIF @ PIR1.5;
bit TMR1IF   @ PIR1.6;
bit PIR1_TMR1IF @ PIR1.6;
bit TMR1GIF  @ PIR1.7;
bit PIR1_TMR1GIF @ PIR1.7;

bit TMR3IF   @ PIR2.0;
bit PIR2_TMR3IF @ PIR2.0;
bit TMR3GIF  @ PIR2.1;
bit PIR2_TMR3GIF @ PIR2.1;
bit TMR2IF   @ PIR2.2;
bit PIR2_TMR2IF @ PIR2.2;
bit TMR4IF   @ PIR2.3;
bit PIR2_TMR4IF @ PIR2.3;
bit TMR6IF   @ PIR2.4;
bit PIR2_TMR6IF @ PIR2.4;
bit CCP1IF   @ PIR2.5;
bit PIR2_CCP1IF @ PIR2.5;
bit CCP2IF   @ PIR2.6;
bit PIR2_CCP2IF @ PIR2.6;

bit PWM1PIF  @ PIR3.0;
bit PIR3_PWM1PIF @ PIR3.0;
bit PWM1IF   @ PIR3.1;
bit PIR3_PWM1IF @ PIR3.1;
bit PWM2PIF  @ PIR3.2;
bit PIR3_PWM2PIF @ PIR3.2;
bit PWM2IF   @ PIR3.3;
bit PIR3_PWM2IF @ PIR3.3;
bit PWM3PIF  @ PIR3.4;
bit PIR3_PWM3PIF @ PIR3.4;
bit PWM3IF   @ PIR3.5;
bit PIR3_PWM3IF @ PIR3.5;
bit PWM4PIF  @ PIR3.6;
bit PIR3_PWM4PIF @ PIR3.6;
bit PWM4IF   @ PIR3.7;
bit PIR3_PWM4IF @ PIR3.7;

bit NCO1IF   @ PIR4.0;
bit PIR4_NCO1IF @ PIR4.0;
bit CWG1IF   @ PIR4.1;
bit PIR4_CWG1IF @ PIR4.1;
bit CLC1IF   @ PIR4.2;
bit PIR4_CLC1IF @ PIR4.2;
bit CLC2IF   @ PIR4.3;
bit PIR4_CLC2IF @ PIR4.3;
bit CLC3IF   @ PIR4.4;
bit PIR4_CLC3IF @ PIR4.4;
bit CLC4IF   @ PIR4.5;
bit PIR4_CLC4IF @ PIR4.5;
bit TX1IF    @ PIR4.6;
bit PIR4_TX1IF @ PIR4.6;
bit RC1IF    @ PIR4.7;
bit PIR4_RC1IF @ PIR4.7;

bit TX2IF    @ PIR5.0;
bit PIR5_TX2IF @ PIR5.0;
bit RC2IF    @ PIR5.1;
bit PIR5_RC2IF @ PIR5.1;
bit SSP1IF   @ PIR5.2;
bit PIR5_SSP1IF @ PIR5.2;
bit BCL1IF   @ PIR5.3;
bit PIR5_BCL1IF @ PIR5.3;
bit SSP2IF   @ PIR5.4;
bit PIR5_SSP2IF @ PIR5.4;
bit BCL2IF   @ PIR5.5;
bit PIR5_BCL2IF @ PIR5.5;
bit CM1IF    @ PIR5.6;
bit PIR5_CM1IF @ PIR5.6;
bit CM2IF    @ PIR5.7;
bit PIR5_CM2IF @ PIR5.7;

bit ADIF     @ PIR6.0;
bit PIR6_ADIF @ PIR6.0;
bit ADTIF    @ PIR6.1;
bit PIR6_ADTIF @ PIR6.1;
bit ZCDIF    @ PIR6.2;
bit PIR6_ZCDIF @ PIR6.2;

bit INTE     @ PIE0.0;
bit PIE0_INTE @ PIE0.0;
bit IOCIE    @ PIE0.4;
bit PIE0_IOCIE @ PIE0.4;
bit TMR0IE   @ PIE0.5;
bit PIE0_TMR0IE @ PIE0.5;

bit NVMIE    @ PIE1.0;
bit PIE1_NVMIE @ PIE1.0;
bit CRCIE    @ PIE1.1;
bit PIE1_CRCIE @ PIE1.1;
bit SCANIE   @ PIE1.2;
bit PIE1_SCANIE @ PIE1.2;
bit ACTIE    @ PIE1.3;
bit PIE1_ACTIE @ PIE1.3;
bit CSWIE    @ PIE1.4;
bit PIE1_CSWIE @ PIE1.4;
bit OSFIE    @ PIE1.5;
bit PIE1_OSFIE @ PIE1.5;
bit TMR1IE   @ PIE1.6;
bit PIE1_TMR1IE @ PIE1.6;
bit TMR1GIE  @ PIE1.7;
bit PIE1_TMR1GIE @ PIE1.7;

bit TMR3IE   @ PIE2.0;
bit PIE2_TMR3IE @ PIE2.0;
bit TMR3GIE  @ PIE2.1;
bit PIE2_TMR3GIE @ PIE2.1;
bit TMR2IE   @ PIE2.2;
bit PIE2_TMR2IE @ PIE2.2;
bit TMR4IE   @ PIE2.3;
bit PIE2_TMR4IE @ PIE2.3;
bit TMR6IE   @ PIE2.4;
bit PIE2_TMR6IE @ PIE2.4;
bit CCP1IE   @ PIE2.5;
bit PIE2_CCP1IE @ PIE2.5;
bit CCP2IE   @ PIE2.6;
bit PIE2_CCP2IE @ PIE2.6;

bit PWM1PIE  @ PIE3.0;
bit PIE3_PWM1PIE @ PIE3.0;
bit PWM1IE   @ PIE3.1;
bit PIE3_PWM1IE @ PIE3.1;
bit PWM2PIE  @ PIE3.2;
bit PIE3_PWM2PIE @ PIE3.2;
bit PWM2IE   @ PIE3.3;
bit PIE3_PWM2IE @ PIE3.3;
bit PWM3PIE  @ PIE3.4;
bit PIE3_PWM3PIE @ PIE3.4;
bit PWM3IE   @ PIE3.5;
bit PIE3_PWM3IE @ PIE3.5;
bit PWM4PIE  @ PIE3.6;
bit PIE3_PWM4PIE @ PIE3.6;
bit PWM4IE   @ PIE3.7;
bit PIE3_PWM4IE @ PIE3.7;

bit NCO1IE   @ PIE4.0;
bit PIE4_NCO1IE @ PIE4.0;
bit CWG1IE   @ PIE4.1;
bit PIE4_CWG1IE @ PIE4.1;
bit CLC1IE   @ PIE4.2;
bit PIE4_CLC1IE @ PIE4.2;
bit CLC2IE   @ PIE4.3;
bit PIE4_CLC2IE @ PIE4.3;
bit CLC3IE   @ PIE4.4;
bit PIE4_CLC3IE @ PIE4.4;
bit CLC4IE   @ PIE4.5;
bit PIE4_CLC4IE @ PIE4.5;
bit TX1IE    @ PIE4.6;
bit PIE4_TX1IE @ PIE4.6;
bit RC1IE    @ PIE4.7;
bit PIE4_RC1IE @ PIE4.7;

bit TX2IE    @ PIE5.0;
bit PIE5_TX2IE @ PIE5.0;
bit RC2IE    @ PIE5.1;
bit PIE5_RC2IE @ PIE5.1;
bit SSP1IE   @ PIE5.2;
bit PIE5_SSP1IE @ PIE5.2;
bit BCL1IE   @ PIE5.3;
bit PIE5_BCL1IE @ PIE5.3;
bit SSP2IE   @ PIE5.4;
bit PIE5_SSP2IE @ PIE5.4;
bit BCL2IE   @ PIE5.5;
bit PIE5_BCL2IE @ PIE5.5;
bit CM1IE    @ PIE5.6;
bit PIE5_CM1IE @ PIE5.6;
bit CM2IE    @ PIE5.7;
bit PIE5_CM2IE @ PIE5.7;

bit ADIE     @ PIE6.0;
bit PIE6_ADIE @ PIE6.0;
bit ADTIE    @ PIE6.1;
bit PIE6_ADTIE @ PIE6.1;
bit ZCDIE    @ PIE6.2;
bit PIE6_ZCDIE @ PIE6.2;

bit NVMMD    @ PMD0.0;
bit PMD0_NVMMD @ PMD0.0;
bit CRCMD    @ PMD0.1;
bit PMD0_CRCMD @ PMD0.1;
bit SCANMD   @ PMD0.2;
bit PMD0_SCANMD @ PMD0.2;
bit SYSCMD   @ PMD0.3;
bit PMD0_SYSCMD @ PMD0.3;
bit ACTMD    @ PMD0.4;
bit PMD0_ACTMD @ PMD0.4;
bit IOCMD    @ PMD0.5;
bit PMD0_IOCMD @ PMD0.5;
bit CLKRMD   @ PMD0.6;
bit PMD0_CLKRMD @ PMD0.6;
bit TMR0MD   @ PMD0.7;
bit PMD0_TMR0MD @ PMD0.7;

bit TMR1MD   @ PMD1.0;
bit PMD1_TMR1MD @ PMD1.0;
bit TMR3MD   @ PMD1.1;
bit PMD1_TMR3MD @ PMD1.1;
bit TMR2MD   @ PMD1.2;
bit PMD1_TMR2MD @ PMD1.2;
bit TMR4MD   @ PMD1.3;
bit PMD1_TMR4MD @ PMD1.3;
bit TMR6MD   @ PMD1.4;
bit PMD1_TMR6MD @ PMD1.4;
bit CCP1MD   @ PMD1.5;
bit PMD1_CCP1MD @ PMD1.5;
bit CCP2MD   @ PMD1.6;
bit PMD1_CCP2MD @ PMD1.6;
bit PWM1MD   @ PMD1.7;
bit PMD1_PWM1MD @ PMD1.7;

bit PWM2MD   @ PMD2.0;
bit PMD2_PWM2MD @ PMD2.0;
bit PWM3MD   @ PMD2.1;
bit PMD2_PWM3MD @ PMD2.1;
bit PWM4MD   @ PMD2.2;
bit PMD2_PWM4MD @ PMD2.2;
bit NCO1MD   @ PMD2.3;
bit PMD2_NCO1MD @ PMD2.3;
bit CWG1MD   @ PMD2.4;
bit PMD2_CWG1MD @ PMD2.4;
bit CLC1MD   @ PMD2.5;
bit PMD2_CLC1MD @ PMD2.5;
bit CLC2MD   @ PMD2.6;
bit PMD2_CLC2MD @ PMD2.6;
bit CLC3MD   @ PMD2.7;
bit PMD2_CLC3MD @ PMD2.7;

bit CLC4MD   @ PMD3.0;
bit PMD3_CLC4MD @ PMD3.0;
bit UART1MD  @ PMD3.1;
bit PMD3_UART1MD @ PMD3.1;
bit UART2MD  @ PMD3.2;
bit PMD3_UART2MD @ PMD3.2;
bit MSSP1MD  @ PMD3.3;
bit PMD3_MSSP1MD @ PMD3.3;
bit MSSP2MD  @ PMD3.4;
bit PMD3_MSSP2MD @ PMD3.4;
bit FVRMD    @ PMD3.5;
bit PMD3_FVRMD @ PMD3.5;
bit CM1MD    @ PMD3.6;
bit PMD3_CM1MD @ PMD3.6;
bit CM2MD    @ PMD3.7;
bit PMD3_CM2MD @ PMD3.7;

bit ADCMD    @ PMD4.0;
bit PMD4_ADCMD @ PMD4.0;
bit DAC1MD   @ PMD4.1;
bit PMD4_DAC1MD @ PMD4.1;
bit DAC2MD   @ PMD4.2;
bit PMD4_DAC2MD @ PMD4.2;
bit ZCDMD    @ PMD4.4;
bit PMD4_ZCDMD @ PMD4.4;

bit WDTCON0_SEN @ WDTCON0.0;
bit SWDTEN   @ WDTCON0.0;
bit WDTCON0_SWDTEN @ WDTCON0.0;
bit WDTSEN   @ WDTCON0.0;
bit WDTCON0_PS0 @ WDTCON0.1;
bit WDTPS0   @ WDTCON0.1;
bit WDTCON0_PS1 @ WDTCON0.2;
bit WDTPS1   @ WDTCON0.2;
bit WDTCON0_PS2 @ WDTCON0.3;
bit WDTPS2   @ WDTCON0.3;
bit WDTCON0_PS3 @ WDTCON0.4;
bit WDTPS3   @ WDTCON0.4;
bit WDTCON0_PS4 @ WDTCON0.5;
bit WDTPS4   @ WDTCON0.5;

bit WDTCON1_WINDOW0 @ WDTCON1.0;
bit WDTWINDOW0 @ WDTCON1.0;
bit WDTCON1_WINDOW1 @ WDTCON1.1;
bit WDTWINDOW1 @ WDTCON1.1;
bit WDTCON1_WINDOW2 @ WDTCON1.2;
bit WDTWINDOW2 @ WDTCON1.2;
bit WDTCON1_CS0 @ WDTCON1.4;
bit WDTCS0   @ WDTCON1.4;
bit WDTCON1_CS1 @ WDTCON1.5;
bit WDTCS1   @ WDTCON1.5;
bit WDTCON1_CS2 @ WDTCON1.6;
bit WDTCS2   @ WDTCON1.6;

bit WDTTMR_PSCNT16 @ WDTTMR.0;
bit WDTPSCNT16 @ WDTTMR.0;
bit WDTTMR_PSCNT17 @ WDTTMR.1;
bit WDTPSCNT17 @ WDTTMR.1;
bit WDTTMR_STATE @ WDTTMR.2;
bit WDTSTATE @ WDTTMR.2;
bit WDTTMR0  @ WDTTMR.3;
bit WDTTMR_WDTTMR0 @ WDTTMR.3;
bit WDTTMR1  @ WDTTMR.4;
bit WDTTMR_WDTTMR1 @ WDTTMR.4;
bit WDTTMR2  @ WDTTMR.5;
bit WDTTMR_WDTTMR2 @ WDTTMR.5;
bit WDTTMR3  @ WDTTMR.6;
bit WDTTMR_WDTTMR3 @ WDTTMR.6;
bit WDTTMR4  @ WDTTMR.7;
bit WDTTMR_WDTTMR4 @ WDTTMR.7;

bit BORRDY   @ BORCON.0;
bit BORCON_BORRDY @ BORCON.0;
bit SBOREN   @ BORCON.7;
bit BORCON_SBOREN @ BORCON.7;

bit BOR_     @ PCON0.0;
bit PCON0_BOR_ @ PCON0.0;
bit POR_     @ PCON0.1;
bit PCON0_POR_ @ PCON0.1;
bit RI_      @ PCON0.2;
bit PCON0_RI_ @ PCON0.2;
bit RMCLR_   @ PCON0.3;
bit PCON0_RMCLR_ @ PCON0.3;
bit RWDT_    @ PCON0.4;
bit PCON0_RWDT_ @ PCON0.4;
bit WDTWV_   @ PCON0.5;
bit PCON0_WDTWV_ @ PCON0.5;
bit STKUNF   @ PCON0.6;
bit PCON0_STKUNF @ PCON0.6;
bit STKOVF   @ PCON0.7;
bit PCON0_STKOVF @ PCON0.7;

bit MEMV_    @ PCON1.1;
bit PCON1_MEMV_ @ PCON1.1;

bit T0CON0_OUTPS0 @ T0CON0.0;
bit T0OUTPS0 @ T0CON0.0;
bit T0CON0_OUTPS1 @ T0CON0.1;
bit T0OUTPS1 @ T0CON0.1;
bit T0CON0_OUTPS2 @ T0CON0.2;
bit T0OUTPS2 @ T0CON0.2;
bit T0CON0_OUTPS3 @ T0CON0.3;
bit T0OUTPS3 @ T0CON0.3;
bit T0CON0_MD16 @ T0CON0.4;
bit T0CON0_T0MD16 @ T0CON0.4;
bit T016BIT  @ T0CON0.4;
bit T0CON0_OUT @ T0CON0.5;
bit T0OUT    @ T0CON0.5;
bit T0CON0_EN @ T0CON0.7;
bit T0EN     @ T0CON0.7;

bit T0CON1_CKPS0 @ T0CON1.0;
bit T0CKPS0  @ T0CON1.0;
bit T0CON1_CKPS1 @ T0CON1.1;
bit T0CKPS1  @ T0CON1.1;
bit T0CON1_CKPS2 @ T0CON1.2;
bit T0CKPS2  @ T0CON1.2;
bit T0CON1_CKPS3 @ T0CON1.3;
bit T0CKPS3  @ T0CON1.3;
bit T0CON1_ASYNC @ T0CON1.4;
bit T0ASYNC  @ T0CON1.4;
bit T0CON1_CS0 @ T0CON1.5;
bit T0CS0    @ T0CON1.5;
bit T0CON1_CS1 @ T0CON1.6;
bit T0CS1    @ T0CON1.6;
bit T0CON1_CS2 @ T0CON1.7;
bit T0CS2    @ T0CON1.7;

bit ADFVR0   @ FVRCON.0;
bit FVRCON_ADFVR0 @ FVRCON.0;
bit ADFVR1   @ FVRCON.1;
bit FVRCON_ADFVR1 @ FVRCON.1;
bit CDAFVR0  @ FVRCON.2;
bit FVRCON_CDAFVR0 @ FVRCON.2;
bit CDAFVR1  @ FVRCON.3;
bit FVRCON_CDAFVR1 @ FVRCON.3;
bit TSRNG    @ FVRCON.4;
bit FVRCON_TSRNG @ FVRCON.4;
bit TSEN     @ FVRCON.5;
bit FVRCON_TSEN @ FVRCON.5;
bit FVRCON_RDY @ FVRCON.6;
bit FVRRDY   @ FVRCON.6;
bit FVRCON_EN @ FVRCON.7;
bit FVREN    @ FVRCON.7;

bit CPRDY    @ CPCON.0;
bit CPCON_CPRDY @ CPCON.0;
bit CPCON_CPT @ CPCON.1;
bit CPREQ    @ CPCON.2;
bit CPCON_CPREQ @ CPCON.2;
bit CPOS     @ CPCON.5;
bit CPCON_CPOS @ CPCON.5;

bit ZCDCON_INTN @ ZCDCON.0;
bit ZCDINTN  @ ZCDCON.0;
bit ZCDCON_INTP @ ZCDCON.1;
bit ZCDINTP  @ ZCDCON.1;
bit ZCDCON_POL @ ZCDCON.4;
bit ZCDPOL   @ ZCDCON.4;
bit ZCDCON_OUT @ ZCDCON.5;
bit ZCDOUT   @ ZCDCON.5;
bit ZCDCON_SEN @ ZCDCON.7;
bit ZCDSEN   @ ZCDCON.7;

bit DOZE0    @ CPUDOZE.0;
bit CPUDOZE_DOZE0 @ CPUDOZE.0;
bit DOZE1    @ CPUDOZE.1;
bit CPUDOZE_DOZE1 @ CPUDOZE.1;
bit DOZE2    @ CPUDOZE.2;
bit CPUDOZE_DOZE2 @ CPUDOZE.2;
bit DOE      @ CPUDOZE.4;
bit CPUDOZE_DOE @ CPUDOZE.4;
bit ROI      @ CPUDOZE.5;
bit CPUDOZE_ROI @ CPUDOZE.5;
bit DOZEN    @ CPUDOZE.6;
bit CPUDOZE_DOZEN @ CPUDOZE.6;
bit IDLEN    @ CPUDOZE.7;
bit CPUDOZE_IDLEN @ CPUDOZE.7;

bit NDIV0    @ OSCCON1.0;
bit OSCCON1_NDIV0 @ OSCCON1.0;
bit NDIV1    @ OSCCON1.1;
bit OSCCON1_NDIV1 @ OSCCON1.1;
bit NDIV2    @ OSCCON1.2;
bit OSCCON1_NDIV2 @ OSCCON1.2;
bit NDIV3    @ OSCCON1.3;
bit OSCCON1_NDIV3 @ OSCCON1.3;
bit NOSC0    @ OSCCON1.4;
bit OSCCON1_NOSC0 @ OSCCON1.4;
bit NOSC1    @ OSCCON1.5;
bit OSCCON1_NOSC1 @ OSCCON1.5;
bit NOSC2    @ OSCCON1.6;
bit OSCCON1_NOSC2 @ OSCCON1.6;

bit CDIV0    @ OSCCON2.0;
bit OSCCON2_CDIV0 @ OSCCON2.0;
bit CDIV1    @ OSCCON2.1;
bit OSCCON2_CDIV1 @ OSCCON2.1;
bit CDIV2    @ OSCCON2.2;
bit OSCCON2_CDIV2 @ OSCCON2.2;
bit CDIV3    @ OSCCON2.3;
bit OSCCON2_CDIV3 @ OSCCON2.3;
bit COSC0    @ OSCCON2.4;
bit OSCCON2_COSC0 @ OSCCON2.4;
bit COSC1    @ OSCCON2.5;
bit OSCCON2_COSC1 @ OSCCON2.5;
bit COSC2    @ OSCCON2.6;
bit OSCCON2_COSC2 @ OSCCON2.6;

bit NOSCR    @ OSCCON3.3;
bit OSCCON3_NOSCR @ OSCCON3.3;
bit ORDY     @ OSCCON3.4;
bit OSCCON3_ORDY @ OSCCON3.4;
bit SOSCPWR  @ OSCCON3.6;
bit OSCCON3_SOSCPWR @ OSCCON3.6;
bit CSWHOLD  @ OSCCON3.7;
bit OSCCON3_CSWHOLD @ OSCCON3.7;

bit PLLR     @ OSCSTAT.0;
bit OSCSTAT_PLLR @ OSCSTAT.0;
bit SFOR     @ OSCSTAT.1;
bit OSCSTAT_SFOR @ OSCSTAT.1;
bit ADOR     @ OSCSTAT.2;
bit OSCSTAT_ADOR @ OSCSTAT.2;
bit SOR      @ OSCSTAT.3;
bit OSCSTAT_SOR @ OSCSTAT.3;
bit LFOR     @ OSCSTAT.4;
bit OSCSTAT_LFOR @ OSCSTAT.4;
bit MFOR     @ OSCSTAT.5;
bit OSCSTAT_MFOR @ OSCSTAT.5;
bit HFOR     @ OSCSTAT.6;
bit OSCSTAT_HFOR @ OSCSTAT.6;
bit EXTOR    @ OSCSTAT.7;
bit OSCSTAT_EXTOR @ OSCSTAT.7;

bit PLLEN    @ OSCEN.0;
bit OSCEN_PLLEN @ OSCEN.0;
bit ADOEN    @ OSCEN.2;
bit OSCEN_ADOEN @ OSCEN.2;
bit SOSCEN   @ OSCEN.3;
bit OSCEN_SOSCEN @ OSCEN.3;
bit LFOEN    @ OSCEN.4;
bit OSCEN_LFOEN @ OSCEN.4;
bit MFOEN    @ OSCEN.5;
bit OSCEN_MFOEN @ OSCEN.5;
bit HFOEN    @ OSCEN.6;
bit OSCEN_HFOEN @ OSCEN.6;
bit EXTOEN   @ OSCEN.7;
bit OSCEN_EXTOEN @ OSCEN.7;

bit FRQ0     @ OSCFRQ.0;
bit FRQ1     @ OSCFRQ.1;
bit FRQ2     @ OSCFRQ.2;

bit ACTORS   @ ACTCON.1;
bit ACTCON_ACTORS @ ACTCON.1;
bit ACTLOCK  @ ACTCON.3;
bit ACTCON_ACTLOCK @ ACTCON.3;
bit ACTUD    @ ACTCON.6;
bit ACTCON_ACTUD @ ACTCON.6;
bit ACTEN    @ ACTCON.7;
bit ACTCON_ACTEN @ ACTCON.7;

bit CLKRDIV0 @ CLKRCON.0;
bit CLKRCON_DIV0 @ CLKRCON.0;
bit CLKRDIV1 @ CLKRCON.1;
bit CLKRCON_DIV1 @ CLKRCON.1;
bit CLKRDIV2 @ CLKRCON.2;
bit CLKRCON_DIV2 @ CLKRCON.2;
bit CLKRDC0  @ CLKRCON.3;
bit CLKRCON_DC0 @ CLKRCON.3;
bit CLKRDC1  @ CLKRCON.4;
bit CLKRCON_DC1 @ CLKRCON.4;
bit CLKRCON_EN @ CLKRCON.7;
bit CLKREN   @ CLKRCON.7;

bit T1CON_ON @ T1CON.0;
bit TMR1ON   @ T1CON.0;
bit T1CON_TMR1ON @ T1CON.0;
bit T1CON_RD16 @ T1CON.1;
bit T1RD16   @ T1CON.1;
bit T1CON_SYNC_ @ T1CON.2;
bit T1SYNC_  @ T1CON.2;
bit T1CKPS0  @ T1CON.4;
bit T1CON_CKPS0 @ T1CON.4;
bit T1CKPS1  @ T1CON.5;
bit T1CON_CKPS1 @ T1CON.5;

bit T1GCON_GVAL @ T1GCON.2;
bit T1GVAL   @ T1GCON.2;
bit T1GCON_GGO_nDONE @ T1GCON.3;
bit T1GGO    @ T1GCON.3;
bit T1GCON_T1GGO @ T1GCON.3;
bit T1GCON_GSPM @ T1GCON.4;
bit T1GSPM   @ T1GCON.4;
bit T1GCON_GTM @ T1GCON.5;
bit T1GTM    @ T1GCON.5;
bit T1GCON_GPOL @ T1GCON.6;
bit T1GPOL   @ T1GCON.6;
bit T1GCON_GE @ T1GCON.7;
bit T1GE     @ T1GCON.7;

bit T3CON_ON @ T3CON.0;
bit TMR3ON   @ T3CON.0;
bit T3CON_TMR3ON @ T3CON.0;
bit T3CON_RD16 @ T3CON.1;
bit T3RD16   @ T3CON.1;
bit T3CON_SYNC_ @ T3CON.2;
bit T3SYNC_  @ T3CON.2;
bit T3CKPS0  @ T3CON.4;
bit T3CON_CKPS0 @ T3CON.4;
bit T3CKPS1  @ T3CON.5;
bit T3CON_CKPS1 @ T3CON.5;

bit T3GCON_GVAL @ T3GCON.2;
bit T3GVAL   @ T3GCON.2;
bit T3GCON_GGO_nDONE @ T3GCON.3;
bit T3GGO    @ T3GCON.3;
bit T3GCON_T3GGO @ T3GCON.3;
bit T3GCON_GSPM @ T3GCON.4;
bit T3GSPM   @ T3GCON.4;
bit T3GCON_GTM @ T3GCON.5;
bit T3GTM    @ T3GCON.5;
bit T3GCON_GPOL @ T3GCON.6;
bit T3GPOL   @ T3GCON.6;
bit T3GCON_GE @ T3GCON.7;
bit T3GE     @ T3GCON.7;

bit T2OUTPS0 @ T2CON.0;
bit T2CON_OUTPS0 @ T2CON.0;
bit T2OUTPS1 @ T2CON.1;
bit T2CON_OUTPS1 @ T2CON.1;
bit T2OUTPS2 @ T2CON.2;
bit T2CON_OUTPS2 @ T2CON.2;
bit T2OUTPS3 @ T2CON.3;
bit T2CON_OUTPS3 @ T2CON.3;
bit T2CKPS0  @ T2CON.4;
bit T2CON_CKPS0 @ T2CON.4;
bit T2CKPS1  @ T2CON.5;
bit T2CON_CKPS1 @ T2CON.5;
bit T2CKPS2  @ T2CON.6;
bit T2CON_CKPS2 @ T2CON.6;
bit T2CON_ON @ T2CON.7;
bit T2ON     @ T2CON.7;
bit TMR2ON   @ T2CON.7;
bit T2CON_TMR2ON @ T2CON.7;

bit T2HLT_MODE0 @ T2HLT.0;
bit T2MODE0  @ T2HLT.0;
bit T2HLT_MODE1 @ T2HLT.1;
bit T2MODE1  @ T2HLT.1;
bit T2HLT_MODE2 @ T2HLT.2;
bit T2MODE2  @ T2HLT.2;
bit T2HLT_MODE3 @ T2HLT.3;
bit T2MODE3  @ T2HLT.3;
bit T2HLT_MODE4 @ T2HLT.4;
bit T2MODE4  @ T2HLT.4;
bit T2HLT_CSYNC @ T2HLT.5;
bit T2HLT_CKSYNC @ T2HLT.5;
bit T2CSYNC  @ T2HLT.5;
bit T2HLT_CPOL @ T2HLT.6;
bit T2HLT_CKPOL @ T2HLT.6;
bit T2CPOL   @ T2HLT.6;
bit T2HLT_PSYNC @ T2HLT.7;
bit T2PSYNC  @ T2HLT.7;

bit T4OUTPS0 @ T4CON.0;
bit T4CON_OUTPS0 @ T4CON.0;
bit T4OUTPS1 @ T4CON.1;
bit T4CON_OUTPS1 @ T4CON.1;
bit T4OUTPS2 @ T4CON.2;
bit T4CON_OUTPS2 @ T4CON.2;
bit T4OUTPS3 @ T4CON.3;
bit T4CON_OUTPS3 @ T4CON.3;
bit T4CKPS0  @ T4CON.4;
bit T4CON_CKPS0 @ T4CON.4;
bit T4CKPS1  @ T4CON.5;
bit T4CON_CKPS1 @ T4CON.5;
bit T4CKPS2  @ T4CON.6;
bit T4CON_CKPS2 @ T4CON.6;
bit T4CON_ON @ T4CON.7;
bit T4ON     @ T4CON.7;
bit TMR4ON   @ T4CON.7;
bit T4CON_TMR4ON @ T4CON.7;

bit T4HLT_MODE0 @ T4HLT.0;
bit T4MODE0  @ T4HLT.0;
bit T4HLT_MODE1 @ T4HLT.1;
bit T4MODE1  @ T4HLT.1;
bit T4HLT_MODE2 @ T4HLT.2;
bit T4MODE2  @ T4HLT.2;
bit T4HLT_MODE3 @ T4HLT.3;
bit T4MODE3  @ T4HLT.3;
bit T4HLT_MODE4 @ T4HLT.4;
bit T4MODE4  @ T4HLT.4;
bit T4HLT_CSYNC @ T4HLT.5;
bit T4HLT_CKSYNC @ T4HLT.5;
bit T4CSYNC  @ T4HLT.5;
bit T4HLT_CPOL @ T4HLT.6;
bit T4HLT_CKPOL @ T4HLT.6;
bit T4CPOL   @ T4HLT.6;
bit T4HLT_PSYNC @ T4HLT.7;
bit T4PSYNC  @ T4HLT.7;

bit T6OUTPS0 @ T6CON.0;
bit T6CON_OUTPS0 @ T6CON.0;
bit T6OUTPS1 @ T6CON.1;
bit T6CON_OUTPS1 @ T6CON.1;
bit T6OUTPS2 @ T6CON.2;
bit T6CON_OUTPS2 @ T6CON.2;
bit T6OUTPS3 @ T6CON.3;
bit T6CON_OUTPS3 @ T6CON.3;
bit T6CKPS0  @ T6CON.4;
bit T6CON_CKPS0 @ T6CON.4;
bit T6CKPS1  @ T6CON.5;
bit T6CON_CKPS1 @ T6CON.5;
bit T6CKPS2  @ T6CON.6;
bit T6CON_CKPS2 @ T6CON.6;
bit T6CON_ON @ T6CON.7;
bit T6ON     @ T6CON.7;
bit TMR6ON   @ T6CON.7;
bit T6CON_TMR6ON @ T6CON.7;

bit T6HLT_MODE0 @ T6HLT.0;
bit T6MODE0  @ T6HLT.0;
bit T6HLT_MODE1 @ T6HLT.1;
bit T6MODE1  @ T6HLT.1;
bit T6HLT_MODE2 @ T6HLT.2;
bit T6MODE2  @ T6HLT.2;
bit T6HLT_MODE3 @ T6HLT.3;
bit T6MODE3  @ T6HLT.3;
bit T6HLT_MODE4 @ T6HLT.4;
bit T6MODE4  @ T6HLT.4;
bit T6HLT_CSYNC @ T6HLT.5;
bit T6HLT_CKSYNC @ T6HLT.5;
bit T6CSYNC  @ T6HLT.5;
bit T6HLT_CPOL @ T6HLT.6;
bit T6HLT_CKPOL @ T6HLT.6;
bit T6CPOL   @ T6HLT.6;
bit T6HLT_PSYNC @ T6HLT.7;
bit T6PSYNC  @ T6HLT.7;

bit CCP1CON_MODE0 @ CCP1CON.0;
bit CCP1MODE0 @ CCP1CON.0;
bit CCP1CON_MODE1 @ CCP1CON.1;
bit CCP1MODE1 @ CCP1CON.1;
bit CCP1CON_MODE2 @ CCP1CON.2;
bit CCP1MODE2 @ CCP1CON.2;
bit CCP1CON_MODE3 @ CCP1CON.3;
bit CCP1MODE3 @ CCP1CON.3;
bit CCP1CON_FMT @ CCP1CON.4;
bit CCP1FMT  @ CCP1CON.4;
bit CCP1CON_OUT @ CCP1CON.5;
bit CCP1OUT  @ CCP1CON.5;
bit CCP1CON_EN @ CCP1CON.7;
bit CCP1EN   @ CCP1CON.7;
bit CCP1CON_P1M1 @ CCP1CON.7;

bit CCP2CON_MODE0 @ CCP2CON.0;
bit CCP2MODE0 @ CCP2CON.0;
bit CCP2CON_MODE1 @ CCP2CON.1;
bit CCP2MODE1 @ CCP2CON.1;
bit CCP2CON_MODE2 @ CCP2CON.2;
bit CCP2MODE2 @ CCP2CON.2;
bit CCP2CON_MODE3 @ CCP2CON.3;
bit CCP2MODE3 @ CCP2CON.3;
bit CCP2CON_FMT @ CCP2CON.4;
bit CCP2FMT  @ CCP2CON.4;
bit CCP2CON_OUT @ CCP2CON.5;
bit CCP2OUT  @ CCP2CON.5;
bit CCP2CON_EN @ CCP2CON.7;
bit CCP2EN   @ CCP2CON.7;
bit CCP2CON_P2M1 @ CCP2CON.7;

bit PWM1LDS_LDS0 @ PWM1LDS.0;
bit PWM1LDS_LDS1 @ PWM1LDS.1;
bit PWM1LDS_LDS2 @ PWM1LDS.2;

bit PWM1GIR_S1P1 @ PWM1GIR.0;
bit PWM1GIR_S1P1IF @ PWM1GIR.0;
bit PWM1GIR_S1P2 @ PWM1GIR.1;
bit PWM1GIR_S1P2IF @ PWM1GIR.1;

bit PWM1GIE_S1P1 @ PWM1GIE.0;
bit PWM1GIE_S1P1IE @ PWM1GIE.0;
bit PWM1GIE_S1P2 @ PWM1GIE.1;
bit PWM1GIE_S1P2IE @ PWM1GIE.1;

bit PWM1CON_ERSNOW @ PWM1CON.0;
bit PWM1CON_ERSPOL @ PWM1CON.1;
bit PWM1CON_LD @ PWM1CON.2;
bit PWM1CON_EN @ PWM1CON.7;

bit PWM1S1CFG_MODE0 @ PWM1S1CFG.0;
bit PWM1S1CFG_MODE1 @ PWM1S1CFG.1;
bit PWM1S1CFG_MODE2 @ PWM1S1CFG.2;
bit PWM1S1CFG_PPEN @ PWM1S1CFG.3;
bit PWM1S1CFG_POL1 @ PWM1S1CFG.6;
bit PWM1S1CFG_POL2 @ PWM1S1CFG.7;

bit MPWM1LD  @ PWMLOAD.0;
bit PWMLOAD_MPWM1LD @ PWMLOAD.0;
bit MPWM2LD  @ PWMLOAD.1;
bit PWMLOAD_MPWM2LD @ PWMLOAD.1;
bit MPWM3LD  @ PWMLOAD.2;
bit PWMLOAD_MPWM3LD @ PWMLOAD.2;
bit MPWM4LD  @ PWMLOAD.3;
bit PWMLOAD_MPWM4LD @ PWMLOAD.3;

bit MPWM1EN  @ PWMEN.0;
bit PWMEN_MPWM1EN @ PWMEN.0;
bit MPWM2EN  @ PWMEN.1;
bit PWMEN_MPWM2EN @ PWMEN.1;
bit MPWM3EN  @ PWMEN.2;
bit PWMEN_MPWM3EN @ PWMEN.2;
bit MPWM4EN  @ PWMEN.3;
bit PWMEN_MPWM4EN @ PWMEN.3;

bit PWM2LDS_LDS0 @ PWM2LDS.0;
bit PWM2LDS_LDS1 @ PWM2LDS.1;
bit PWM2LDS_LDS2 @ PWM2LDS.2;

bit PWM2GIR_S1P1 @ PWM2GIR.0;
bit PWM2GIR_S1P1IF @ PWM2GIR.0;
bit PWM2GIR_S1P2 @ PWM2GIR.1;
bit PWM2GIR_S1P2IF @ PWM2GIR.1;

bit PWM2GIE_S1P1 @ PWM2GIE.0;
bit PWM2GIE_S1P1IE @ PWM2GIE.0;
bit PWM2GIE_S1P2 @ PWM2GIE.1;
bit PWM2GIE_S1P2IE @ PWM2GIE.1;

bit PWM2CON_ERSNOW @ PWM2CON.0;
bit PWM2CON_ERSPOL @ PWM2CON.1;
bit PWM2CON_LD @ PWM2CON.2;
bit PWM2CON_EN @ PWM2CON.7;

bit PWM2S1CFG_MODE0 @ PWM2S1CFG.0;
bit PWM2S1CFG_MODE1 @ PWM2S1CFG.1;
bit PWM2S1CFG_MODE2 @ PWM2S1CFG.2;
bit PWM2S1CFG_PPEN @ PWM2S1CFG.3;
bit PWM2S1CFG_POL1 @ PWM2S1CFG.6;
bit PWM2S1CFG_POL2 @ PWM2S1CFG.7;

bit NCO1CON_PFM @ NCO1CON.0;
bit NCO1PFM  @ NCO1CON.0;
bit NCO1CON_POL @ NCO1CON.4;
bit NCO1POL  @ NCO1CON.4;
bit NCO1CON_OUT @ NCO1CON.5;
bit NCO1OUT  @ NCO1CON.5;
bit NCO1CON_EN @ NCO1CON.7;
bit NCO1EN   @ NCO1CON.7;

bit NCO1CLK_CKS0 @ NCO1CLK.0;
bit NCO1CKS0 @ NCO1CLK.0;
bit NCO1CLK_CKS1 @ NCO1CLK.1;
bit NCO1CKS1 @ NCO1CLK.1;
bit NCO1CLK_CKS2 @ NCO1CLK.2;
bit NCO1CKS2 @ NCO1CLK.2;
bit NCO1CLK_CKS3 @ NCO1CLK.3;
bit NCO1CKS3 @ NCO1CLK.3;
bit NCO1CLK_PWS0 @ NCO1CLK.5;
bit NCO1PWS0 @ NCO1CLK.5;
bit NCO1CLK_PWS1 @ NCO1CLK.6;
bit NCO1PWS1 @ NCO1CLK.6;
bit NCO1CLK_PWS2 @ NCO1CLK.7;
bit NCO1PWS2 @ NCO1CLK.7;

bit CWG1CLK_CS @ CWG1CLK.0;
bit CWG1CS   @ CWG1CLK.0;

bit CWG1CON0_MODE0 @ CWG1CON0.0;
bit CWG1MODE0 @ CWG1CON0.0;
bit CWG1CON0_MODE1 @ CWG1CON0.1;
bit CWG1MODE1 @ CWG1CON0.1;
bit CWG1CON0_MODE2 @ CWG1CON0.2;
bit CWG1MODE2 @ CWG1CON0.2;
bit CWG1CON0_LD @ CWG1CON0.6;
bit CWG1LD   @ CWG1CON0.6;
bit CWG1CON0_EN @ CWG1CON0.7;
bit CWG1CON0_G1EN @ CWG1CON0.7;
bit CWG1EN   @ CWG1CON0.7;

bit CWG1CON1_POLA @ CWG1CON1.0;
bit CWG1POLA @ CWG1CON1.0;
bit CWG1CON1_POLB @ CWG1CON1.1;
bit CWG1POLB @ CWG1CON1.1;
bit CWG1CON1_POLC @ CWG1CON1.2;
bit CWG1POLC @ CWG1CON1.2;
bit CWG1CON1_POLD @ CWG1CON1.3;
bit CWG1POLD @ CWG1CON1.3;
bit CWG1CON1_IN @ CWG1CON1.5;
bit CWG1IN   @ CWG1CON1.5;

bit CWG1AS0_LSAC0 @ CWG1AS0.2;
bit CWG1LSAC0 @ CWG1AS0.2;
bit CWG1AS0_LSCA1 @ CWG1AS0.3;
bit CWG1LSAC1 @ CWG1AS0.3;
bit CWG1AS0_LSBD0 @ CWG1AS0.4;
bit CWG1LSBD0 @ CWG1AS0.4;
bit CWG1AS0_LSBD1 @ CWG1AS0.5;
bit CWG1LSBD1 @ CWG1AS0.5;
bit CWG1AS0_REN @ CWG1AS0.6;
bit CWG1REN  @ CWG1AS0.6;
bit CWG1AS0_SHUTDOWN @ CWG1AS0.7;
bit CWG1SHUTDOWN @ CWG1AS0.7;

bit CWG1AS1_AS0E @ CWG1AS1.0;
bit CWG1AS1_AS1E @ CWG1AS1.1;
bit CWG1AS1_AS2E @ CWG1AS1.2;
bit CWG1AS1_AS3E @ CWG1AS1.3;
bit CWG1AS1_AS4E @ CWG1AS1.4;
bit CWG1AS1_AS5E @ CWG1AS1.5;
bit CWG1AS1_AS6E @ CWG1AS1.6;
bit CWG1AS1_AS7E @ CWG1AS1.7;

bit CWG1STR_STRA @ CWG1STR.0;
bit CWG1STRA @ CWG1STR.0;
bit CWG1STR_STRB @ CWG1STR.1;
bit CWG1STRB @ CWG1STR.1;
bit CWG1STR_STRC @ CWG1STR.2;
bit CWG1STRC @ CWG1STR.2;
bit CWG1STR_STRD @ CWG1STR.3;
bit CWG1STRD @ CWG1STR.3;
bit CWG1STR_OVRA @ CWG1STR.4;
bit CWG1OVRA @ CWG1STR.4;
bit CWG1STR_OVRB @ CWG1STR.5;
bit CWG1OVRB @ CWG1STR.5;
bit CWG1STR_OVRC @ CWG1STR.6;
bit CWG1OVRC @ CWG1STR.6;
bit CWG1STR_OVRD @ CWG1STR.7;
bit CWG1OVRD @ CWG1STR.7;

bit CLCnCON_MODE0 @ CLCnCON.0;
bit CLCnCON_MODE1 @ CLCnCON.1;
bit CLCnCON_MODE2 @ CLCnCON.2;
bit CLCnCON_INTN @ CLCnCON.3;
bit CLCnCON_INTP @ CLCnCON.4;
bit CLCnCON_OUT @ CLCnCON.5;
bit CLCnCON_EN @ CLCnCON.7;

bit CLCnPOL_G1POL @ CLCnPOL.0;
bit CLCnPOL_G2POL @ CLCnPOL.1;
bit CLCnPOL_G3POL @ CLCnPOL.2;
bit CLCnPOL_G4POL @ CLCnPOL.3;
bit CLCnPOL_POL @ CLCnPOL.7;

bit CLCnGLS0_G1D1N @ CLCnGLS0.0;
bit CLCnGLS0_G1D1T @ CLCnGLS0.1;
bit CLCnGLS0_G1D2N @ CLCnGLS0.2;
bit CLCnGLS0_G1D2T @ CLCnGLS0.3;
bit CLCnGLS0_G1D3N @ CLCnGLS0.4;
bit CLCnGLS0_G1D3T @ CLCnGLS0.5;
bit CLCnGLS0_G1D4N @ CLCnGLS0.6;
bit CLCnGLS0_G1D4T @ CLCnGLS0.7;

bit CLCnGLS1_G2D1N @ CLCnGLS1.0;
bit CLCnGLS1_G2D1T @ CLCnGLS1.1;
bit CLCnGLS1_G2D2N @ CLCnGLS1.2;
bit CLCnGLS1_G2D2T @ CLCnGLS1.3;
bit CLCnGLS1_G2D3N @ CLCnGLS1.4;
bit CLCnGLS1_G2D3T @ CLCnGLS1.5;
bit CLCnGLS1_G2D4N @ CLCnGLS1.6;
bit CLCnGLS1_G2D4T @ CLCnGLS1.7;

bit CLCnGLS2_G3D1N @ CLCnGLS2.0;
bit CLCnGLS2_G3D1T @ CLCnGLS2.1;
bit CLCnGLS2_G3D2N @ CLCnGLS2.2;
bit CLCnGLS2_G3D2T @ CLCnGLS2.3;
bit CLCnGLS2_G3D3N @ CLCnGLS2.4;
bit CLCnGLS2_G3D3T @ CLCnGLS2.5;
bit CLCnGLS2_G3D4N @ CLCnGLS2.6;
bit CLCnGLS2_G3D4T @ CLCnGLS2.7;

bit CLCnGLS3_G4D1N @ CLCnGLS3.0;
bit CLCnGLS3_G4D1T @ CLCnGLS3.1;
bit CLCnGLS3_G4D2N @ CLCnGLS3.2;
bit CLCnGLS3_G4D2T @ CLCnGLS3.3;
bit CLCnGLS3_G4D3N @ CLCnGLS3.4;
bit CLCnGLS3_G4D3T @ CLCnGLS3.5;
bit CLCnGLS3_G4D4N @ CLCnGLS3.6;
bit CLCnGLS3_G4D4T @ CLCnGLS3.7;

bit CLC1OUT  @ CLCDATA.0;
bit CLCDATA_CLC1OUT @ CLCDATA.0;
bit CLC2OUT  @ CLCDATA.1;
bit CLCDATA_CLC2OUT @ CLCDATA.1;
bit CLC3OUT  @ CLCDATA.2;
bit CLCDATA_CLC3OUT @ CLCDATA.2;
bit CLC4OUT  @ CLCDATA.3;
bit CLCDATA_CLC4OUT @ CLCDATA.3;

bit RC1STA_RX9D @ RC1STA.0;
bit RC1STA_OERR @ RC1STA.1;
bit RC1STA_FERR @ RC1STA.2;
bit RC1STA_ADDEN @ RC1STA.3;
bit RC1STA_CREN @ RC1STA.4;
bit RC1STA_SREN @ RC1STA.5;
bit RC1STA_RX9 @ RC1STA.6;
bit RC1STA_SPEN @ RC1STA.7;

bit TX1STA_TX9D @ TX1STA.0;
bit TX1STA_TRMT @ TX1STA.1;
bit TX1STA_BRGH @ TX1STA.2;
bit TX1STA_SENDB @ TX1STA.3;
bit TX1STA_SYNC @ TX1STA.4;
bit TX1STA_TXEN @ TX1STA.5;
bit TX1STA_TX9 @ TX1STA.6;
bit TX1STA_CSRC @ TX1STA.7;

bit BAUD1CON_ABDEN @ BAUD1CON.0;
bit BAUD1CON_WUE @ BAUD1CON.1;
bit BAUD1CON_BRG16 @ BAUD1CON.3;
bit BAUD1CON_SCKP @ BAUD1CON.4;
bit BAUD1CON_RCIDL @ BAUD1CON.6;
bit BAUD1CON_ABDOVF @ BAUD1CON.7;

bit RC2STA_RX9D @ RC2STA.0;
bit RC2STA_OERR @ RC2STA.1;
bit RC2STA_FERR @ RC2STA.2;
bit RC2STA_ADDEN @ RC2STA.3;
bit RC2STA_CREN @ RC2STA.4;
bit RC2STA_SREN @ RC2STA.5;
bit RC2STA_RX9 @ RC2STA.6;
bit RC2STA_SPEN @ RC2STA.7;

bit TX2STA_TX9D @ TX2STA.0;
bit TX2STA_TRMT @ TX2STA.1;
bit TX2STA_BRGH @ TX2STA.2;
bit TX2STA_SENDB @ TX2STA.3;
bit TX2STA_SYNC @ TX2STA.4;
bit TX2STA_TXEN @ TX2STA.5;
bit TX2STA_TX9 @ TX2STA.6;
bit TX2STA_CSRC @ TX2STA.7;

bit BAUD2CON_ABDEN @ BAUD2CON.0;
bit BAUD2CON_WUE @ BAUD2CON.1;
bit BAUD2CON_BRG16 @ BAUD2CON.3;
bit BAUD2CON_SCKP @ BAUD2CON.4;
bit BAUD2CON_RCIDL @ BAUD2CON.6;
bit BAUD2CON_ABDOVF @ BAUD2CON.7;

bit SSP1STAT_BF @ SSP1STAT.0;
bit SSP1STAT_UA @ SSP1STAT.1;
bit SSP1STAT_R_nW @ SSP1STAT.2;
bit SSP1STAT_R_W @ SSP1STAT.2;
bit SSP1STAT_W_ @ SSP1STAT.2;
bit SSP1STAT_WRITE_ @ SSP1STAT.2;
bit SSP1STAT_READ_WRITE @ SSP1STAT.2;
bit SSP1STAT_I2C_READ @ SSP1STAT.2;
bit SSP1STAT_R @ SSP1STAT.2;
bit SSP1STAT_RW @ SSP1STAT.2;
bit SSP1STAT_W2_ @ SSP1STAT.2;
bit SSP1STAT_WRITE1_ @ SSP1STAT.2;
bit SSP1STAT_S @ SSP1STAT.3;
bit SSP1STAT_I2C_START @ SSP1STAT.3;
bit SSP1STAT_START @ SSP1STAT.3;
bit SSP1STAT_P @ SSP1STAT.4;
bit SSP1STAT_I2C_STOP @ SSP1STAT.4;
bit SSP1STAT_STOP @ SSP1STAT.4;
bit SSP1STAT_D_nA @ SSP1STAT.5;
bit SSP1STAT_D_A @ SSP1STAT.5;
bit SSP1STAT_A_ @ SSP1STAT.5;
bit SSP1STAT_ADDRESS_ @ SSP1STAT.5;
bit SSP1STAT_DATA_ADDRESS @ SSP1STAT.5;
bit SSP1STAT_I2C_DAT @ SSP1STAT.5;
bit SSP1STAT_D @ SSP1STAT.5;
bit SSP1STAT_DA @ SSP1STAT.5;
bit SSP1STAT_A2_ @ SSP1STAT.5;
bit SSP1STAT_ADDRESS1_ @ SSP1STAT.5;
bit SSP1STAT_CKE @ SSP1STAT.6;
bit SSP1STAT_SMP @ SSP1STAT.7;

bit SSP1CON1_SSPM0 @ SSP1CON1.0;
bit SSP1CON1_SSPM1 @ SSP1CON1.1;
bit SSP1CON1_SSPM2 @ SSP1CON1.2;
bit SSP1CON1_SSPM3 @ SSP1CON1.3;
bit SSP1CON1_CKP @ SSP1CON1.4;
bit SSP1CON1_SSPEN @ SSP1CON1.5;
bit SSP1CON1_SSPOV @ SSP1CON1.6;
bit SSP1CON1_WCOL @ SSP1CON1.7;

bit SSP1CON2_SEN @ SSP1CON2.0;
bit SSP1CON2_RSEN @ SSP1CON2.1;
bit SSP1CON2_ADMSK1 @ SSP1CON2.1;
bit SSP1CON2_PEN @ SSP1CON2.2;
bit SSP1CON2_ADMSK2 @ SSP1CON2.2;
bit SSP1CON2_RCEN @ SSP1CON2.3;
bit SSP1CON2_ADMSK3 @ SSP1CON2.3;
bit SSP1CON2_ACKEN @ SSP1CON2.4;
bit SSP1CON2_ADMSK4 @ SSP1CON2.4;
bit SSP1CON2_ACKDT @ SSP1CON2.5;
bit SSP1CON2_ADMSK5 @ SSP1CON2.5;
bit SSP1CON2_ACKSTAT @ SSP1CON2.6;
bit SSP1CON2_GCEN @ SSP1CON2.7;

bit SSP1CON3_DHEN @ SSP1CON3.0;
bit SSP1CON3_AHEN @ SSP1CON3.1;
bit SSP1CON3_SBCDE @ SSP1CON3.2;
bit SSP1CON3_SDAHT @ SSP1CON3.3;
bit SSP1CON3_BOEN @ SSP1CON3.4;
bit SSP1CON3_SCIE @ SSP1CON3.5;
bit SSP1CON3_PCIE @ SSP1CON3.6;
bit SSP1CON3_ACKTIM @ SSP1CON3.7;

bit SSP2STAT_BF @ SSP2STAT.0;
bit SSP2STAT_UA @ SSP2STAT.1;
bit SSP2STAT_R_nW @ SSP2STAT.2;
bit SSP2STAT_R_W @ SSP2STAT.2;
bit SSP2STAT_W_ @ SSP2STAT.2;
bit SSP2STAT_WRITE_ @ SSP2STAT.2;
bit SSP2STAT_READ_WRITE @ SSP2STAT.2;
bit SSP2STAT_I2C_READ @ SSP2STAT.2;
bit SSP2STAT_R @ SSP2STAT.2;
bit SSP2STAT_RW @ SSP2STAT.2;
bit SSP2STAT_W2_ @ SSP2STAT.2;
bit SSP2STAT_WRITE2_ @ SSP2STAT.2;
bit SSP2STAT_S @ SSP2STAT.3;
bit SSP2STAT_I2C_START @ SSP2STAT.3;
bit SSP2STAT_START @ SSP2STAT.3;
bit SSP2STAT_P @ SSP2STAT.4;
bit SSP2STAT_I2C_STOP @ SSP2STAT.4;
bit SSP2STAT_STOP @ SSP2STAT.4;
bit SSP2STAT_D_nA @ SSP2STAT.5;
bit SSP2STAT_D_A @ SSP2STAT.5;
bit SSP2STAT_A_ @ SSP2STAT.5;
bit SSP2STAT_ADDRESS_ @ SSP2STAT.5;
bit SSP2STAT_DATA_ADDRESS @ SSP2STAT.5;
bit SSP2STAT_I2C_DAT @ SSP2STAT.5;
bit SSP2STAT_D @ SSP2STAT.5;
bit SSP2STAT_DA @ SSP2STAT.5;
bit SSP2STAT_A2_ @ SSP2STAT.5;
bit SSP2STAT_ADDRESS2_ @ SSP2STAT.5;
bit SSP2STAT_CKE @ SSP2STAT.6;
bit SSP2STAT_SMP @ SSP2STAT.7;

bit SSP2CON1_SSPM0 @ SSP2CON1.0;
bit SSP2CON1_SSPM1 @ SSP2CON1.1;
bit SSP2CON1_SSPM2 @ SSP2CON1.2;
bit SSP2CON1_SSPM3 @ SSP2CON1.3;
bit SSP2CON1_CKP @ SSP2CON1.4;
bit SSP2CON1_SSPEN @ SSP2CON1.5;
bit SSP2CON1_SSPOV @ SSP2CON1.6;
bit SSP2CON1_WCOL @ SSP2CON1.7;

bit SSP2CON2_SEN @ SSP2CON2.0;
bit SSP2CON2_RSEN @ SSP2CON2.1;
bit SSP2CON2_ADMSK1 @ SSP2CON2.1;
bit SSP2CON2_PEN @ SSP2CON2.2;
bit SSP2CON2_ADMSK2 @ SSP2CON2.2;
bit SSP2CON2_RCEN @ SSP2CON2.3;
bit SSP2CON2_ADMSK3 @ SSP2CON2.3;
bit SSP2CON2_ACKEN @ SSP2CON2.4;
bit SSP2CON2_ADMSK4 @ SSP2CON2.4;
bit SSP2CON2_ACKDT @ SSP2CON2.5;
bit SSP2CON2_ADMSK5 @ SSP2CON2.5;
bit SSP2CON2_ACKSTAT @ SSP2CON2.6;
bit SSP2CON2_GCEN @ SSP2CON2.7;

bit SSP2CON3_DHEN @ SSP2CON3.0;
bit SSP2CON3_AHEN @ SSP2CON3.1;
bit SSP2CON3_SBCDE @ SSP2CON3.2;
bit SSP2CON3_SDAHT @ SSP2CON3.3;
bit SSP2CON3_BOEN @ SSP2CON3.4;
bit SSP2CON3_SCIE @ SSP2CON3.5;
bit SSP2CON3_PCIE @ SSP2CON3.6;
bit SSP2CON3_ACKTIM @ SSP2CON3.7;

bit CM1CON0_SYNC @ CM1CON0.0;
bit C1SYNC   @ CM1CON0.0;
bit CM1CON0_HYS @ CM1CON0.1;
bit C1HYS    @ CM1CON0.1;
bit CM1CON0_POL @ CM1CON0.4;
bit C1POL    @ CM1CON0.4;
bit CM1CON0_OUT @ CM1CON0.6;
bit C1OUT    @ CM1CON0.6;
bit CM1CON0_EN @ CM1CON0.7;
bit C1EN     @ CM1CON0.7;

bit CM1CON1_INTN @ CM1CON1.0;
bit C1INTN   @ CM1CON1.0;
bit CM1CON1_INTP @ CM1CON1.1;
bit C1INTP   @ CM1CON1.1;

bit CM1NCH_NCH0 @ CM1NCH.0;
bit C1NCH0   @ CM1NCH.0;
bit CM1NCH_NCH1 @ CM1NCH.1;
bit C1NCH1   @ CM1NCH.1;
bit CM1NCH_NCH2 @ CM1NCH.2;
bit C1NCH2   @ CM1NCH.2;

bit CM1PCH_PCH0 @ CM1PCH.0;
bit C1PCH0   @ CM1PCH.0;
bit CM1PCH_PCH1 @ CM1PCH.1;
bit C1PCH1   @ CM1PCH.1;
bit CM1PCH_PCH2 @ CM1PCH.2;
bit C1PCH2   @ CM1PCH.2;

bit CM2CON0_SYNC @ CM2CON0.0;
bit C2SYNC   @ CM2CON0.0;
bit CM2CON0_HYS @ CM2CON0.1;
bit C2HYS    @ CM2CON0.1;
bit CM2CON0_POL @ CM2CON0.4;
bit C2POL    @ CM2CON0.4;
bit CM2CON0_OUT @ CM2CON0.6;
bit C2OUT    @ CM2CON0.6;
bit CM2CON0_EN @ CM2CON0.7;
bit C2EN     @ CM2CON0.7;

bit CM2CON1_INTN @ CM2CON1.0;
bit C2INTN   @ CM2CON1.0;
bit CM2CON1_INTP @ CM2CON1.1;
bit C2INTP   @ CM2CON1.1;

bit CM2NCH_NCH0 @ CM2NCH.0;
bit C2NCH0   @ CM2NCH.0;
bit CM2NCH_NCH1 @ CM2NCH.1;
bit C2NCH1   @ CM2NCH.1;
bit CM2NCH_NCH2 @ CM2NCH.2;
bit C2NCH2   @ CM2NCH.2;

bit CM2PCH_PCH0 @ CM2PCH.0;
bit C2PCH0   @ CM2PCH.0;
bit CM2PCH_PCH1 @ CM2PCH.1;
bit C2PCH1   @ CM2PCH.1;
bit CM2PCH_PCH2 @ CM2PCH.2;
bit C2PCH2   @ CM2PCH.2;

bit CMOUT_C1OUT @ CMOUT.0;
bit MC1OUT   @ CMOUT.0;
bit CMOUT_C2OUT @ CMOUT.1;
bit MC2OUT   @ CMOUT.1;

bit DAC1CON_NSS @ DAC1CON.0;
bit DAC1NSS  @ DAC1CON.0;
bit DAC1CON_PSS0 @ DAC1CON.2;
bit DAC1PSS0 @ DAC1CON.2;
bit DAC1CON_PSS1 @ DAC1CON.3;
bit DAC1PSS1 @ DAC1CON.3;
bit DAC1CON_OE0 @ DAC1CON.4;
bit DAC1OE0  @ DAC1CON.4;
bit DAC1CON_OE1 @ DAC1CON.5;
bit DAC1OE1  @ DAC1CON.5;
bit DAC1CON_REFRNG @ DAC1CON.6;
bit DAC1REFRNG @ DAC1CON.6;
bit DAC1CON_EN @ DAC1CON.7;
bit DAC1EN   @ DAC1CON.7;

bit DAC2CON_NSS @ DAC2CON.0;
bit DAC2NSS  @ DAC2CON.0;
bit DAC2CON_PSS0 @ DAC2CON.2;
bit DAC2PSS0 @ DAC2CON.2;
bit DAC2CON_PSS1 @ DAC2CON.3;
bit DAC2PSS1 @ DAC2CON.3;
bit DAC2CON_EN @ DAC2CON.7;
bit DAC2EN   @ DAC2CON.7;

bit PWM3LDS_LDS0 @ PWM3LDS.0;
bit PWM3LDS_LDS1 @ PWM3LDS.1;
bit PWM3LDS_LDS2 @ PWM3LDS.2;

bit PWM3GIR_S1P1 @ PWM3GIR.0;
bit PWM3GIR_S1P1IF @ PWM3GIR.0;
bit PWM3GIR_S1P2 @ PWM3GIR.1;
bit PWM3GIR_S1P2IF @ PWM3GIR.1;

bit PWM3GIE_S1P1 @ PWM3GIE.0;
bit PWM3GIE_S1P1IE @ PWM3GIE.0;
bit PWM3GIE_S1P2 @ PWM3GIE.1;
bit PWM3GIE_S1P2IE @ PWM3GIE.1;

bit PWM3CON_ERSNOW @ PWM3CON.0;
bit PWM3CON_ERSPOL @ PWM3CON.1;
bit PWM3CON_LD @ PWM3CON.2;
bit PWM3CON_EN @ PWM3CON.7;

bit PWM3S1CFG_MODE0 @ PWM3S1CFG.0;
bit PWM3S1CFG_MODE1 @ PWM3S1CFG.1;
bit PWM3S1CFG_MODE2 @ PWM3S1CFG.2;
bit PWM3S1CFG_PPEN @ PWM3S1CFG.3;
bit PWM3S1CFG_POL1 @ PWM3S1CFG.6;
bit PWM3S1CFG_POL2 @ PWM3S1CFG.7;

bit PWM4LDS_LDS0 @ PWM4LDS.0;
bit PWM4LDS_LDS1 @ PWM4LDS.1;
bit PWM4LDS_LDS2 @ PWM4LDS.2;

bit PWM4GIR_S1P1 @ PWM4GIR.0;
bit PWM4GIR_S1P1IF @ PWM4GIR.0;
bit PWM4GIR_S1P2 @ PWM4GIR.1;
bit PWM4GIR_S1P2IF @ PWM4GIR.1;

bit PWM4GIE_S1P1 @ PWM4GIE.0;
bit PWM4GIE_S1P1IE @ PWM4GIE.0;
bit PWM4GIE_S1P2 @ PWM4GIE.1;
bit PWM4GIE_S1P2IE @ PWM4GIE.1;

bit PWM4CON_ERSNOW @ PWM4CON.0;
bit PWM4CON_ERSPOL @ PWM4CON.1;
bit PWM4CON_LD @ PWM4CON.2;
bit PWM4CON_EN @ PWM4CON.7;

bit PWM4S1CFG_MODE0 @ PWM4S1CFG.0;
bit PWM4S1CFG_MODE1 @ PWM4S1CFG.1;
bit PWM4S1CFG_MODE2 @ PWM4S1CFG.2;
bit PWM4S1CFG_PPEN @ PWM4S1CFG.3;
bit PWM4S1CFG_POL1 @ PWM4S1CFG.6;
bit PWM4S1CFG_POL2 @ PWM4S1CFG.7;

bit RD       @ NVMCON1.0;
bit NVMCON1_RD @ NVMCON1.0;
bit WR       @ NVMCON1.1;
bit NVMCON1_WR @ NVMCON1.1;
bit WREN     @ NVMCON1.2;
bit NVMCON1_WREN @ NVMCON1.2;
bit WRERR    @ NVMCON1.3;
bit NVMCON1_WRERR @ NVMCON1.3;
bit FREE     @ NVMCON1.4;
bit NVMCON1_FREE @ NVMCON1.4;
bit LWLO     @ NVMCON1.5;
bit NVMCON1_LWLO @ NVMCON1.5;
bit NVMREGS  @ NVMCON1.6;
bit NVMCON1_NVMREGS @ NVMCON1.6;

bit SCANCON0_INTM @ SCANCON0.3;
bit SCANCON0_DABORT @ SCANCON0.4;
bit SCANCON0_BUSY @ SCANCON0.5;
bit SCANCON0_SGO @ SCANCON0.6;
bit SCANCON0_EN @ SCANCON0.7;

bit CRCCON0_FULL @ CRCCON0.0;
bit CRCCON0_SHIFTM @ CRCCON0.1;
bit CRCCON0_LENDIAN @ CRCCON0.1;
bit CRCCON0_SETUP0 @ CRCCON0.2;
bit CRCCON0_SETUP1 @ CRCCON0.3;
bit CRCCON0_ACCMOD @ CRCCON0.4;
bit CRCCON0_ACCM @ CRCCON0.4;
bit CRCBUSY  @ CRCCON0.5;
bit CRCCON0_BUSY @ CRCCON0.5;
bit CRCGO    @ CRCCON0.6;
bit CRCCON0_GO @ CRCCON0.6;
bit CRCEN    @ CRCCON0.7;
bit CRCCON0_EN @ CRCCON0.7;

bit ADACC16  @ ADACCU.0;
bit ADACCU_ACC16 @ ADACCU.0;
bit ADACC17  @ ADACCU.1;
bit ADACCU_ACC17 @ ADACCU.1;

bit ADCON0_GO @ ADCON0.0;
bit ADGO     @ ADCON0.0;
bit ADCON0_DONE @ ADCON0.0;
bit ADCON0_GO_nDONE @ ADCON0.0;
bit ADCON0_IC @ ADCON0.1;
bit ADIC     @ ADCON0.1;
bit ADCON0_FM0 @ ADCON0.2;
bit ADFM0    @ ADCON0.2;
bit ADCON0_FM1 @ ADCON0.3;
bit ADFM1    @ ADCON0.3;
bit ADCON0_CS @ ADCON0.4;
bit ADCS     @ ADCON0.4;
bit ADCON0_CONT @ ADCON0.6;
bit ADCONT   @ ADCON0.6;
bit ADCON0_ON @ ADCON0.7;
bit ADON     @ ADCON0.7;

bit ADCON1_DSEN @ ADCON1.0;
bit ADDSEN   @ ADCON1.0;
bit ADCON1_PCSC @ ADCON1.1;
bit ADPCSC   @ ADCON1.1;
bit ADCON1_GPOL @ ADCON1.5;
bit ADGPOL   @ ADCON1.5;
bit ADCON1_IPEN @ ADCON1.6;
bit ADIPEN   @ ADCON1.6;
bit ADCON1_PPOL @ ADCON1.7;
bit ADPPOL   @ ADCON1.7;

bit ADMD0    @ ADCON2.0;
bit ADCON2_MODE0 @ ADCON2.0;
bit ADCON2_MD0 @ ADCON2.0;
bit ADMD1    @ ADCON2.1;
bit ADCON2_MODE1 @ ADCON2.1;
bit ADCON2_MD1 @ ADCON2.1;
bit ADMD2    @ ADCON2.2;
bit ADCON2_MODE2 @ ADCON2.2;
bit ADCON2_MD2 @ ADCON2.2;
bit ADCON2_ACLR @ ADCON2.3;
bit ADACLR   @ ADCON2.3;
bit ADCRS0   @ ADCON2.4;
bit ADCON2_CRS0 @ ADCON2.4;
bit ADCRS1   @ ADCON2.5;
bit ADCON2_CRS1 @ ADCON2.5;
bit ADCRS2   @ ADCON2.6;
bit ADCON2_CRS2 @ ADCON2.6;
bit ADCON2_PSIS @ ADCON2.7;
bit ADPSIS   @ ADCON2.7;

bit ADTMD0   @ ADCON3.0;
bit ADCON3_TMD0 @ ADCON3.0;
bit ADTMD1   @ ADCON3.1;
bit ADCON3_TMD1 @ ADCON3.1;
bit ADTMD2   @ ADCON3.2;
bit ADCON3_TMD2 @ ADCON3.2;
bit ADCON3_SOI @ ADCON3.3;
bit ADSOI    @ ADCON3.3;
bit ADCALC0  @ ADCON3.4;
bit ADCON3_CALC0 @ ADCON3.4;
bit ADCALC1  @ ADCON3.5;
bit ADCON3_CALC1 @ ADCON3.5;
bit ADCALC2  @ ADCON3.6;
bit ADCON3_CALC2 @ ADCON3.6;

bit ADSTAT0  @ ADSTAT.0;
bit ADSTAT_STAT0 @ ADSTAT.0;
bit ADSTAT1  @ ADSTAT.1;
bit ADSTAT_STAT1 @ ADSTAT.1;
bit ADSTAT2  @ ADSTAT.2;
bit ADSTAT_STAT2 @ ADSTAT.2;
bit ADSTAT_MATH @ ADSTAT.4;
bit ADMATH   @ ADSTAT.4;
bit ADSTAT_LTHR @ ADSTAT.5;
bit ADLTHR   @ ADSTAT.5;
bit ADSTAT_UTHR @ ADSTAT.6;
bit ADUTHR   @ ADSTAT.6;
bit ADSTAT_AOV @ ADSTAT.7;
bit ADAOV    @ ADSTAT.7;
bit ADSTAT_ADOV @ ADSTAT.7;

bit ADREF_PREF0 @ ADREF.0;
bit ADPREF0  @ ADREF.0;
bit ADREF_PREF1 @ ADREF.1;
bit ADPREF1  @ ADREF.1;
bit ADREF_NREF0 @ ADREF.4;
bit ADNREF0  @ ADREF.4;

bit ADCG1E_CGE0 @ ADCG1E.0;
bit ADCG1E_CGE1 @ ADCG1E.1;
bit ADCG1E_CGE2 @ ADCG1E.2;

bit PPSLOCKED @ PPSLOCK.0;
bit PPSLOCK_PPSLOCKED @ PPSLOCK.0;

bit ANSELA0  @ ANSELA.0;
bit ANSA0    @ ANSELA.0;
bit ANSELA1  @ ANSELA.1;
bit ANSA1    @ ANSELA.1;
bit ANSELA2  @ ANSELA.2;
bit ANSA2    @ ANSELA.2;
bit ANSELA3  @ ANSELA.3;
bit ANSA3    @ ANSELA.3;
bit ANSELA4  @ ANSELA.4;
bit ANSA4    @ ANSELA.4;
bit ANSELA5  @ ANSELA.5;
bit ANSA5    @ ANSELA.5;
bit ANSELA6  @ ANSELA.6;
bit ANSA6    @ ANSELA.6;
bit ANSELA7  @ ANSELA.7;
bit ANSA7    @ ANSELA.7;

bit WPUA0    @ WPUA.0;
bit WPUA1    @ WPUA.1;
bit WPUA2    @ WPUA.2;
bit WPUA3    @ WPUA.3;
bit WPUA4    @ WPUA.4;
bit WPUA5    @ WPUA.5;
bit WPUA6    @ WPUA.6;
bit WPUA7    @ WPUA.7;

bit ODCA0    @ ODCONA.0;
bit ODCA1    @ ODCONA.1;
bit ODCA2    @ ODCONA.2;
bit ODCA3    @ ODCONA.3;
bit ODCA4    @ ODCONA.4;
bit ODCA5    @ ODCONA.5;
bit ODCA6    @ ODCONA.6;
bit ODCA7    @ ODCONA.7;

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

bit IOCAP0   @ IOCAP.0;
bit IOCAP1   @ IOCAP.1;
bit IOCAP2   @ IOCAP.2;
bit IOCAP3   @ IOCAP.3;
bit IOCAP4   @ IOCAP.4;
bit IOCAP5   @ IOCAP.5;
bit IOCAP6   @ IOCAP.6;
bit IOCAP7   @ IOCAP.7;

bit IOCAN0   @ IOCAN.0;
bit IOCAN1   @ IOCAN.1;
bit IOCAN2   @ IOCAN.2;
bit IOCAN3   @ IOCAN.3;
bit IOCAN4   @ IOCAN.4;
bit IOCAN5   @ IOCAN.5;
bit IOCAN6   @ IOCAN.6;
bit IOCAN7   @ IOCAN.7;

bit IOCAF0   @ IOCAF.0;
bit IOCAF1   @ IOCAF.1;
bit IOCAF2   @ IOCAF.2;
bit IOCAF3   @ IOCAF.3;
bit IOCAF4   @ IOCAF.4;
bit IOCAF5   @ IOCAF.5;
bit IOCAF6   @ IOCAF.6;
bit IOCAF7   @ IOCAF.7;

bit ANSELB0  @ ANSELB.0;
bit ANSB0    @ ANSELB.0;
bit ANSELB1  @ ANSELB.1;
bit ANSB1    @ ANSELB.1;
bit ANSELB2  @ ANSELB.2;
bit ANSB2    @ ANSELB.2;
bit ANSELB3  @ ANSELB.3;
bit ANSB3    @ ANSELB.3;
bit ANSELB4  @ ANSELB.4;
bit ANSB4    @ ANSELB.4;
bit ANSELB5  @ ANSELB.5;
bit ANSB5    @ ANSELB.5;
bit ANSELB6  @ ANSELB.6;
bit ANSB6    @ ANSELB.6;
bit ANSELB7  @ ANSELB.7;
bit ANSB7    @ ANSELB.7;

bit WPUB0    @ WPUB.0;
bit WPUB1    @ WPUB.1;
bit WPUB2    @ WPUB.2;
bit WPUB3    @ WPUB.3;
bit WPUB4    @ WPUB.4;
bit WPUB5    @ WPUB.5;
bit WPUB6    @ WPUB.6;
bit WPUB7    @ WPUB.7;

bit ODCB0    @ ODCONB.0;
bit ODCB1    @ ODCONB.1;
bit ODCB2    @ ODCONB.2;
bit ODCB3    @ ODCONB.3;
bit ODCB4    @ ODCONB.4;
bit ODCB5    @ ODCONB.5;
bit ODCB6    @ ODCONB.6;
bit ODCB7    @ ODCONB.7;

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

bit IOCBP0   @ IOCBP.0;
bit IOCBP1   @ IOCBP.1;
bit IOCBP2   @ IOCBP.2;
bit IOCBP3   @ IOCBP.3;
bit IOCBP4   @ IOCBP.4;
bit IOCBP5   @ IOCBP.5;
bit IOCBP6   @ IOCBP.6;
bit IOCBP7   @ IOCBP.7;

bit IOCBN0   @ IOCBN.0;
bit IOCBN1   @ IOCBN.1;
bit IOCBN2   @ IOCBN.2;
bit IOCBN3   @ IOCBN.3;
bit IOCBN4   @ IOCBN.4;
bit IOCBN5   @ IOCBN.5;
bit IOCBN6   @ IOCBN.6;
bit IOCBN7   @ IOCBN.7;

bit IOCBF0   @ IOCBF.0;
bit IOCBF1   @ IOCBF.1;
bit IOCBF2   @ IOCBF.2;
bit IOCBF3   @ IOCBF.3;
bit IOCBF4   @ IOCBF.4;
bit IOCBF5   @ IOCBF.5;
bit IOCBF6   @ IOCBF.6;
bit IOCBF7   @ IOCBF.7;

bit ANSELC0  @ ANSELC.0;
bit ANSC0    @ ANSELC.0;
bit ANSELC1  @ ANSELC.1;
bit ANSC1    @ ANSELC.1;
bit ANSELC2  @ ANSELC.2;
bit ANSC2    @ ANSELC.2;
bit ANSELC3  @ ANSELC.3;
bit ANSC3    @ ANSELC.3;
bit ANSELC4  @ ANSELC.4;
bit ANSC4    @ ANSELC.4;
bit ANSELC5  @ ANSELC.5;
bit ANSC5    @ ANSELC.5;
bit ANSELC6  @ ANSELC.6;
bit ANSC6    @ ANSELC.6;
bit ANSELC7  @ ANSELC.7;
bit ANSC7    @ ANSELC.7;

bit WPUC0    @ WPUC.0;
bit WPUC1    @ WPUC.1;
bit WPUC2    @ WPUC.2;
bit WPUC3    @ WPUC.3;
bit WPUC4    @ WPUC.4;
bit WPUC5    @ WPUC.5;
bit WPUC6    @ WPUC.6;
bit WPUC7    @ WPUC.7;

bit ODCC0    @ ODCONC.0;
bit ODCC1    @ ODCONC.1;
bit ODCC2    @ ODCONC.2;
bit ODCC3    @ ODCONC.3;
bit ODCC4    @ ODCONC.4;
bit ODCC5    @ ODCONC.5;
bit ODCC6    @ ODCONC.6;
bit ODCC7    @ ODCONC.7;

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

bit IOCCP0   @ IOCCP.0;
bit IOCCP1   @ IOCCP.1;
bit IOCCP2   @ IOCCP.2;
bit IOCCP3   @ IOCCP.3;
bit IOCCP4   @ IOCCP.4;
bit IOCCP5   @ IOCCP.5;
bit IOCCP6   @ IOCCP.6;
bit IOCCP7   @ IOCCP.7;

bit IOCCN0   @ IOCCN.0;
bit IOCCN1   @ IOCCN.1;
bit IOCCN2   @ IOCCN.2;
bit IOCCN3   @ IOCCN.3;
bit IOCCN4   @ IOCCN.4;
bit IOCCN5   @ IOCCN.5;
bit IOCCN6   @ IOCCN.6;
bit IOCCN7   @ IOCCN.7;

bit IOCCF0   @ IOCCF.0;
bit IOCCF1   @ IOCCF.1;
bit IOCCF2   @ IOCCF.2;
bit IOCCF3   @ IOCCF.3;
bit IOCCF4   @ IOCCF.4;
bit IOCCF5   @ IOCCF.5;
bit IOCCF6   @ IOCCF.6;
bit IOCCF7   @ IOCCF.7;

bit ANSELD0  @ ANSELD.0;
bit ANSD0    @ ANSELD.0;
bit ANSELD1  @ ANSELD.1;
bit ANSD1    @ ANSELD.1;
bit ANSELD2  @ ANSELD.2;
bit ANSD2    @ ANSELD.2;
bit ANSELD3  @ ANSELD.3;
bit ANSD3    @ ANSELD.3;
bit ANSELD4  @ ANSELD.4;
bit ANSD4    @ ANSELD.4;
bit ANSELD5  @ ANSELD.5;
bit ANSD5    @ ANSELD.5;
bit ANSELD6  @ ANSELD.6;
bit ANSD6    @ ANSELD.6;
bit ANSELD7  @ ANSELD.7;
bit ANSD7    @ ANSELD.7;

bit WPUD0    @ WPUD.0;
bit WPUD1    @ WPUD.1;
bit WPUD2    @ WPUD.2;
bit WPUD3    @ WPUD.3;
bit WPUD4    @ WPUD.4;
bit WPUD5    @ WPUD.5;
bit WPUD6    @ WPUD.6;
bit WPUD7    @ WPUD.7;

bit ODCD0    @ ODCOND.0;
bit ODCD1    @ ODCOND.1;
bit ODCD2    @ ODCOND.2;
bit ODCD3    @ ODCOND.3;
bit ODCD4    @ ODCOND.4;
bit ODCD5    @ ODCOND.5;
bit ODCD6    @ ODCOND.6;
bit ODCD7    @ ODCOND.7;

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

bit ANSELE0  @ ANSELE.0;
bit ANSE0    @ ANSELE.0;
bit ANSELE1  @ ANSELE.1;
bit ANSE1    @ ANSELE.1;
bit ANSELE2  @ ANSELE.2;
bit ANSE2    @ ANSELE.2;

bit WPUE0    @ WPUE.0;
bit WPUE1    @ WPUE.1;
bit WPUE2    @ WPUE.2;
bit WPUE3    @ WPUE.3;

bit ODCE0    @ ODCONE.0;
bit ODCE1    @ ODCONE.1;
bit ODCE2    @ ODCONE.2;

bit SLRE0    @ SLRCONE.0;
bit SLRE1    @ SLRCONE.1;
bit SLRE2    @ SLRCONE.2;

bit INLVLE0  @ INLVLE.0;
bit INLVLE1  @ INLVLE.1;
bit INLVLE2  @ INLVLE.2;
bit INLVLE3  @ INLVLE.3;

bit IOCEP3   @ IOCEP.3;

bit IOCEN3   @ IOCEN.3;

bit IOCEF3   @ IOCEF.3;

bit RB1I2C_SLEW @ RB1I2C.6;

bit RB2I2C_SLEW @ RB2I2C.6;

bit RC3I2C_SLEW @ RC3I2C.6;

bit RC4I2C_SLEW @ RC4I2C.6;

bit RD0I2C_SLEW @ RD0I2C.6;

bit RD1I2C_SLEW @ RD1I2C.6;

bit C_SHAD   @ STATUS_SHAD.0;
bit DC_SHAD  @ STATUS_SHAD.1;
bit Z_SHAD   @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFF FEXTOSC = ECH // EC (external clock) above 16 MHz
#pragma config /1 0x3FFD FEXTOSC = ECL // EC (external clock) below 16 MHz
#pragma config /1 0x3FFC FEXTOSC = OFF // Oscillator not enabled
#pragma config /1 0x3FFA FEXTOSC = HS // HS (crystal oscillator) above 4MHz
#pragma config /1 0x3FF9 FEXTOSC = XT // XT (crystal oscillator) above 100kHz, below 4MHz
#pragma config /1 0x3FF8 FEXTOSC = LP // LP (crystal oscillator) optimized for 32.768kHz
#pragma config /1 0x3FFF RSTOSC = EXTOSC // EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3FEF RSTOSC = HFINTOSC_1MHz // HFINTOSC (1MHz)
#pragma config /1 0x3FDF RSTOSC = LFINTOSC // LFINTOSC
#pragma config /1 0x3FCF RSTOSC = SOSC // SOSC
#pragma config /1 0x3FAF RSTOSC = EXTOSC_4PLL // EXTOSC with 4x PLL, with EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3F9F RSTOSC = HFINTOSC_16MHz // HFINTOSC (16 MHz)
#pragma config /1 0x3F8F RSTOSC = HFINTOSC_32MHz // HFINTOSC (32 MHz)
#pragma config /1 0x3EFF CLKOUTEN = ON // CLKOUT function is enabled; FOSC/4 clock appears at OSC2
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled; i/o or oscillator function on OSC2
#pragma config /1 0x3FFF CSWEN = ON // Writing to NOSC and NDIV is allowed
#pragma config /1 0x37FF CSWEN = OFF // The NOSC and NDIV bits cannot be changed by user software
#pragma config /1 0x3FFF VDDAR = HI // Internal analog systems are calibrated for operation between VDD = 2.3 - 5.5V
#pragma config /1 0x2FFF VDDAR = LO // Internal analog systems are calibrated for operation between VDD = 1.8 - 3.6V
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor enabled
#pragma config /1 0x1FFF FCMEN = OFF // Fail-Safe Clock Monitor disabled
#pragma config /2 0x3FFF MCLRE = EXTMCLR // If LVP = 0, MCLR pin is MCLR; If LVP = 1, RA3 pin function is MCLR
#pragma config /2 0x3FFE MCLRE = INTMCLR // If LVP = 0, MCLR is port-defined function; If LVP = 1, RA3 pin function is MCLR
#pragma config /2 0x3FFF PWRTS = PWRT_OFF // PWRT is disabled
#pragma config /2 0x3FFD PWRTS = PWRT_64 // PWRT set at 64 ms
#pragma config /2 0x3FFB PWRTS = PWRT_16 // PWRT set at 16 ms
#pragma config /2 0x3FF9 PWRTS = PWRT_1 // PWRT set at 1 ms
#pragma config /2 0x3FFF LPBOREN = OFF // ULPBOR disabled
#pragma config /2 0x3FDF LPBOREN = ON // ULPBOR enabled
#pragma config /2 0x3FFF BOREN = ON // Brown-out Reset enabled, SBOREN bit is ignored
#pragma config /2 0x3FBF BOREN = NSLEEP // Brown-out Reset enabled while running, disabled in sleep; SBOREN is ignored
#pragma config /2 0x3F7F BOREN = SBOREN // Brown-out reset enabled according to SBOREN bit
#pragma config /2 0x3F3F BOREN = OFF // Brown-out reset disabled
#pragma config /2 0x3FFF DACAUTOEN = OFF // DAC Buffer reference range is determined by the REFRNG bit
#pragma config /2 0x3EFF DACAUTOEN = ON // DAC Buffer reference range is automatically determined by module hardware
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (VBOR) set to 1.9V
#pragma config /2 0x3DFF BORV = HI // Brown-out Reset Voltage (VBOR) is set to 2.85V
#pragma config /2 0x3FFF ZCD = OFF // ZCD module is disabled; ZCD can be enabled by setting the ZCDSEN bit of ZCDCON
#pragma config /2 0x3BFF ZCD = ON // ZCD module is always enabled; ZCDMD and ZCDSEN bits are ignored
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCKED bit can be cleared and set only once after an unlocking sequence is executed; once PPSLOCKED is set, all future changes to PPS registers are prevented
#pragma config /2 0x37FF PPS1WAY = OFF // The PPSLOCKED bit can be set and cleared as needed (unlocking sequence is required)
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a reset
#pragma config /2 0x2FFF STVREN = OFF // Stack Overflow or Underflow will not cause a reset
#pragma config /2 0x3FFF DEBUG = OFF // Background Debugger disabled
#pragma config /2 0x1FFF DEBUG = ON // background debugger enabled
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
#pragma config /3 0x3F9F WDTE = OFF // WDT Disabled, SEN is ignored
#pragma config /3 0x3FBF WDTE = SWDTEN // WDT enabled/disabled by SEN bit
#pragma config /3 0x3FDF WDTE = NSLEEP // WDT enabled while Sleep = 0, suspended when Sleep = 1; SEN is ignored
#pragma config /3 0x3FFF WDTE = ON // WDT enabled regardless of Sleep; SEN bit is ignored
#pragma config /3 0x38FF WDTCWS = WDTCWS_0 // window delay = 87.5 percent of time; no software control; keyed access required
#pragma config /3 0x39FF WDTCWS = WDTCWS_1 // window delay = 75 percent of time; no software control; keyed access required
#pragma config /3 0x3AFF WDTCWS = WDTCWS_2 // window delay = 62.5 percent of time; no software control; keyed access required
#pragma config /3 0x3BFF WDTCWS = WDTCWS_3 // window delay = 50 percent of time; no software control; keyed access required
#pragma config /3 0x3CFF WDTCWS = WDTCWS_4 // window delay = 37.5 percent of time; no software control; keyed access required
#pragma config /3 0x3DFF WDTCWS = WDTCWS_5 // window delay = 25 percent of time; no software control; keyed access required
#pragma config /3 0x3EFF WDTCWS = WDTCWS_6 // window always open (100%); no software control; keyed access required
#pragma config /3 0x3FFF WDTCWS = WDTCWS_7 // window always open (100%); software control; keyed access not required
#pragma config /3 0x07FF WDTCCS = LFINTOSC // WDT reference clock is the 31.0 kHz LFINTOSC
#pragma config /3 0x0FFF WDTCCS = MFINTOSC // WDT reference clock is the 32 kHz MFINTOSC
#pragma config /3 0x17FF WDTCCS = SOSC // WDT reference clock is the 32kHz secondary oscillator
#pragma config /3 0x3FFF WDTCCS = SC // Software Control
#pragma config /4 0x3FFF BBSIZE = BB512 // 512 words boot block size
#pragma config /4 0x3FFE BBSIZE = BB1K // 1024 words boot block size
#pragma config /4 0x3FFD BBSIZE = BB2K // 2048 words boot block size
#pragma config /4 0x3FFC BBSIZE = BB4K // 4096 word boot block size
#pragma config /4 0x3FFB BBSIZE = BB8K // * half of user program memory
#pragma config /4 0x3FFA BBSIZE = BB16K // * half of user program memory
#pragma config /4 0x3FF9 BBSIZE = BB32K // * half of user program memory
#pragma config /4 0x3FF8 BBSIZE = BB64K // * half of user program memory
#pragma config /4 0x3FFF BBEN = OFF // Boot Block disabled
#pragma config /4 0x3FF7 BBEN = ON // Boot Block enabled
#pragma config /4 0x3FFF SAFEN = OFF // SAF disabled
#pragma config /4 0x3FEF SAFEN = ON // SAF enabled
#pragma config /4 0x3FFF WRTAPP = OFF // Application Block is NOT write protected
#pragma config /4 0x3F7F WRTAPP = ON // Application Block is write protected
#pragma config /4 0x3FFF WRTB = OFF // Boot Block is NOT write protected
#pragma config /4 0x3EFF WRTB = ON // Boot Block is write protected
#pragma config /4 0x3FFF WRTC = OFF // Configuration Register is NOT write protected
#pragma config /4 0x3DFF WRTC = ON // Configuration Register is write protected
#pragma config /4 0x3FFF WRTD = OFF // Data EEPROM is NOT write protected
#pragma config /4 0x3BFF WRTD = ON // Data EEPROM is write protected
#pragma config /4 0x3FFF WRTSAF = OFF // SAF is NOT write protected
#pragma config /4 0x37FF WRTSAF = ON // SAF is write protected
#pragma config /4 0x3FFF LVP = ON // Low Voltage programming enabled. MCLR/Vpp pin function is MCLR. MCLRE Configuration bit is ignored
#pragma config /4 0x1FFF LVP = OFF // High Voltage on MCLR/Vpp must be used for programming
#pragma config /5 0x3FFF CP = OFF // Program Flash Memory code protection is disabled
#pragma config /5 0x3FFE CP = ON // Program Flash Memory code protection is enabled
#pragma config /5 0x3FFF CPD = OFF // Data EEPROM code protection is disabled
#pragma config /5 0x3FFD CPD = ON // Data EEPROM code protection is enabled
#endif
