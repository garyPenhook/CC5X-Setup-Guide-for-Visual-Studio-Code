// HEADER FILE
#pragma chip PIC16F15223, core 14 enh2, code 2048, ram 32 : 0x17F // 256 bytes
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

char PORTC    @ 0x0E;

char TRISA    @ 0x12;

char TRISC    @ 0x14;

char LATA     @ 0x18;

char LATC     @ 0x1A;

char CPCON    @ 0x9A;
char ADRESL   @ 0x9B;
char ADRESH   @ 0x9C;
char ADCON0   @ 0x9D;
char ADCON1   @ 0x9E;
char ADACT    @ 0x9F;

char RC0I2C   @ 0x10E;
char RC1I2C   @ 0x10F;

char RC1REG   @ 0x119;
char TX1REG   @ 0x11A;
char SP1BRGL  @ 0x11B;
char SP1BRGH  @ 0x11C;
char RC1STA   @ 0x11D;
char TX1STA   @ 0x11E;
char BAUD1CON @ 0x11F;

char SSP1BUF  @ 0x18C;
char SSP1ADD  @ 0x18D;
char SSP1MSK  @ 0x18E;
char SSP1STAT @ 0x18F;
char SSP1CON1 @ 0x190;
char SSP1CON2 @ 0x191;
char SSP1CON3 @ 0x192;

char TMR1L    @ 0x20C;
char TMR1H    @ 0x20D;
char T1CON    @ 0x20E;
char TMR1CON  @ T1CON;
char T1GCON   @ 0x20F;
char TMR1GCON @ T1GCON;
char T1GATE   @ 0x210;
char TMR1GATE @ T1GATE;
char T1CLK    @ 0x211;
char TMR1CLK  @ T1CLK;

char T2TMR    @ 0x28C;
char TMR2     @ T2TMR;
char T2PR     @ 0x28D;
char PR2      @ T2PR;
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

char TMR0L    @ 0x59C;
char TMR0H    @ 0x59D;
char PR0      @ TMR0H;
char T0CON0   @ 0x59E;
char T0CON1   @ 0x59F;

char PIR0     @ 0x70C;
char PIR1     @ 0x70D;
char PIR2     @ 0x70E;

char PIE0     @ 0x716;
char PIE1     @ 0x717;
char PIE2     @ 0x718;

char WDTCON   @ 0x80C;

char BORCON   @ 0x811;

char PCON0    @ 0x813;
char PCON1    @ 0x814;

char NVMADRL  @ 0x81A;
char NVMADRH  @ 0x81B;
char NVMDATL  @ 0x81C;
char NVMDATH  @ 0x81D;
char NVMCON1  @ 0x81E;
char NVMCON2  @ 0x81F;

char OSCCON   @ 0x88E;

char OSCSTAT  @ 0x890;
char OSCEN    @ 0x891;
char OSCTUNE  @ 0x892;
char OSCFRQ   @ 0x893;

char FVRCON   @ 0x90C;

char PPSLOCK  @ 0x1E8F;
char INTPPS   @ 0x1E90;
char T0CKIPPS @ 0x1E91;
char T1CKIPPS @ 0x1E92;
char T1GPPS   @ 0x1E93;

char T2INPPS  @ 0x1E9C;

char CCP1PPS  @ 0x1EA1;
char CCP2PPS  @ 0x1EA2;

char ADACTPPS @ 0x1EC3;

char SSP1CLKPPS @ 0x1EC5;
char SSP1DATPPS @ 0x1EC6;
char SSP1SSPPS @ 0x1EC7;

char RX1PPS   @ 0x1ECB;
char RX1DTPPS @ RX1PPS;
char RXPPS    @ RX1PPS;
char CK1PPS   @ 0x1ECC;
char TX1CKPPS @ CK1PPS;
char CKPPS    @ CK1PPS;

char RA0PPS   @ 0x1F10;
char RA1PPS   @ 0x1F11;
char RA2PPS   @ 0x1F12;

char RA4PPS   @ 0x1F14;
char RA5PPS   @ 0x1F15;

char RC0PPS   @ 0x1F20;
char RC1PPS   @ 0x1F21;
char RC2PPS   @ 0x1F22;
char RC3PPS   @ 0x1F23;
char RC4PPS   @ 0x1F24;
char RC5PPS   @ 0x1F25;

