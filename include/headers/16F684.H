// HEADER FILE
#ifndef ICD2_DEBUG
 #pragma chip PIC16F684, core 14, code 2048, ram 32 : 0xBF

#else
 #pragma chip PIC16F684, core 14, code 0x700, ram 32 : 0xBF
 // last 256 locations are reserved for debugging

 //RESERVED RAM LOCATIONS
 char ICD2R1 @ 0x70;
 char reservedICD2[11] @ 0x65;  // reserved RAM for ICD2

 #pragma stackLevels 7   // reserve one level for debugging
#endif

#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_com_style
#define INT_rambank  0   /* interrupt variables in bank 0 */

#pragma config_def 0x0222

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR, PORTA;
  char OPTION, TRISA;
  char PCLATH, INTCON;
  bit PS0, PS1, PS2, PSA, T0SE, T0CS, INTEDG, RBPU_;
  bit Carry, DC, Zero_, PD, TO, RP0, RP1, IRP;
  bit RBIF, INTF, T0IF, RBIE, INTE, T0IE, GIE;
  bit PA0, PA1;  // PCLATH
*/

#pragma char PORTC   @ 0x07

#pragma char PIR1    @ 0x0C

#pragma char TMR1L   @ 0x0E
#pragma char TMR1H   @ 0x0F
#pragma char T1CON   @ 0x10
#pragma char TMR2    @ 0x11
#pragma char T2CON   @ 0x12
#pragma char CCPR1L  @ 0x13
#pragma char CCPR1H  @ 0x14
#pragma char CCP1CON @ 0x15
#pragma char PWM1CON @ 0x16
#pragma char ECCPAS  @ 0x17
#pragma char WDTCON  @ 0x18
#pragma char CMCON0  @ 0x19
#pragma char CMCON1  @ 0x1A

#pragma char ADRESH  @ 0x1E
#pragma char ADCON0  @ 0x1F

#pragma char TRISC   @ 0x87

#pragma char PIE1    @ 0x8C

#pragma char PCON    @ 0x8E
#pragma char OSCCON  @ 0x8F
#pragma char OSCTUNE @ 0x90
#pragma char ANSEL   @ 0x91
#pragma char PR2     @ 0x92

#pragma char WPUA    @ 0x95
#pragma char IOCA    @ 0x96

#pragma char VRCON   @ 0x99
#pragma char EEDAT   @ 0x9A
#pragma char EEADR   @ 0x9B
#pragma char EECON1  @ 0x9C
#pragma char EECON2  @ 0x9D
#pragma char ADRESL  @ 0x9E
#pragma char ADCON1  @ 0x9F

#pragma bit  RAIF    @ INTCON.0
#pragma bit  RAIE    @ INTCON.3
#pragma bit  PEIE    @ INTCON.6

#pragma bit  TMR1IF  @ PIR1.0
#pragma bit  TMR2IF  @ PIR1.1
#pragma bit  OSFIF   @ PIR1.2
#pragma bit  C1IF    @ PIR1.3
#pragma bit  C2IF    @ PIR1.4
#pragma bit  CCP1IF  @ PIR1.5
#pragma bit  ADIF    @ PIR1.6
#pragma bit  EEIF    @ PIR1.7

#pragma bit  TMR1ON  @ T1CON.0
#pragma bit  TMR1CS  @ T1CON.1
#pragma bit  T1SYNC_ @ T1CON.2
#pragma bit  T1OSCEN @ T1CON.3
#pragma bit  T1CKPS0 @ T1CON.4
#pragma bit  T1CKPS1 @ T1CON.5
#pragma bit  T1GE    @ T1CON.6
#pragma bit  T1GINV  @ T1CON.7

#pragma bit  T2CKPS0 @ T2CON.0
#pragma bit  T2CKPS1 @ T2CON.1
#pragma bit  TMR2ON  @ T2CON.2
#pragma bit  TOUTPS0 @ T2CON.3
#pragma bit  TOUTPS1 @ T2CON.4
#pragma bit  TOUTPS2 @ T2CON.5
#pragma bit  TOUTPS3 @ T2CON.6

#pragma bit  CCP1M0  @ CCP1CON.0
#pragma bit  CCP1M1  @ CCP1CON.1
#pragma bit  CCP1M2  @ CCP1CON.2
#pragma bit  CCP1M3  @ CCP1CON.3
#pragma bit  DC1B0   @ CCP1CON.4
#pragma bit  DC1B1   @ CCP1CON.5
#pragma bit  P1M0    @ CCP1CON.6
#pragma bit  P1M1    @ CCP1CON.7

#pragma bit  PRSEN   @ PWM1CON.7

#pragma bit  PSSBD0  @ ECCPAS.0
#pragma bit  PSSBD1  @ ECCPAS.1
#pragma bit  PSSAC0  @ ECCPAS.2
#pragma bit  PSSAC1  @ ECCPAS.3
#pragma bit  ECCPASE @ ECCPAS.7

#pragma bit  SWDTEN  @ WDTCON.0

#pragma bit  CM0     @ CMCON0.0
#pragma bit  CM1     @ CMCON0.1
#pragma bit  CM2     @ CMCON0.2
#pragma bit  CIS     @ CMCON0.3
#pragma bit  C1INV   @ CMCON0.4
#pragma bit  C2INV   @ CMCON0.5
#pragma bit  C1OUT   @ CMCON0.6
#pragma bit  C2OUT   @ CMCON0.7

