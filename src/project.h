#ifndef PROJECT_H
#define PROJECT_H

// Device-specific configuration
#ifndef PIC16F15313
#pragma chip 16F15313
#endif

// Common defines
#define LED_ON 1
#define LED_OFF 0

// Function prototypes
void delay_ms(unsigned char ms);
void initialize(void);

#endif // PROJECT_H
