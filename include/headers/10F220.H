// HEADER FILE
#pragma chip PIC10F220, core 12, code 255, ram 0x10 : 0x1F
// NOTE: last code location is omitted  ^--

#pragma resetVector 0

#pragma config_def 0x0010

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR;
  char OPTION;
  bit Carry, DC, Zero_, PD, TO;
*/

#pragma char OSCCAL @ 5
#pragma char GPIO   @ 6
#pragma char ADCON0 @ 7
#pragma char ADRES  @ 8

#pragma char TRISGPIO @ TRISB

#pragma bit GPWUF @ STATUS.7

#pragma bit FOSC4 @ OSCCAL.0

#pragma bit GP0   @ GPIO.0
#pragma bit GP1   @ GPIO.1
#pragma bit GP2   @ GPIO.2
#pragma bit GP3   @ GPIO.3

#pragma bit ADON  @ ADCON0.0
#pragma bit GO    @ ADCON0.1
#pragma bit CHS0  @ ADCON0.2
#pragma bit CHS1  @ ADCON0.3
#pragma bit ANS0  @ ADCON0.6
#pragma bit ANS1  @ ADCON0.7

#pragma bit GPPU_ @ OPTION.6
#pragma bit GPWU_ @ OPTION.7


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FFE IOSCFS = 4MHZ // 4 MHz
#pragma config /1 0x0FFF IOSCFS = 8MHZ // 8 MHz
#pragma config /1 0x0FFE IOFSCS = 4MHZ // 4 MHz
#pragma config /1 0x0FFF IOFSCS = 8MHZ // 8 MHz
#pragma config /1 0x0FFD MCPU = ON // Pull-up enabled
#pragma config /1 0x0FFF MCPU = OFF // Pull-up disabled
#pragma config /1 0x0FFB WDTE = OFF // WDT disabled
#pragma config /1 0x0FFF WDTE = ON // WDT enabled
#pragma config /1 0x0FF7 CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#pragma config /1 0x0FEF MCLRE = OFF // GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD
#pragma config /1 0x0FFF MCLRE = ON // GP3/MCLR pin function is MCLR
#endif
