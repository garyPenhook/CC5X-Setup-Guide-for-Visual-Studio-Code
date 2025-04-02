// HEADER FILE
#pragma chip PIC12F510, core 12, code 1023, ram 10 : 0x3F
// NOTE: last code location is omitted   ^--

#pragma resetVector 0

#pragma config_def 0x0010

/* Predefined:
  char W;
  char INDF, TMR0, PCL, STATUS, FSR;
  char OPTION;
  bit Carry, DC, Zero_, PD, TO, PA0;
  bit FSR_5, FSR_6;
*/

#pragma char OSCCAL  @ 5
#pragma char GPIO    @ 6
#pragma char CM1CON0 @ 7
#pragma char ADCON0  @ 8
#pragma char ADRES   @ 9

#pragma char TRISGPIO @ TRISB

#pragma bit  CWUF     @ STATUS.6
#pragma bit  GPWUF    @ STATUS.7

#pragma bit  GP0      @ GPIO.0
#pragma bit  GP1      @ GPIO.1
#pragma bit  GP2      @ GPIO.2
#pragma bit  GP3      @ GPIO.3
#pragma bit  GP4      @ GPIO.4
#pragma bit  GP5      @ GPIO.5

#pragma bit  C1WU_    @ CM1CON0.0
#pragma bit  C1PREF   @ CM1CON0.1
#pragma bit  C1NREF   @ CM1CON0.2
#pragma bit  C1ON     @ CM1CON0.3
#pragma bit  C1T0CS_  @ CM1CON0.4
#pragma bit  C1POL    @ CM1CON0.5
#pragma bit  C1OUTEN_ @ CM1CON0.6
#pragma bit  C1OUT    @ CM1CON0.7

#pragma bit  ADON     @ ADCON0.0
#pragma bit  GO       @ ADCON0.1
#pragma bit  CHS0     @ ADCON0.2
#pragma bit  CHS1     @ ADCON0.3
#pragma bit  ADCS0    @ ADCON0.4
#pragma bit  ADCS1    @ ADCON0.5
#pragma bit  ANS0     @ ADCON0.6
#pragma bit  ANS1     @ ADCON0.7


#if __CC5X__ >= 3600  &&  !defined _DISABLE_DYN_CONFIG
#pragma config /1 0x0FFC OSC = LP // LP oscillator with 18 ms DRT
#pragma config /1 0x0FFD OSC = XT // XT oscillator with 18 ms DRT
#pragma config /1 0x0FFE OSC = IntRC // INTOSC with 1.125 ms DRT
#pragma config /1 0x0FFF OSC = ExtRC // EXTRC with 1.125 ms DRT
#pragma config /1 0x0FFF ExtRC = OSC // EXTRC with 1.125 ms DRT
#pragma config /1 0x0FF7 CP = ON // Code protection on
#pragma config /1 0x0FFF CP = OFF // Code protection off
#pragma config /1 0x0FEF MCLRE = OFF // GP3/MCLR pin functions as GP3, MCLR internally tied to VDD
#pragma config /1 0x0FFF MCLRE = ON // GP3/MCLR Functions as MCLR
#pragma config /1 0x0FDF IOSCFS = OFF // 4 MHz INTOSC Speed
#pragma config /1 0x0FFF IOSCFS = ON // 8 MHz INTOSC Speed
#endif