char ANSELA   @ 0x1F38;
char WPUA     @ 0x1F39;
char ODCONA   @ 0x1F3A;
char SLRCONA  @ 0x1F3B;
char INLVLA   @ 0x1F3C;
char IOCAP    @ 0x1F3D;
char IOCAN    @ 0x1F3E;
char IOCAF    @ 0x1F3F;

char ANSELC   @ 0x1F4E;
char WPUC     @ 0x1F4F;
char ODCONC   @ 0x1F50;
char SLRCONC  @ 0x1F51;
char INLVLC   @ 0x1F52;
char IOCCP    @ 0x1F53;
char IOCCN    @ 0x1F54;
char IOCCF    @ 0x1F55;

char STATUS_SHAD @ 0x1FE4;
char WREG_SHAD @ 0x1FE5;
char BSR_SHAD @ 0x1FE6;
char PCLATH_SHAD @ 0x1FE7;
char FSR0_SHAD @ 0x1FE8;
char FSR0L_SHAD @ FSR0_SHAD;
char FSR0H_SHAD @ 0x1FE9;
char FSR1L_SHAD @ 0x1FEA;
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

bit RC0      @ PORTC.0;
bit RC1      @ PORTC.1;
bit RC2      @ PORTC.2;
bit RC3      @ PORTC.3;
bit RC4      @ PORTC.4;
bit RC5      @ PORTC.5;

bit TRISA0   @ TRISA.0;
bit TRISA1   @ TRISA.1;
bit TRISA2   @ TRISA.2;
bit TRISA3   @ TRISA.3;
bit TRISA4   @ TRISA.4;
bit TRISA5   @ TRISA.5;

bit TRISC0   @ TRISC.0;
bit TRISC1   @ TRISC.1;
bit TRISC2   @ TRISC.2;
bit TRISC3   @ TRISC.3;
bit TRISC4   @ TRISC.4;
bit TRISC5   @ TRISC.5;

bit LATA0    @ LATA.0;
bit LATA1    @ LATA.1;
bit LATA2    @ LATA.2;
bit LATA3    @ LATA.3;
bit LATA4    @ LATA.4;
bit LATA5    @ LATA.5;

bit LATC0    @ LATC.0;
bit LATC1    @ LATC.1;
bit LATC2    @ LATC.2;
bit LATC3    @ LATC.3;
bit LATC4    @ LATC.4;
bit LATC5    @ LATC.5;

bit CPRDY    @ CPCON.0;
bit CPCON_CPRDY @ CPCON.0;
bit CPCON_CPT @ CPCON.1;

bit ADCON0_ON @ ADCON0.0;
bit ADON     @ ADCON0.0;
bit ADCON0_GO @ ADCON0.1;
bit ADCON0_GO_nDONE @ ADCON0.1;
bit ADGO     @ ADCON0.1;

bit ADCON1_FM @ ADCON1.7;
bit ADFM     @ ADCON1.7;

bit RC0I2C_SLEW @ RC0I2C.6;

bit RC1I2C_SLEW @ RC1I2C.6;

bit RX9D     @ RC1STA.0;
bit RC1STA_RX9D @ RC1STA.0;
bit OERR     @ RC1STA.1;
bit RC1STA_OERR @ RC1STA.1;
bit FERR     @ RC1STA.2;
bit RC1STA_FERR @ RC1STA.2;
bit ADDEN    @ RC1STA.3;
bit RC1STA_ADDEN @ RC1STA.3;
bit CREN     @ RC1STA.4;
bit RC1STA_CREN @ RC1STA.4;
bit SREN     @ RC1STA.5;
bit RC1STA_SREN @ RC1STA.5;
bit RX9      @ RC1STA.6;
bit RC1STA_RX9 @ RC1STA.6;
bit SPEN     @ RC1STA.7;
bit RC1STA_SPEN @ RC1STA.7;

bit TX9D     @ TX1STA.0;
bit TX1STA_TX9D @ TX1STA.0;
bit TRMT     @ TX1STA.1;
bit TX1STA_TRMT @ TX1STA.1;
bit BRGH     @ TX1STA.2;
bit TX1STA_BRGH @ TX1STA.2;
bit SENDB    @ TX1STA.3;
bit TX1STA_SENDB @ TX1STA.3;
bit SYNC     @ TX1STA.4;
bit TX1STA_SYNC @ TX1STA.4;
bit TXEN     @ TX1STA.5;
bit TX1STA_TXEN @ TX1STA.5;
bit TX9      @ TX1STA.6;
bit TX1STA_TX9 @ TX1STA.6;
bit CSRC     @ TX1STA.7;
bit TX1STA_CSRC @ TX1STA.7;

