
// The definitions in this file are for the MPLAB X GUI only!
// These definitions are never compiled by CC5X.

/* Recommended usage of this file is at the start of a source module:
#if !defined __CC5X__
 // These definitions are for the MPLAB X GUI only (not compiled)
 #include "C:\Program Files (x86)\bknd\cc5x\defmpx16.h"

 // MPLAB X will read chip specific symbols from the device header file:
 #include "C:\Program Files (x86)\bknd\cc5x\16F1938.h"
#endif
*/


#if !defined __CC5X__
 typedef signed char int8;
 typedef unsigned char uns8;
 typedef signed int int16;
 typedef unsigned int uns16;
 typedef signed short long int24;
 typedef unsigned short long uns24;
 typedef signed long int32;
 typedef unsigned long uns32;
 typedef unsigned char bit;
 typedef float float16;
 typedef float float24;
 typedef float float32;
 typedef signed char fixed_8;
 typedef signed char fixedU_8;
 typedef signed int fixed_16;
 typedef signed int fixed8_8;
 typedef unsigned int fixedU_16;
 typedef signed int fixedU8_8;
 typedef signed short long fixed_24;
 typedef signed short long fixed8_16;
 typedef signed short long fixed16_8;
 typedef unsigned short long fixedU_24;
 typedef unsigned short long fixedU8_16;
 typedef unsigned short long fixedU16_8;
 typedef signed long fixed_32;
 typedef signed long fixed8_24;
 typedef signed long fixed16_16;
 typedef signed long fixed24_8;
 typedef unsigned long fixedU_32;
 typedef unsigned long fixedU8_24;
 typedef unsigned long fixedU16_16;
 typedef unsigned long fixedU24_8;

 #define interrupt void
 typedef unsigned long DataInW;
 #define sharedM
 #define shadowDef
 #define size1
 #define size2
 #define page0
 #define page1
 #define page2
 #define page3
 #define page4
 #define page5
 #define page6
 #define page7
 #define page8
 #define page9
 #define page10
 #define page11
 #define page12
 #define page13
 #define page14
 #define page15
 #define bank0
 #define bank1
 #define bank2
 #define bank3
 #define bank4
 #define bank5
 #define bank6
 #define bank7
 #define bank8
 #define bank9
 #define bank10
 #define bank11
 #define bank12
 #define bank13
 #define bank14
 #define bank15
 #define bank16
 #define bank17
 #define bank18
 #define bank19
 #define bank20
 #define bank21
 #define bank22
 #define bank23
 #define bank24
 #define bank25
 #define bank26
 #define bank27
 #define bank28
 #define bank29
 #define bank30
 #define bank31
 #define bank32
 #define bank33
 #define bank34
 #define bank35
 #define bank36
 #define bank37
 #define bank38
 #define bank39
 #define bank40
 #define bank41
 #define bank42
 #define bank43
 #define bank44
 #define bank45
 #define bank46
 #define bank47
 #define bank48
 #define bank49
 #define bank50
 #define bank51
 #define bank52
 #define bank53
 #define bank54
 #define bank55
 #define bank56
 #define bank57
 #define bank58
 #define bank59
 #define bank60
 #define bank61
 #define bank62
 #define bank63

 void btsc(char);
 void btss(char);
 void clrwdt(void);
 void clearRAM(void);
 char decsz(char);
 char incsz(char);
 void nop(void);
 void nop2(void);
 void retint(void);
 char rl(char);
 char rr(char);
 void sleep(void);
 void skip(char);
 char swap(char);

 char addWFC(char);
 char subWFB(char);
 char lsl(char);
 char lsr(char);
 char asr(char);
 void softReset(void);

 char *FSR0, *FSR1;
 char INDF0, INDF1;
 char FSR0L, FSR0H, FSR1L, FSR1H, FSR;
 char W, WREG;
 char PCL, PCLATH, STATUS, INTCON;
 bit Carry, DC, Zero_, PD, TO;

 typedef void Task;
 void waitState( char);
 void changeState( char);
 void startTask( Task (*task)());
 void restartTask( void);
 void clearTask( Task (*task)());
 void taskSlicer( Task (*task)());
 char getState( Task (*task)());
 char getStateAddress( Task (*task)());
 void suspendTask( Task (*task)());
 void resumeTask( Task (*task)());
 void waitUntilResume( char);
#endif

