// HEADER FILE
#ifndef ICD2_DEBUG
 #pragma chip PIC16F636, core 14, code 2048, ram 32 : 0xBF /1 /3

#else
 #pragma chip PIC16F636, core 14, code 0x700, ram 32 : 0xBF /1 /3
 // last 256 locations are reserved for debugging

 //RESERVED RAM LOCATIONS
 char ICD2R1 @ 0x70;
 char reservedICD2[11] @ 0x65;  // reserved RAM for ICD2

 #pragma stackLevels 7   // reserve one level for debugging
#endif

#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_lgen_style
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

#pragma char WDTCON  @ 0x18
#pragma char CMCON0  @ 0x19
#pragma char CMCON1  @ 0x1A

#pragma char TRISC   @ 0x87

#pragma char PIE1    @ 0x8C

#pragma char PCON    @ 0x8E
#pragma char OSCCON  @ 0x8F
#pragma char OSCTUNE @ 0x90

#pragma char LVDCON  @ 0x94
#pragma char WPUDA   @ 0x95
#pragma char IOCA    @ 0x96
#pragma char WDA     @ 0x97

#pragma char VRCON   @ 0x99
#pragma char EEDAT   @ 0x9A
#pragma char EEADR   @ 0x9B
#pragma char EECON1  @ 0x9C
#pragma char EECON2  @ 0x9D

#pragma char CRCON   @ 0x110
#pragma char CRDAT0  @ 0x111
#pragma char CRDAT1  @ 0x112
#pragma char CRDAT2  @ 0x113
#pragma char CRDAT3  @ 0x114

#pragma bit  RAIF    @ INTCON.0
#pragma bit  RAIE    @ INTCON.3
#pragma bit  PEIE    @ INTCON.6

#pragma bit  TMR1IF  @ PIR1.0
#pragma bit  OSFIF   @ PIR1.2
#pragma bit  C1IF    @ PIR1.3
#pragma bit  C2IF    @ PIR1.4
#pragma bit  CRIF    @ PIR1.5
#pragma bit  LVDIF   @ PIR1.6
#pragma bit  EEIF    @ PIR1.7

#pragma bit  TMR1ON  @ T1CON.0
#pragma bit  TMR1CS  @ T1CON.1
#pragma bit  T1SYNC_ @ T1CON.2
#pragma bit  T1OSCEN @ T1CON.3
#pragma bit  T1CKPS0 @ T1CON.4
#pragma bit  T1CKPS1 @ T1CON.5
#pragma bit  TMR1GE  @ T1CON.6
#pragma bit  T1GINV  @ T1CON.7

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
#pragma bit  OSFIE   @ PIE1.2
#pragma bit  C1IE    @ PIE1.3
#pragma bit  C2IE    @ PIE1.4
#pragma bit  CRIE    @ PIE1.5
#pragma bit  LVDIE   @ PIE1.6
#pragma bit  EEIE    @ PIE1.7

#pragma bit  BOD_    @ PCON.0
#pragma bit  POR_    @ PCON.1
#pragma bit  WUR_    @ PCON.3
#pragma bit  SBODEN  @ PCON.4
#pragma bit  ULPWUE  @ PCON.5

#pragma bit  SCS     @ OSCCON.0
#pragma bit  LTS     @ OSCCON.1
#pragma bit  HTS     @ OSCCON.2
#pragma bit  OSTS    @ OSCCON.3

#pragma bit  LVDEN   @ LVDCON.4
#pragma bit  IRVST   @ LVDCON.5

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

#pragma bit  CRREG0  @ CRCON.0
#pragma bit  CRREG1  @ CRCON.1
#pragma bit  ENC     @ CRCON.6
#pragma bit  GO      @ CRCON.7


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FOSC = LP // LP oscillator: Low-power crystal on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
#pragma config /1 0x3FF9 FOSC = XT // XT oscillator: Crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
#pragma config /1 0x3FFA FOSC = HS // HS oscillator: High-speed crystal/resonator on RA5/T1CKI/OSC1/CLKIN and RA4/T1G/OSC2/CLKOUT
#pragma config /1 0x3FFB FOSC = EC // EC: I/O function on RA4/T1G/OSC2/CLKOUT, CLKIN on RA5/T1CKI/OSC1/CLKIN
#pragma config /1 0x3FFC FOSC = INTOSCIO // INTOSCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
#pragma config /1 0x3FFD FOSC = INTOSCCLK // INTOSC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, I/O function on RA5/T1CKI/OSC1/CLKIN
#pragma config /1 0x3FFE FOSC = EXTRCIO // RCIO oscillator: I/O function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN
#pragma config /1 0x3FFF FOSC = EXTRCCLK // RC oscillator: CLKOUT function on RA4/T1G/OSC2/CLKOUT pin, RC on RA5/T1CKI/OSC1/CLKIN
#pragma config /1 0x3FF7 WDTE = OFF // WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
#pragma config /1 0x3FFF WDTE = ON // WDT enabled
#pragma config /1 0x3FEF PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FDF MCLRE = OFF // MCLR pin function is alternate function, MCLR function is internally disabled
#pragma config /1 0x3FFF MCLRE = ON // MCLR pin is MCLR function and weak internal pull-up is enabled
#pragma config /1 0x3FBF CP = ON // Program memory is external read and write-protected
#pragma config /1 0x3FFF CP = OFF // Program memory is not code protected
#pragma config /1 0x3F7F CPD = ON // Data memory is external read protected
#pragma config /1 0x3FFF CPD = OFF // Data memory is not external read protected
#pragma config /1 0x3CFF BOREN = OFF // BOD and SBODEN disabled
#pragma config /1 0x3DFF BOREN = SBODEN // SBODEN controls BOD function
#pragma config /1 0x3EFF BOREN = NSLEEP // BOD enabled while running and disabled in Sleep. SBODEN bit disabled.
#pragma config /1 0x3FFF BOREN = ON // BOD enabled and SBOdEN bit disabled
#pragma config /1 0x3BFF IESO = OFF // Internal External Switchover mode disabled
#pragma config /1 0x3FFF IESO = ON // Internal External Switchover mode enabled
#pragma config /1 0x37FF FCMEN = OFF // Fail-Safe Clock Monitor disabled
#pragma config /1 0x3FFF FCMEN = ON // Fail-Safe Clock Monitor enabled
#pragma config /1 0x2FFF WURE = ON // Wake-up and Reset enabled
#pragma config /1 0x2FFF WUREN = ON // Wake-up and Reset enabled
#pragma config /1 0x3FFF WURE = OFF // Standard wake-up and continue enabled
#pragma config /1 0x3FFF WUREN = OFF // Standard wake-up and continue enabled
#endif