bit ABDEN    @ BAUD1CON.0;
bit BAUD1CON_ABDEN @ BAUD1CON.0;
bit WUE      @ BAUD1CON.1;
bit BAUD1CON_WUE @ BAUD1CON.1;
bit BRG16    @ BAUD1CON.3;
bit BAUD1CON_BRG16 @ BAUD1CON.3;
bit SCKP     @ BAUD1CON.4;
bit BAUD1CON_SCKP @ BAUD1CON.4;
bit RCIDL    @ BAUD1CON.6;
bit BAUD1CON_RCIDL @ BAUD1CON.6;
bit ABDOVF   @ BAUD1CON.7;
bit BAUD1CON_ABDOVF @ BAUD1CON.7;

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
bit T1GCON_GGO @ T1GCON.3;
bit T1GGO    @ T1GCON.3;
bit T1GCON_T1GGO @ T1GCON.3;
bit T1GCON_DONE_ @ T1GCON.3;
bit T1DONE_  @ T1GCON.3;
bit T1GCON_GSPM @ T1GCON.4;
bit T1GSPM   @ T1GCON.4;
bit T1GCON_GTM @ T1GCON.5;
bit T1GTM    @ T1GCON.5;
bit T1GCON_GPOL @ T1GCON.6;
bit T1GPOL   @ T1GCON.6;
bit T1GCON_GE @ T1GCON.7;
bit T1GE     @ T1GCON.7;

bit T2CON_OUTPS0 @ T2CON.0;
bit T2OUTPS0 @ T2CON.0;
bit T2CON_OUTPS1 @ T2CON.1;
bit T2OUTPS1 @ T2CON.1;
bit T2CON_OUTPS2 @ T2CON.2;
bit T2OUTPS2 @ T2CON.2;
bit T2CON_OUTPS3 @ T2CON.3;
bit T2OUTPS3 @ T2CON.3;
bit T2CON_CKPS0 @ T2CON.4;
bit T2CKPS0  @ T2CON.4;
bit T2CON_CKPS1 @ T2CON.5;
bit T2CKPS1  @ T2CON.5;
bit T2CON_CKPS2 @ T2CON.6;
bit T2CKPS2  @ T2CON.6;
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
bit T2HLT_CKSYNC @ T2HLT.5;
bit T2CKSYNC @ T2HLT.5;
bit T2HLT_CKPOL @ T2HLT.6;
bit T2CKPOL  @ T2HLT.6;
bit T2HLT_PSYNC @ T2HLT.7;
bit T2PSYNC  @ T2HLT.7;

bit T2CLKCON_CS0 @ T2CLKCON.0;
bit T2CS0    @ T2CLKCON.0;
bit T2CLKCON_CS1 @ T2CLKCON.1;
bit T2CS1    @ T2CLKCON.1;
bit T2CLKCON_CS2 @ T2CLKCON.2;
bit T2CS2    @ T2CLKCON.2;

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

bit CCP1CAP_CTS0 @ CCP1CAP.0;
bit CCP1CTS0 @ CCP1CAP.0;
bit CCP1CAP_CTS1 @ CCP1CAP.1;
bit CCP1CTS1 @ CCP1CAP.1;

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

bit CCP2CAP_CTS0 @ CCP2CAP.0;
bit CCP2CTS0 @ CCP2CAP.0;
bit CCP2CAP_CTS1 @ CCP2CAP.1;
bit CCP2CTS1 @ CCP2CAP.1;

bit PWM3CON_POL @ PWM3CON.4;
bit PWM3POL  @ PWM3CON.4;
bit PWM3CON_OUT @ PWM3CON.5;
bit PWM3OUT  @ PWM3CON.5;
bit PWM3CON_EN @ PWM3CON.7;
bit PWM3EN   @ PWM3CON.7;

