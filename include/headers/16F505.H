// HEADER FILE
#pragma chip PIC16F505, core 12, code 1023, ram 8 : 0x7F
// NOTE: last code location is omitted   ^--

#pragma resetVector 0

#pragma config_def 0x0022

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR, PORTA, PORTB;
  char OPTION, TRISA, TRISB;
  bit Carry, DC, Zero_, PD, TO, PA0, PA1, PA2;
  bit FSR_5, FSR_6;
*/

#pragma char OSCCAL @ 5

#pragma bit RBWUF @ STATUS.7

#pragma bit RB0   @ PORTB.0
#pragma bit RB1   @ PORTB.1
#pragma bit RB2   @ PORTB.2
#pragma bit RB3   @ PORTB.3
#pragma bit RB4   @ PORTB.4
#pragma bit RB5   @ PORTB.5

#pragma bit RC0   @ PORTC.0
#pragma bit RC1   @ PORTC.1
#pragma bit RC2   @ PORTC.2
#pragma bit RC3   @ PORTC.3
#pragma bit RC4   @ PORTC.4
#pragma bit RC5   @ PORTC.5


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FF8 OSC = LP // LP oscillator
#pragma config /1 0x0FF9 OSC = XT // XT oscillator
#pragma config /1 0x0FFA OSC = HS // HS oscillator
#pragma config /1 0x0FFB OSC = EC // EC oscillator/RB4 function on RB4/OSC2/CLKOUT pin
#pragma config /1 0x0FEF CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#pragma config /1 0x0FDF MCLRE = OFF // GP3/MCLR pin function is digital input, MCLR internally tied to VDD
#pragma config /1 0x0FFF MCLRE = ON // RB3/MCLR pin function is MCLR
#endif