#pragma bit  C2SYNC  @ CMCON1.0
#pragma bit  T1GSS   @ CMCON1.1

#pragma bit  ADON    @ ADCON0.0
#pragma bit  GO      @ ADCON0.1
#pragma bit  CHS0    @ ADCON0.2
#pragma bit  CHS1    @ ADCON0.3
#pragma bit  CHS2    @ ADCON0.4
#pragma bit  VCFG    @ ADCON0.6
#pragma bit  ADFM    @ ADCON0.7

#pragma bit  RAPU_   @ OPTION_REG.7

#pragma bit  TRISA0  @ TRISA.0
#pragma bit  TRISA1  @ TRISA.1
#pragma bit  TRISA2  @ TRISA.2
#pragma bit  TRISA3  @ TRISA.3
#pragma bit  TRISA4  @ TRISA.4
#pragma bit  TRISA5  @ TRISA.5

#pragma bit  TRISC0  @ TRISC.0
#pragma bit  TRISC1  @ TRISC.1
#pragma bit  TRISC2  @ TRISC.2
#pragma bit  TRISC3  @ TRISC.3
#pragma bit  TRISC4  @ TRISC.4
#pragma bit  TRISC5  @ TRISC.5

#pragma bit  TMR1IE  @ PIE1.0
#pragma bit  TMR2IE  @ PIE1.1
#pragma bit  OSFIE   @ PIE1.2
#pragma bit  C1IE    @ PIE1.3
#pragma bit  C2IE    @ PIE1.4
#pragma bit  CCP1IE  @ PIE1.5
#pragma bit  ADIE    @ PIE1.6
#pragma bit  EEIE    @ PIE1.7

#pragma bit  BOD_    @ PCON.0
#pragma bit  POR_    @ PCON.1
#pragma bit  SBODEN  @ PCON.4
#pragma bit  ULPWUE  @ PCON.5

#pragma bit  SCS     @ OSCCON.0
#pragma bit  LTS     @ OSCCON.1
#pragma bit  HTS     @ OSCCON.2
#pragma bit  OSTS    @ OSCCON.3

#pragma bit  VR0     @ VRCON.0
#pragma bit  VR1     @ VRCON.1
#pragma bit  VR2     @ VRCON.2
#pragma bit  VR3     @ VRCON.3
#pragma bit  VRR     @ VRCON.5
#pragma bit  VREN    @ VRCON.7

#pragma bit  RD      @ EECON1.0
#pragma bit  WR      @ EECON1.1
#pragma bit  WREN    @ EECON1.2
#pragma bit  WRERR   @ EECON1.3

#pragma bit  ADCS0   @ ADCON1.4
#pragma bit  ADCS1   @ ADCON1.5
#pragma bit  ADCS2   @ ADCON1.6


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FOSC = LP // LP oscillator: Low-power crystal on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#pragma config /1 0x3FF9 FOSC = XT // XT oscillator: Crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKINT
#pragma config /1 0x3FFA FOSC = HS // HS oscillator: High-speed crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#pragma config /1 0x3FFB FOSC = EC // EC: I/O function on RA4/OSC2/CLKOUT pin, CLKIN on RA5/OSC1/CLKIN
#pragma config /1 0x3FFC FOSC = INTOSCIO // INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#pragma config /1 0x3FFD FOSC = INTOSCCLK // INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#pragma config /1 0x3FFE FOSC = EXTRCIO // EXTRCIO oscillator: External RC on RA5/OSC1/CLKIN, I/O function on RA4/OSC2/CLKOUT pin
#pragma config /1 0x3FFF FOSC = EXTRCCLK // EXTRC oscillator: External RC on RA5/OSC1/CLKIN, CLKOUT function on RA4/OSC2/CLKOUT pin
#pragma config /1 0x3FF7 WDTE = OFF // WDT disabled
#pragma config /1 0x3FFF WDTE = ON // WDT enabled
#pragma config /1 0x3FEF PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FDF MCLRE = OFF // MCLR pin function is digital input, MCLR internally tied to VDD
#pragma config /1 0x3FFF MCLRE = ON // MCLR pin function is MCLR
#pragma config /1 0x3FBF CP = ON // Program memory code protection is enabled
#pragma config /1 0x3FFF CP = OFF // Program memory code protection is disabled
#pragma config /1 0x3F7F CPD = ON // Data memory code protection is enabled
#pragma config /1 0x3FFF CPD = OFF // Data memory code protection is disabled
#pragma config /1 0x3CFF BOREN = OFF // BOR disabled
#pragma config /1 0x3DFF BOREN = SBODEN // BOR controlled by SBOREN bit of the PCON register
#pragma config /1 0x3EFF BOREN = NSLEEP // BOR enabled during operation and disabled in Sleep
#pragma config /1 0x3FFF BOREN = ON // BOR enabled
#pragma config /1 0x3BFF IESO = OFF // Internal External Switchover mode is disabled
#pragma config /1 0x3FFF IESO = ON // Internal External Switchover mode is enabled
#pragma config /1 0x37FF FCMEN = OFF // Fail-Safe Clock Monitor is disabled
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor is enabled
#endif