bit PWM4CON_POL @ PWM4CON.4;
bit PWM4POL  @ PWM4CON.4;
bit PWM4CON_OUT @ PWM4CON.5;
bit PWM4OUT  @ PWM4CON.5;
bit PWM4CON_EN @ PWM4CON.7;
bit PWM4EN   @ PWM4CON.7;

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

bit INTF     @ PIR0.0;
bit PIR0_INTF @ PIR0.0;
bit IOCIF    @ PIR0.4;
bit PIR0_IOCIF @ PIR0.4;
bit TMR0IF   @ PIR0.5;
bit PIR0_TMR0IF @ PIR0.5;

bit ADIF     @ PIR1.0;
bit PIR1_ADIF @ PIR1.0;
bit SSP1IF   @ PIR1.1;
bit PIR1_SSP1IF @ PIR1.1;
bit BCL1IF   @ PIR1.2;
bit PIR1_BCL1IF @ PIR1.2;
bit TX1IF    @ PIR1.3;
bit PIR1_TX1IF @ PIR1.3;
bit RC1IF    @ PIR1.4;
bit PIR1_RC1IF @ PIR1.4;
bit TMR1IF   @ PIR1.5;
bit PIR1_TMR1IF @ PIR1.5;
bit TMR2IF   @ PIR1.6;
bit PIR1_TMR2IF @ PIR1.6;
bit CCP1IF   @ PIR1.7;
bit PIR1_CCP1IF @ PIR1.7;

bit TMR1GIF  @ PIR2.5;
bit PIR2_TMR1GIF @ PIR2.5;
bit NVMIF    @ PIR2.6;
bit PIR2_NVMIF @ PIR2.6;
bit CCP2IF   @ PIR2.7;
bit PIR2_CCP2IF @ PIR2.7;

bit INTE     @ PIE0.0;
bit PIE0_INTE @ PIE0.0;
bit IOCIE    @ PIE0.4;
bit PIE0_IOCIE @ PIE0.4;
bit TMR0IE   @ PIE0.5;
bit PIE0_TMR0IE @ PIE0.5;

bit ADIE     @ PIE1.0;
bit PIE1_ADIE @ PIE1.0;
bit SSP1IE   @ PIE1.1;
bit PIE1_SSP1IE @ PIE1.1;
bit BCL1IE   @ PIE1.2;
bit PIE1_BCL1IE @ PIE1.2;
bit TX1IE    @ PIE1.3;
bit PIE1_TX1IE @ PIE1.3;
bit RC1IE    @ PIE1.4;
bit PIE1_RC1IE @ PIE1.4;
bit TMR1IE   @ PIE1.5;
bit PIE1_TMR1IE @ PIE1.5;
bit TMR2IE   @ PIE1.6;
bit PIE1_TMR2IE @ PIE1.6;
bit CCP1IE   @ PIE1.7;
bit PIE1_CCP1IE @ PIE1.7;

bit TMR1GIE  @ PIE2.5;
bit PIE2_TMR1GIE @ PIE2.5;
bit NVMIE    @ PIE2.6;
bit PIE2_NVMIE @ PIE2.6;
bit CCP2IE   @ PIE2.7;
bit PIE2_CCP2IE @ PIE2.7;

bit WDTCON_SEN @ WDTCON.0;
bit WDTSEN   @ WDTCON.0;
bit WDTCON_SWDTEN @ WDTCON.0;
bit WDTCON_CS @ WDTCON.7;
bit WDTCS    @ WDTCON.7;

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
bit STKUNF   @ PCON0.6;
bit PCON0_STKUNF @ PCON0.6;
bit STKOVF   @ PCON0.7;
bit PCON0_STKOVF @ PCON0.7;

bit MEMV_    @ PCON1.1;
bit PCON1_MEMV_ @ PCON1.1;

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

bit NDIV0    @ OSCCON.0;
bit OSCCON_NDIV0 @ OSCCON.0;
bit NDIV1    @ OSCCON.1;
bit OSCCON_NDIV1 @ OSCCON.1;
bit NDIV2    @ OSCCON.2;
bit OSCCON_NDIV2 @ OSCCON.2;
bit NDIV3    @ OSCCON.3;
bit OSCCON_NDIV3 @ OSCCON.3;
bit NOSC0    @ OSCCON.4;
bit OSCCON_NOSC0 @ OSCCON.4;
bit NOSC1    @ OSCCON.5;
bit OSCCON_NOSC1 @ OSCCON.5;
bit NOSC2    @ OSCCON.6;
bit OSCCON_NOSC2 @ OSCCON.6;

