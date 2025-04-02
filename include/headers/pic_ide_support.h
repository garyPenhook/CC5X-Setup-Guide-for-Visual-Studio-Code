/* PIC16F15313 Register Definitions for IDE Support */
#ifndef PIC_IDE_SUPPORT_H
#define PIC_IDE_SUPPORT_H

#ifndef __CC5X__
/* Define basic PIC registers for IDE support */
#define PORTA (*(volatile unsigned char*)0x0C)
#define TRISA (*(volatile unsigned char*)0x8C)
#define nop() ((void)0)
#define bit unsigned char
#endif

#endif /* PIC_IDE_SUPPORT_H */
