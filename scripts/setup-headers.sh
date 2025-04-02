#!/bin/bash

echo "=== Setting up header files for IDE support ==="

# Create include directories
mkdir -p /home/avr1/software/cc5x/include/headers

# Copy header files from CrossOver bottle to our include directory
cp "$HOME/.cxoffice/Crossword_Compiler_9/drive_c/Program Files/bknd/CC5X/"*.H /home/avr1/software/cc5x/include/headers/

# Make a special version of 16F15313.H for IDE support if it doesn't parse well
cat > /home/avr1/software/cc5x/include/headers/pic_ide_support.h << EOF
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
EOF

echo "Header files setup complete!"
echo "Now restart VSCode or reload the window for changes to take effect."
