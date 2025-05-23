// HEADER FILE
#ifndef ICD2_DEBUG
 #pragma chip PIC12HV609, core 14, code 1024, ram 64 : 0x7F

#else
 #pragma chip PIC12HV609, core 14, code 0x300, ram 64 : 0x7F
 // last 256 locations are reserved for debugging

 //RESERVED RAM LOCATIONS
 char reservedICD2[12] @ 0x65;  // reserved RAM for ICD2

 #pragma stackLevels 7   // reserve one level for debugging

#endif

#pragma ramdef  0x70 : 0x7F mapped_into_all_banks

#define INT_com_style
#define INT_rambank  0   /* interrupt variables in bank 0 */

#pragma config_def 0x0222

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR;
  char OPTION;
  char PCLATH, INTCON;
  bit PS0, PS1, PS2, PSA, T0SE, T0CS, INTEDG, RBPU_;
  bit Carry, DC, Zero_, PD, TO, RP0, RP1, IRP;
  bit RBIF, INTF, T0IF, RBIE, INTE, T0IE, GIE;
  bit PA0, PA1;  // PCLATH
*/

#pragma char GPIO    @ 0x05

#pragma char PIR1    @ 0x0C

#pragma char TMR1L   @ 0x0E
#pragma char TMR1H   @ 0x0F
#pragma char T1CON   @ 0x10

#pragma char VRCON   @ 0x19
#pragma char CMCON0  @ 0x1A

#pragma char CMCON1  @ 0x1C

#pragma char TRISIO  @ 0x85

#pragma char PIE1    @ 0x8C

#pragma char PCON    @ 0x8E

#pragma char OSCTUNE @ 0x90

#pragma char WPU     @ 0x95
#pragma char IOC     @ 0x96

#pragma char ANSEL   @ 0x9F

#pragma bit  GPIF    @ INTCON.0
#pragma bit  GPIE    @ INTCON.3
#pragma bit  PEIE    @ INTCON.6

#pragma bit  TMR1IF  @ PIR1.0
#pragma bit  CMIF    @ PIR1.3

#pragma bit  TMR1ON  @ T1CON.0
#pragma bit  TMR1CS  @ T1CON.1
#pragma bit  T1SYNC_ @ T1CON.2
#pragma bit  T1OSCEN @ T1CON.3
#pragma bit  T1CKPS0 @ T1CON.4
#pragma bit  T1CKPS1 @ T1CON.5
#pragma bit  TMR1GE  @ T1CON.6
#pragma bit  T1GINV  @ T1CON.7

#pragma bit  VR0     @ VRCON.0
#pragma bit  VR1     @ VRCON.1
#pragma bit  VR2     @ VRCON.2
#pragma bit  VR3     @ VRCON.3
#pragma bit  FVREN   @ VRCON.4
#pragma bit  VRR     @ VRCON.5
#pragma bit  CMVREN  @ VRCON.7

#pragma bit  CMCH    @ CMCON0.0
#pragma bit  CMR     @ CMCON0.2
#pragma bit  CMPOL   @ CMCON0.4
#pragma bit  CMOE    @ CMCON0.5
#pragma bit  COUT    @ CMCON0.6
#pragma bit  CMON    @ CMCON0.7

#pragma bit  CMSYNC  @ CMCON1.0
#pragma bit  T1GSS   @ CMCON1.1
#pragma bit  CMHYS   @ CMCON1.3
#pragma bit  T1ACS   @ CMCON1.4

#pragma bit  TMR1IE  @ PIE1.0
#pragma bit  CMIE    @ PIE1.3

#pragma bit  BOR_    @ PCON.0
#pragma bit  POR_    @ PCON.1

#pragma bit  ANS0    @ ANSEL.0
#pragma bit  ANS1    @ ANSEL.1
#pragma bit  ANS3    @ ANSEL.3


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FF8 FOSC = LP // LP oscillator: Low-power crystal on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#pragma config /1 0x3FF9 FOSC = XT // XT oscillator: Crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#pragma config /1 0x3FFA FOSC = HS // HS oscillator: High-speed crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#pragma config /1 0x3FFB FOSC = EC // EC: I/O function on GP4/OSC2/CLKOUT pin, CLKIN on GP5/OSC1/CLKIN
#pragma config /1 0x3FFC FOSC = INTOSCIO // INTOSCIO oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#pragma config /1 0x3FFD FOSC = INTOSCCLK // INTOSC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#pragma config /1 0x3FFE FOSC = EXTRCIO // RCIO oscillator: I/O function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN
#pragma config /1 0x3FFF FOSC = EXTRCCLK // RC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN
#pragma config /1 0x3FF7 WDTE = OFF // WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
#pragma config /1 0x3FFF WDTE = ON // WDT enabled
#pragma config /1 0x3FEF PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FDF MCLRE = OFF // MCLR pin function is digital input, MCLR internally tied to VDD
#pragma config /1 0x3FFF MCLRE = ON // MCLR pin function is MCLR
#pragma config /1 0x3FBF CP = ON // Program memory code protection is enabled
#pragma config /1 0x3FFF CP = OFF // Program memory code protection is disabled
#pragma config /1 0x3F7F IOSCFS = 4MHZ // 4 MHz
#pragma config /1 0x3FFF IOSCFS = 8MHZ // 8 MHz
#pragma config /1 0x3CFF BOREN = OFF // BOR disabled
#pragma config /1 0x3EFF BOREN = NSLEEP // BOR enabled during operation and disabled in Sleep
#pragma config /1 0x3FFF BOREN = ON // BOR enabled
#endif
