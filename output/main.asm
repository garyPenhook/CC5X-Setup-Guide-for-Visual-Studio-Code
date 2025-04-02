
; CC5X Version 3.8C, Copyright (c) B Knudsen Data
; C compiler for the PICmicro family
; ************   2. Apr 2025  13:25  *************

        processor  16F15313
        radix  DEC

PORTA       EQU   0x0C
TRISA       EQU   0x12
LED         EQU   0
millisec    EQU   0x20
i           EQU   0x21

        GOTO main

  ; FILE main.c
                        ;/*
                        ; * Project: PIC Sample Project
                        ; * Description: Sample template for PIC microcontroller
                        ; * Device: PIC16F15313
                        ; */
                        ;
                        ;//#pragma chip PIC16F15313
                        ;
                        ;
                        ;#ifdef __CLANGD__
                        ;#include <pic/16f15313.h>
                        ;#endif
                        ;
                        ;// Pin definitions
                        ;#pragma bit LED @PORTA.0
                        ;
                        ;// Delay function
                        ;void delay(unsigned char millisec) {
delay
        MOVWF millisec
                        ;  /* delays a multiple of 1 millisecond at 4 MHz */
                        ;  do {
                        ;    unsigned char i = 100;
m001    MOVLW 100
        MOVWF i
                        ;    do {
                        ;      nop();
m002    NOP  
                        ;      nop();
        NOP  
                        ;    } while (--i > 0);
        DECFSZ i,1
        GOTO  m002
                        ;  } while (--millisec > 0);
        DECFSZ millisec,1
        GOTO  m001
                        ;}
        RETURN
                        ;
                        ;void main(void) {
main
                        ;  // Initialize ports
                        ;  PORTA = 0;          // Initialize PORTA
        MOVLB 0
        CLRF  PORTA
                        ;  TRISA = 0b11111110; // Set RA0 as output, others as inputs
        MOVLW 254
        MOVWF TRISA
                        ;
                        ;  // Main loop
                        ;  while (1) {
                        ;    LED = 1;    // Turn LED on
m003    BSF   0x0C,LED
                        ;    delay(200); // Delay 200ms
        MOVLW 200
        CALL  delay
                        ;    LED = 0;    // Turn LED off
        BCF   0x0C,LED
                        ;    delay(200); // Delay 200ms
        MOVLW 200
        CALL  delay
                        ;  }
        GOTO  m003

        END


; *** KEY INFO ***

; 0x0001   10 word(s)  0 % : delay
; 0x000B   11 word(s)  0 % : main

; RAM usage: 2 bytes (2 local), 254 bytes free
; Maximum call level: 1
; Total of 22 code words (1 %)
