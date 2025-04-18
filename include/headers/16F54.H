// HEADER FILE
#pragma chip PIC16F54, core 12, code  512, ram 7 : 0x1F

#pragma config_def 0x0011

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR, PORTA, PORTB;
  char OPTION, TRISA, TRISB;
  bit Carry, DC, Zero_, PD, TO, PA0, PA1, PA2;
  bit FSR_5, FSR_6;
*/

#pragma bit RA0   @ 5.0
#pragma bit RA1   @ 5.1
#pragma bit RA2   @ 5.2
#pragma bit RA3   @ 5.3

#pragma bit RB0   @ 6.0
#pragma bit RB1   @ 6.1
#pragma bit RB2   @ 6.2
#pragma bit RB3   @ 6.3
#pragma bit RB4   @ 6.4
#pragma bit RB5   @ 6.5
#pragma bit RB6   @ 6.6
#pragma bit RB7   @ 6.7


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FFC OSC = LP // LP oscillator
#pragma config /1 0x0FFD OSC = XT // XT oscillator
#pragma config /1 0x0FFE OSC = HS // HS oscillator
#pragma config /1 0x0FFF OSC = RC // RC oscillator
#pragma config /1 0x0FFF RC = OSC // RC oscillator
#pragma config /1 0x0FF7 CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#endif
