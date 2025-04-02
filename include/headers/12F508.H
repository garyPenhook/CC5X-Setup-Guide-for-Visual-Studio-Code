// HEADER FILE
#pragma chip PIC12F508, core 12, code 511, ram 7 : 0x1F
// NOTE: last code location is omitted  ^--

#pragma resetVector 0

#pragma config_def 0x0011

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR;
  char OPTION;
  bit Carry, DC, Zero_, PD, TO, PA0, PA1, PA2;
  bit FSR_5, FSR_6;
*/

#pragma char OSCCAL @ 5
#pragma char GPIO   @ 6
#pragma char TRISGPIO @ TRISB

#pragma bit GPWUF @ STATUS.7

#pragma bit GP0   @ GPIO.0
#pragma bit GP1   @ GPIO.1
#pragma bit GP2   @ GPIO.2
#pragma bit GP3   @ GPIO.3
#pragma bit GP4   @ GPIO.4
#pragma bit GP5   @ GPIO.5


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FFC OSC = LP // LP oscillator
#pragma config /1 0x0FFD OSC = XT // XT oscillator
#pragma config /1 0x0FFE OSC = IntRC // internal RC oscillator
#pragma config /1 0x0FFF OSC = ExtRC // external RC oscillator
#pragma config /1 0x0FFF ExtRC = OSC // external RC oscillator
#pragma config /1 0x0FF7 CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#pragma config /1 0x0FEF MCLRE = OFF // GP3/MCLR pin function is digital input, MCLR internally tied to VDD
#pragma config /1 0x0FFF MCLRE = ON // GP3/MCLR pin function is MCLR
#endif
