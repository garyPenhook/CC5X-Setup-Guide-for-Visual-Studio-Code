
; CC5X Version 3.8C, Copyright (c) B Knudsen Data
; C compiler for the PICmicro family
; ************   2. Apr 2025  14:34  *************

        processor  16F15313
        radix  DEC

        __config 0x8008, 0x3FFF
        __config 0x8009, 0x3F9F
        __config 0x800A, 0x3FFF

Carry       EQU   0
PORTA       EQU   0x0C
TRISA       EQU   0x12
OSCCON1     EQU   0x88D
ANSELA      EQU   0x1F38
RA0         EQU   0
ms          EQU   0x20
i           EQU   0x21
j           EQU   0x22

        GOTO main

  ; FILE main.c
                        ;/*
                        ; * Simple blink LED example for PIC16F15313
                        ; * Using CC5X Compiler
                        ; */
                        ;
                        ;#include "16F15313.H"
                        ;#pragma config WDTE = OFF // Disable Watchdog timer
                        ;#pragma config MCLRE = ON // Master Clear Enable
                        ;#pragma config LVP = ON   // Low Voltage Programming Enable
                        ;
                        ;// Function prototypes
                        ;void delay_ms(unsigned int ms);
                        ;void initialize(void);
                        ;
                        ;void main(void) {
main
                        ;  // Initialize ports
                        ;  initialize();
        MOVLB 0
        CALL  initialize
                        ;
                        ;  // Main program loop
                        ;  while (1) {
                        ;    // Toggle LED on RA0
                        ;    RA0 = 1; // LED on
        MOVLB 0
m001    BSF   0x0C,RA0
                        ;    delay_ms(500);
        MOVLW 244
        CALL  delay_ms
                        ;    RA0 = 0; // LED off
        BCF   0x0C,RA0
                        ;    delay_ms(500);
        MOVLW 244
        CALL  delay_ms
                        ;  }
        GOTO  m001
                        ;}
                        ;
                        ;void initialize(void) {
initialize
                        ;  // Configure port A
                        ;  TRISA = 0b11111110; // RA0 as output, others as inputs
        MOVLW 254
        MOVWF TRISA
                        ;  PORTA = 0x00;       // Initialize PORTA
        CLRF  PORTA
                        ;
                        ;  // Configure oscillator
                        ;  OSCCON1 = 0x60; // HFINTOSC at 4MHz
        MOVLW 96
        MOVLB 17
        MOVWF OSCCON1
                        ;
                        ;  // Disable analog functionality
                        ;  ANSELA = 0x00;
        MOVLB 62
        CLRF  ANSELA
                        ;}
        RETURN
                        ;
                        ;void delay_ms(unsigned int ms) {
delay_ms
        MOVWF ms
                        ;  unsigned int i, j;
                        ;  for (i = 0; i < ms; i++) {
        CLRF  i
m002    MOVF  ms,W
        SUBWF i,W
        BTFSC 0x03,Carry
        GOTO  m004
                        ;    // This loop creates approximately 1ms delay at 4MHz
                        ;    for (j = 0; j < 400; j++) {
        CLRF  j
                        ;      // Empty loop with no inline assembly
                        ;    }
m003    INCF  j,1
        GOTO  m003
                        ;  }
        INCF  i,1
        GOTO  m002
m004    RETURN

        END


; *** KEY INFO ***

; 0x0014   12 word(s)  0 % : delay_ms
; 0x000B    9 word(s)  0 % : initialize
; 0x0001   10 word(s)  0 % : main

; RAM usage: 3 bytes (3 local), 253 bytes free
; Maximum call level: 1
; Total of 32 code words (1 %)
