// HEADER FILE
#ifndef ICD2_DEBUG
 #pragma chip PIC16F818, core 14, code 1024, ram 32 : 0xFF /1 /3

#else
 #pragma chip PIC16F818, core 14, code 0x300, ram 32 : 0xFF /1 /3
 // last 256 locations are reserved for debugging

 //RESERVED RAM LOCATIONS
 char reservedICD2[12] @ 0x65;  // reserved RAM for ICD2

 #pragma stackLevels 7   // reserve one level for debugging
#endif

#pragma ramdef  0x40 : 0x7F mapped_into_all_banks

#define INT_lgen_style
#define INT_rambank  0   /* interrupt variables in bank 0 */

#pragma config_def 0x1118

#pragma wideConstData

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR, PORTA, PORTB;
  char OPTION, TRISA, TRISB;
  char PCLATH, INTCON;
  bit PS0, PS1, PS2, PSA, T0SE, T0CS, INTEDG, RBPU_;
  bit Carry, DC, Zero_, PD, TO, RP0, RP1, IRP;
  bit RBIF, INTF, T0IF, RBIE, INTE, T0IE, GIE;
  bit PA0, PA1;  // PCLATH
*/

#pragma char PIR1    @ 12
#pragma char PIR2    @ 13
#pragma char TMR1L   @ 14
#pragma char TMR1H   @ 15
#pragma char T1CON   @ 16
#pragma char TMR2    @ 17
#pragma char T2CON   @ 18
#pragma char SSPBUF  @ 19
#pragma char SSPCON  @ 20
#pragma char CCPR1L  @ 21
#pragma char CCPR1H  @ 22
#pragma char CCP1CON @ 23

#pragma char ADRESH  @ 30
#pragma char ADCON0  @ 31

#pragma char PIE1    @ 0x8C
#pragma char PIE2    @ 0x8D
#pragma char PCON    @ 0x8E
#pragma char OSCCON  @ 0x8F
#pragma char OSCTUNE @ 0x90

#pragma char PR2     @ 0x92
#pragma char SSPADD  @ 0x93
#pragma char SSPSTAT @ 0x94

#pragma char ADRESL  @ 0x9E
#pragma char ADCON1  @ 0x9F

#pragma char EEDATA  @ 0x10C
#pragma char EEADR   @ 0x10D
#pragma char EEDATH  @ 0x10E
#pragma char EEADRH  @ 0x10F

#pragma char EECON1  @ 0x18C
#pragma char EECON2  @ 0x18D


#pragma bit  TMR0IF  @ 11.2
#pragma bit  TMR0IE  @ 11.5
#pragma bit  PEIE    @ 11.6  mapped_into_all_banks

#pragma bit  TMR1IF  @ 12.0
#pragma bit  TMR2IF  @ 12.1
#pragma bit  CCP1IF  @ 12.2
#pragma bit  SSPIF   @ 12.3
#pragma bit  ADIF    @ 12.6

#pragma bit  EEIF    @ 13.4

#pragma bit  TMR1ON  @ 16.0
#pragma bit  TMR1CS  @ 16.1
#pragma bit  T1SYNC_ @ 16.2
#pragma bit  T1OSCEN @ 16.3
#pragma bit  T1CKPS0 @ 16.4
#pragma bit  T1CKPS1 @ 16.5

#pragma bit  T2CKPS0 @ 18.0
#pragma bit  T2CKPS1 @ 18.1
#pragma bit  TMR2ON  @ 18.2
#pragma bit  TOUTPS0 @ 18.3
#pragma bit  TOUTPS1 @ 18.4
#pragma bit  TOUTPS2 @ 18.5
#pragma bit  TOUTPS3 @ 18.6

#pragma bit  SSPM0   @ 20.0
#pragma bit  SSPM1   @ 20.1
#pragma bit  SSPM2   @ 20.2
#pragma bit  SSPM3   @ 20.3
#pragma bit  CKP     @ 20.4
#pragma bit  SSPEN   @ 20.5
#pragma bit  SSPOV   @ 20.6
#pragma bit  WCOL    @ 20.7

#pragma bit  CCP1M0  @ 23.0
#pragma bit  CCP1M1  @ 23.1
#pragma bit  CCP1M2  @ 23.2
#pragma bit  CCP1M3  @ 23.3
#pragma bit  CCP1Y   @ 23.4
#pragma bit  CCP1X   @ 23.5

#pragma bit  ADON    @ 31.0
#pragma bit  GO      @ 31.2
#pragma bit  CHS0    @ 31.3
#pragma bit  CHS1    @ 31.4
#pragma bit  CHS2    @ 31.5
#pragma bit  ADCS0   @ 31.6
#pragma bit  ADCS1   @ 31.7

#pragma bit  TRISA6  @ 0x85.6
#pragma bit  TRISA7  @ 0x85.7

#pragma bit  TMR1IE  @ 0x8C.0
#pragma bit  TMR2IE  @ 0x8C.1
#pragma bit  CCP1IE  @ 0x8C.2
#pragma bit  SSPIE   @ 0x8C.3
#pragma bit  ADIE    @ 0x8C.6

