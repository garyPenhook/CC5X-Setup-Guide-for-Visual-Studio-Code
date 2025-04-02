#ifndef PROJECT_H
#define PROJECT_H

// Device configuration
#ifndef PIC16F877
#pragma chip 16F877
#endif

// Pin definitions
#pragma bit LED @ PORTB.0
#pragma bit BUTTON @ PORTA.0

// Function prototypes
void initialize(void);

#endif // PROJECT_H
