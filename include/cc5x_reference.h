/*
 * CC5X Reference File for GitHub Copilot
 * This file contains common idioms and patterns used in CC5X
 * It is not meant to be included in your project, just to help Copilot learn
 */

// CC5X specific types
typedef unsigned char uint8_t; // 8-bit unsigned
typedef signed char int8_t;    // 8-bit signed
typedef unsigned int uint16_t; // 16-bit unsigned
typedef signed int int16_t;    // 16-bit signed
typedef bit boolean;           // bit type (0 or 1)

// CC5X specific pragmas
#pragma chip PIC16F15313
#pragma config WDTE = OFF
#pragma config MCLRE = ON
#pragma config LVP = ON
#pragma origin 0
#pragma optimize 1
#pragma cdata[0] = 0x3FFF // Store data in code memory

// CC5X specific directives
#include "16F15313.H"
#define CLOCK_FREQ 4000000

// Common port manipulation
TRISA = 0b00000000; // Set all pins as outputs
PORTA = 0x00;       // Clear all pins
LATA = 0xFF;        // Set all pins high
RA0 = 1;            // Set individual pin
RA1 = !RA1;         // Toggle pin

// Bit manipulation
bit flag1, flag2; // Bit variables
char mask = 0x01; // Bit mask
if (PORTA & 0x01) {
}               // Test bit using mask
PORTA |= 0x01;  // Set bit using mask
PORTA &= ~0x01; // Clear bit using mask

// Interrupt handling
#pragma origin 4
interrupt isr(void) {
  // Save context
  char saved_status = STATUS;
  char saved_w = W;

  // Handle interrupt
  if (TMR0IF) {
    TMR0IF = 0; // Clear flag
  }

  // Restore context
  STATUS = saved_status;
  W = saved_w;
}

// Common configurations
void init_oscillator(void) {
  OSCCON1 = 0x60; // Internal oscillator at 4MHz
  OSCFRQ = 0x02;  // Set frequency
}

void init_timer0(void) {
  T0CON0 = 0x90; // Enable timer0, 1:1 prescaler
  T0CON1 = 0x40; // Use FOSC/4 as clock source
  TMR0H = 250;   // For 1ms overflow at 4MHz
  TMR0IE = 1;    // Enable Timer0 interrupt
  GIE = 1;       // Global interrupt enable
}

void init_adc(void) {
  ADCON0 = 0x01; // Enable ADC, channel 0
  ADCON1 = 0xF0; // Right justified, FOSC/16
}
