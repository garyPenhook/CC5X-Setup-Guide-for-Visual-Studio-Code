/*
 * Project: PIC Sample Project
 * Description: Sample template for PIC microcontroller
 * Device: PIC16F15313
 */

// Device selection
#pragma chip PIC16F15313

// Include device-specific header
#include "16F15313.H"

// For C/C++ IntelliSense (IDE support), also define hardware
#ifdef __CLANGD__
// These defines help the IDE understand the hardware registers
#ifndef PORTA
#define PORTA (*((volatile unsigned char *)0x0C))
#endif
#ifndef TRISA
#define TRISA (*((volatile unsigned char *)0x8C))
#endif
#endif

// Pin definitions
#pragma bit LED @PORTA.0

// Delay function
void delay(unsigned char millisec) {
  /* delays a multiple of 1 millisecond at 4 MHz */
  do {
    unsigned char i = 100;
    do {
      nop();
      nop();
    } while (--i > 0);
  } while (--millisec > 0);
}

void main(void) {
  // Initialize ports
  PORTA = 0;          // Initialize PORTA
  TRISA = 0b11111110; // Set RA0 as output, others as inputs

  // Main loop
  while (1) {
    LED = 1;    // Turn LED on
    delay(200); // Delay 200ms
    LED = 0;    // Turn LED off
    delay(200); // Delay 200ms
  }
}