/*
 * Simple blink LED example for PIC16F15313
 * Using CC5X Compiler
 */

#include "16F15313.H"
#pragma config WDTE = OFF // Disable Watchdog timer
#pragma config MCLRE = ON // Master Clear Enable
#pragma config LVP = ON   // Low Voltage Programming Enable

// Function prototypes
void delay_ms(unsigned int ms);
void initialize(void);

void main(void) {
  // Initialize ports
  initialize();

  // Main program loop
  while (1) {
    // Toggle LED on RA0
    RA0 = 1; // LED on
    delay_ms(500);
    RA0 = 0; // LED off
    delay_ms(500);
  }
}

void initialize(void) {
  // Configure port A
  TRISA = 0b11111110; // RA0 as output, others as inputs
  PORTA = 0x00;       // Initialize PORTA

  // Configure oscillator
  OSCCON1 = 0x60; // HFINTOSC at 4MHz
  OSCFRQ = 0x02;  // Set frequency to 4MHz

  // Disable analog functionality
  ANSELA = 0x00;
}

void delay_ms(unsigned int ms) {
  unsigned int i, j;
  for (i = 0; i < ms; i++) {
    // This loop creates approximately 1ms delay at 4MHz
    for (j = 0; j < 400; j++) {
      // Empty loop with no inline assembly
    }
  }
}