#pragma bit  EEIE    @ 0x8D.4

#pragma bit  BOR_    @ 0x8E.0
#pragma bit  POR_    @ 0x8E.1

#pragma bit  FLTS    @ 0x8F.2
#pragma bit  IRCF0   @ 0x8F.4
#pragma bit  IRCF1   @ 0x8F.5
#pragma bit  IRCF2   @ 0x8F.6

#pragma bit  TUN0    @ 0x90.0
#pragma bit  TUN1    @ 0x90.1
#pragma bit  TUN2    @ 0x90.2
#pragma bit  TUN3    @ 0x90.3
#pragma bit  TUN4    @ 0x90.4
#pragma bit  TUN5    @ 0x90.5

#pragma bit  BF      @ 0x94.0
#pragma bit  UA      @ 0x94.1
#pragma bit  RW_     @ 0x94.2
#pragma bit  S       @ 0x94.3
#pragma bit  P       @ 0x94.4
#pragma bit  DA_     @ 0x94.5
#pragma bit  CKE     @ 0x94.6
#pragma bit  SMP     @ 0x94.7

#pragma bit  PCFG0   @ 0x9F.0
#pragma bit  PCFG1   @ 0x9F.1
#pragma bit  PCFG2   @ 0x9F.2
#pragma bit  PCFG3   @ 0x9F.3
#pragma bit  ADCS2   @ 0x9F.6
#pragma bit  ADFM    @ 0x9F.7

#pragma bit  RD      @ 0x18C.0
#pragma bit  WR      @ 0x18C.1
#pragma bit  WREN    @ 0x18C.2
#pragma bit  WRERR   @ 0x18C.3
#pragma bit  FREE    @ 0x18C.4
#pragma bit  EEPGD   @ 0x18C.7


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x3FEC FOSC = LP // LP oscillator
#pragma config /1 0x3FED FOSC = XT // XT oscillator
#pragma config /1 0x3FEE FOSC = HS // HS oscillator
#pragma config /1 0x3FEF FOSC = EC // EXTCLK; port I/O function on RA6/OSC2/CLKO pin
#pragma config /1 0x3FFC FOSC = INTOSCIO // INTRC oscillator; port I/O function on both RA6/OSC2/CLKO pin and RA7/OSC1/CLKI pin
#pragma config /1 0x3FFD FOSC = INTOSCCLK // INTRC oscillator; CLKO function on RA6/OSC2/CLKO pin and port I/O function on RA7/OSC1/CLKI pin
#pragma config /1 0x3FFE FOSC = EXTRCIO // EXTRC oscillator; port I/O function on RA6/OSC2/CLKO pin
#pragma config /1 0x3FFF FOSC = EXTRCCLK // EXTRC oscillator; CLKO function on RA6/OSC2/CLKO pin
#pragma config /1 0x3FFB WDTE = OFF // WDT disabled
#pragma config /1 0x3FFF WDTE = ON // WDT enabled
#pragma config /1 0x3FF7 PWRTE = ON // PWRT enabled
#pragma config /1 0x3FFF PWRTE = OFF // PWRT disabled
#pragma config /1 0x3FDF MCLRE = OFF // RA5/MCLR/VPP pin function is digital I/O, MCLR internally tied to VDD
#pragma config /1 0x3FFF MCLRE = ON // RA5/MCLR/VPP pin function is MCLR
#pragma config /1 0x3FBF BOREN = OFF // BOR disabled
#pragma config /1 0x3FFF BOREN = ON // BOR enabled
#pragma config /1 0x3F7F LVP = OFF // RB3/PGM pin has digital I/O function, HV on MCLR must be used for programming
#pragma config /1 0x3FFF LVP = ON // RB3/PGM pin has PGM function, Low-Voltage Programming enabled
#pragma config /1 0x3EFF CPD = ON // Data EE memory locations code-protected
#pragma config /1 0x3FFF CPD = OFF // Data EE memory not code-protected
#pragma config /1 0x3BFF WRT = 1024 // 0000h to 03FFh write-protected
#pragma config /1 0x3DFF WRT = 512 // 0000h to 01FFh write-protected, 0200h to 03FFh may be modified by EECON control
#pragma config /1 0x3FFF WRT = OFF // Write protection off
#pragma config /1 0x37FF DEBUG = ON // In-Circuit Debugger enabled, RB6 and RB7 are dedicated to the debugger
#pragma config /1 0x3FFF DEBUG = OFF // In-Circuit Debugger disabled, RB6 and RB7 are general purpose I/O pins
#pragma config /1 0x2FFF CCPMX = RB3 // CCP1 function on RB3
#pragma config /1 0x3FFF CCPMX = RB2 // CCP1 function on RB2
#pragma config /1 0x1FFF CP = ON // All memory locations code-protected
#pragma config /1 0x1FFF CP = ALL // All memory locations code-protected
#pragma config /1 0x3FFF CP = OFF // Code protection off
#endif
