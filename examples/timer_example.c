/*
 * Timer example for PIC16F15313 with CC5X
 */

#include "16F15313.H"
#pragma config WDTE = OFF

bit timer_flag; // Timer overflow flag

void init_timer0(void) {
  T0CON0 = 0x90; // Enable timer0, 1:1 prescaler
  T0CON1 = 0x40; // Use FOSC/4 as clock source
  TMR0H = 250;   // For 1ms overflow at 4MHz
  TMR0IE = 1;    // Enable Timer0 interrupt
  GIE = 1;       // Global interrupt enable
}

#pragma origin 4
interrupt isr(void) {
  char saved_status = STATUS;
  char saved_w = W;

  if (TMR0IF) {
    timer_flag = 1;
    TMR0IF = 0;
  }

  STATUS = saved_status;
  W = saved_w;
}

void main(void) {
  // Initialize
  TRISA = 0b11111110; // RA0 as output
  PORTA = 0;

  init_timer0();

  // Main loop
  while (1) {
    if (timer_flag) {
      timer_flag = 0;
      RA0 = !RA0; // Toggle output
    }
  }
}
