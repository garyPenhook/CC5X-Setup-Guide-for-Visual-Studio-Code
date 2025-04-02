// HEADER FILE
#pragma chip PIC12F519, core 12, code 1023, ram 7 : 0x3F
// NOTE: last code location is omitted   ^--

#pragma resetVector 0

#pragma config_def 0x0010

#pragma data_area  0x400 : 0x43F

#pragma user_ID_addr 0x440

#if __CC5X__ < 3305
 #error 12F519 requires CC5X version 3.3E or later
#endif

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR, PORTB;
  char OPTION;
  bit Carry, DC, Zero_, PD, TO, PA0, PA1, PA2;
  bit FSR_5, FSR_6;
*/

#pragma char OSCCAL @ 5

#pragma char EECON  @ 0x21
#pragma char EEDATA @ 0x25
#pragma char EEADR  @ 0x26

#pragma bit  RBWUF  @ STATUS.7

#pragma bit  RD      @ EECON.0
#pragma bit  WR      @ EECON.1
#pragma bit  WREN    @ EECON.2
#pragma bit  WRERR   @ EECON.3
#pragma bit  FREE    @ EECON.4


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FFC FOSC = LP // LP Osc With 18 ms DRT
#pragma config /1 0x0FFD FOSC = XT // XT Osc With 18 ms DRT
#pragma config /1 0x0FFE FOSC = INTRC // INTRC With 1 ms DRT
#pragma config /1 0x0FFE IntRC = OSC // INTRC With 1 ms DRT
#pragma config /1 0x0FFF FOSC = EXTRC // EXTRC With 1 ms DRT
#pragma config /1 0x0FFF ExtRC = OSC // EXTRC With 1 ms DRT
#pragma config /1 0x0FFB WDTE = OFF // Disabled
#pragma config /1 0x0FFF WDTE = ON // Enabled
#pragma config /1 0x0FF7 CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#pragma config /1 0x0FEF MCLRE = OFF // RB3/MCLR Functions as RB3
#pragma config /1 0x0FFF MCLRE = ON // RB3/MCLR Functions as MCLR
#pragma config /1 0x0FDF IOSCFS = 4MHz // 4 MHz INTOSC Speed
#pragma config /1 0x0FFF IOSCFS = 8MHz // 8 MHz INTOSC Speed
#pragma config /1 0x0FBF CPDF = ON // Code protection on
#pragma config /1 0x0FFF CPDF = OFF // Code protection off
#endif