bit SFOR     @ OSCSTAT.1;
bit OSCSTAT_SFOR @ OSCSTAT.1;
bit ADOR     @ OSCSTAT.2;
bit OSCSTAT_ADOR @ OSCSTAT.2;
bit LFOR     @ OSCSTAT.4;
bit OSCSTAT_LFOR @ OSCSTAT.4;
bit MFOR     @ OSCSTAT.5;
bit OSCSTAT_MFOR @ OSCSTAT.5;
bit HFOR     @ OSCSTAT.6;
bit OSCSTAT_HFOR @ OSCSTAT.6;

bit ADOEN    @ OSCEN.2;
bit OSCEN_ADOEN @ OSCEN.2;
bit LFOEN    @ OSCEN.4;
bit OSCEN_LFOEN @ OSCEN.4;
bit MFOEN    @ OSCEN.5;
bit OSCEN_MFOEN @ OSCEN.5;
bit HFOEN    @ OSCEN.6;
bit OSCEN_HFOEN @ OSCEN.6;

bit HFFRQ0   @ OSCFRQ.0;
bit HFFRQ1   @ OSCFRQ.1;
bit HFFRQ2   @ OSCFRQ.2;

bit ADFVR0   @ FVRCON.0;
bit FVRCON_ADFVR0 @ FVRCON.0;
bit ADFVR1   @ FVRCON.1;
bit FVRCON_ADFVR1 @ FVRCON.1;
bit CDAFVR0  @ FVRCON.2;
bit FVRCON_CDAFVR0 @ FVRCON.2;
bit CDAFVR1  @ FVRCON.3;
bit FVRCON_CDAFVR1 @ FVRCON.3;
bit FVRRDY   @ FVRCON.6;
bit FVRCON_FVRRDY @ FVRCON.6;
bit FVREN    @ FVRCON.7;
bit FVRCON_FVREN @ FVRCON.7;

bit PPSLOCKED @ PPSLOCK.0;
bit PPSLOCK_PPSLOCKED @ PPSLOCK.0;

bit ANSA0    @ ANSELA.0;
bit ANSA1    @ ANSELA.1;
bit ANSA2    @ ANSELA.2;
bit ANSA4    @ ANSELA.4;
bit ANSA5    @ ANSELA.5;

bit WPUA0    @ WPUA.0;
bit WPUA1    @ WPUA.1;
bit WPUA2    @ WPUA.2;
bit WPUA3    @ WPUA.3;
bit WPUA4    @ WPUA.4;
bit WPUA5    @ WPUA.5;

bit ODCA0    @ ODCONA.0;
bit ODCA1    @ ODCONA.1;
bit ODCA2    @ ODCONA.2;
bit ODCA4    @ ODCONA.4;
bit ODCA5    @ ODCONA.5;

bit SLRA0    @ SLRCONA.0;
bit SLRA1    @ SLRCONA.1;
bit SLRA2    @ SLRCONA.2;
bit SLRA4    @ SLRCONA.4;
bit SLRA5    @ SLRCONA.5;

bit INLVLA0  @ INLVLA.0;
bit INLVLA1  @ INLVLA.1;
bit INLVLA2  @ INLVLA.2;
bit INLVLA3  @ INLVLA.3;
bit INLVLA4  @ INLVLA.4;
bit INLVLA5  @ INLVLA.5;

bit IOCAP0   @ IOCAP.0;
bit IOCAP1   @ IOCAP.1;
bit IOCAP2   @ IOCAP.2;
bit IOCAP3   @ IOCAP.3;
bit IOCAP4   @ IOCAP.4;
bit IOCAP5   @ IOCAP.5;

bit IOCAN0   @ IOCAN.0;
bit IOCAN1   @ IOCAN.1;
bit IOCAN2   @ IOCAN.2;
bit IOCAN3   @ IOCAN.3;
bit IOCAN4   @ IOCAN.4;
bit IOCAN5   @ IOCAN.5;

bit IOCAF0   @ IOCAF.0;
bit IOCAF1   @ IOCAF.1;
bit IOCAF2   @ IOCAF.2;
bit IOCAF3   @ IOCAF.3;
bit IOCAF4   @ IOCAF.4;
bit IOCAF5   @ IOCAF.5;

bit ANSC0    @ ANSELC.0;
bit ANSC1    @ ANSELC.1;
bit ANSC2    @ ANSELC.2;
bit ANSC3    @ ANSELC.3;
bit ANSC4    @ ANSELC.4;
bit ANSC5    @ ANSELC.5;

bit WPUC0    @ WPUC.0;
bit WPUC1    @ WPUC.1;
bit WPUC2    @ WPUC.2;
bit WPUC3    @ WPUC.3;
bit WPUC4    @ WPUC.4;
bit WPUC5    @ WPUC.5;

bit ODCC0    @ ODCONC.0;
bit ODCC1    @ ODCONC.1;
bit ODCC2    @ ODCONC.2;
bit ODCC3    @ ODCONC.3;
bit ODCC4    @ ODCONC.4;
bit ODCC5    @ ODCONC.5;

bit SLRC0    @ SLRCONC.0;
bit SLRC1    @ SLRCONC.1;
bit SLRC2    @ SLRCONC.2;
bit SLRC3    @ SLRCONC.3;
bit SLRC4    @ SLRCONC.4;
bit SLRC5    @ SLRCONC.5;

bit INLVLC0  @ INLVLC.0;
bit INLVLC1  @ INLVLC.1;
bit INLVLC2  @ INLVLC.2;
bit INLVLC3  @ INLVLC.3;
bit INLVLC4  @ INLVLC.4;
bit INLVLC5  @ INLVLC.5;

bit IOCCP0   @ IOCCP.0;
bit IOCCP1   @ IOCCP.1;
bit IOCCP2   @ IOCCP.2;
bit IOCCP3   @ IOCCP.3;
bit IOCCP4   @ IOCCP.4;
bit IOCCP5   @ IOCCP.5;

bit IOCCN0   @ IOCCN.0;
bit IOCCN1   @ IOCCN.1;
bit IOCCN2   @ IOCCN.2;
bit IOCCN3   @ IOCCN.3;
bit IOCCN4   @ IOCCN.4;
bit IOCCN5   @ IOCCN.5;

bit IOCCF0   @ IOCCF.0;
bit IOCCF1   @ IOCCF.1;
bit IOCCF2   @ IOCCF.2;
bit IOCCF3   @ IOCCF.3;
bit IOCCF4   @ IOCCF.4;
bit IOCCF5   @ IOCCF.5;

bit C_SHAD   @ STATUS_SHAD.0;
bit DC_SHAD  @ STATUS_SHAD.1;
bit Z_SHAD   @ STATUS_SHAD.2;


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FFF FEXTOSC = ECH // EC (external clock) 16 MHz and above
#pragma config /1 0x3FFE FEXTOSC = ECL // EC (external clock) below 16MHz
#pragma config /1 0x3FFD FEXTOSC = OFF // Oscillator not enabled
#pragma config /1 0x3FFF RSTOSC = EXTOSC // EXTOSC operating per FEXTOSC bits
#pragma config /1 0x3FEF RSTOSC = HFINTOSC_1MHZ // HFINTOSC (1 MHz)
#pragma config /1 0x3FDF RSTOSC = LFINTOSC // LFINTOSC
#pragma config /1 0x3FCF RSTOSC = HFINTOSC_32MHZ // HFINTOSC (32 MHz)
#pragma config /1 0x3EFF CLKOUTEN = ON // CLKOUT function is enabled; FOSC/4 clock appears on RA4
#pragma config /1 0x3FFF CLKOUTEN = OFF // CLKOUT function is disabled; I/O function on RA4
#pragma config /1 0x3FFF VDDAR = HI // Internal analog systems are calibrated for operation between VDD = 2.3V - 5.5V
#pragma config /1 0x2FFF VDDAR = LO // Internal analog systems are calibrated for operation between VDD = 1.8V - 3.6V
#pragma config /2 0x3FFF MCLRE = EXTMCLR // If LVP = 0, MCLR pin is MCLR; If LVP = 1, RA3 pin function is MCLR
#pragma config /2 0x3FFE MCLRE = INTMCLR // If LVP = 0, MCLR pin is port defined function; If LVP = 1, RA3 pin function is MCLR
#pragma config /2 0x3FFF PWRTS = PWRT_OFF // PWRT is disabled
#pragma config /2 0x3FFD PWRTS = PWRT_64 // PWRT set at 64 ms
#pragma config /2 0x3FFB PWRTS = PWRT_16 // PWRT set at 16 ms
#pragma config /2 0x3FF9 PWRTS = PWRT_1 // PWRT set at 1 ms
#pragma config /2 0x3FFF WDTE = ON // WDT enabled regardless of Sleep; SEN bit is ignored
#pragma config /2 0x3FF7 WDTE = NSLEEP // WDT enabled while Sleep = 0, suspended when Sleep = 1; SEN is ignored
#pragma config /2 0x3FEF WDTE = SWDTEN // WDT enabled/disabled by SEN bit
#pragma config /2 0x3FE7 WDTE = OFF // WDT disabled; SEN is ignored
#pragma config /2 0x3FFF BOREN = ON // Brown-out Reset Enabled, SBOREN bit is ignored
#pragma config /2 0x3FBF BOREN = NSLEEP // Brown-out Reset enabled while running, disabled in Sleep; SBOREN is ignored
#pragma config /2 0x3F7F BOREN = SBOREN // Brown-out Reset enabled according to SBOREN bit
#pragma config /2 0x3F3F BOREN = OFF // Brown-out Reset disabled
#pragma config /2 0x3FFF BORV = LO // Brown-out Reset Voltage (VBOR) set to 1.9V
#pragma config /2 0x3DFF BORV = HI // Brown-out Reset Voltage (VBOR) is set to 2.85V
#pragma config /2 0x3FFF PPS1WAY = ON // The PPSLOCKED bit can be set once after an unlocking sequence is executed; once PPSLOCKED is set, all future changes to PPS registers are prevented
#pragma config /2 0x37FF PPS1WAY = OFF // The PPSLOCKED bit can be set and cleared as needed (unlocking sequence is required)
#pragma config /2 0x3FFF STVREN = ON // Stack Overflow or Underflow will cause a reset
#pragma config /2 0x2FFF STVREN = OFF // Stack Overflow or Underflow will not cause a reset
#pragma config /4 0x3FFF BBSIZE = BB512 // 512 words boot block size
#pragma config /4 0x3FFE BBSIZE = BB1K // 1024 words boot block size
#pragma config /4 0x3FFD BBSIZE = BB2K // 2048 words boot block size
#pragma config /4 0x3FFC BBSIZE = BB4K // 4096 words boot block size
#pragma config /4 0x3FFB BBSIZE = BB8K // * half of user program memory
#pragma config /4 0x3FFA BBSIZE = BB16K // * half of user program memory
#pragma config /4 0x3FF9 BBSIZE = BB32K // * half of user program memory
#pragma config /4 0x3FF8 BBSIZE = BB64K // * half of user program memory
#pragma config /4 0x3FFF BBEN = OFF // Boot Block is disabled
#pragma config /4 0x3FF7 BBEN = ON // Boot Block is enabled
#pragma config /4 0x3FFF SAFEN = OFF // SAF is disabled
#pragma config /4 0x3FEF SAFEN = ON // SAF is enabled
#pragma config /4 0x3FFF WRTAPP = OFF // Application Block is not write-protected
#pragma config /4 0x3F7F WRTAPP = ON // Application Block is write-protected
#pragma config /4 0x3FFF WRTB = OFF // Boot Block is not write-protected
#pragma config /4 0x3EFF WRTB = ON // Boot Block is write-protected
#pragma config /4 0x3FFF WRTC = OFF // Configuration Registers are not write-protected
#pragma config /4 0x3DFF WRTC = ON // Configuration Registers are write-protected
#pragma config /4 0x3FFF WRTSAF = OFF // SAF is not write-protected
#pragma config /4 0x37FF WRTSAF = ON // SAF is write-protected
#pragma config /4 0x3FFF LVP = ON // Low Voltage programming enabled. MCLR/Vpp pin function is MCLR. MCLRE Configuration bit is ignored.
#pragma config /4 0x1FFF LVP = OFF // High Voltage on MCLR/Vpp must be used for programming
#pragma config /5 0x3FFF CP = OFF // User Program Flash Memory code protection is disabled
#pragma config /5 0x3FFE CP = ON // User Program Flash Memory code protection is enabled
#endif
