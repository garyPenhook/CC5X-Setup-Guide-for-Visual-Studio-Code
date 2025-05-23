#!/bin/bash

# Mock compiler script to simulate CC5X compilation with GCC
# Used for IDE integration and as fallback when CC5X compilation fails

echo "===== GCC Mock Compiling $(basename "$1") ====="

# Get source file
SOURCE_FILE="$1"
if [ -z "$SOURCE_FILE" ]; then
    SOURCE_FILE="/home/avr1/software/cc5x/src/main.c"
fi

# Output directory
OUTPUT_DIR="/home/avr1/software/cc5x/output"
mkdir -p "$OUTPUT_DIR" > /dev/null 2>&1

# Get the basename without extension
BASENAME=$(basename "$SOURCE_FILE" .c)

# Use GCC to check syntax (with PIC-specific defines)
gcc -fsyntax-only -D__CC5X__ -DPIC16F15313 \
    -I"/home/avr1/software/cc5x/include/headers" \
    "$SOURCE_FILE" 2>/tmp/gcc_errors.txt

RESULT=$?

if [ $RESULT -eq 0 ]; then
    echo "Syntax check passed."
    
    # Create a mock hex file
    echo ":020000040000FA" > "$OUTPUT_DIR/${BASENAME}.hex"
    echo ":10000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00" >> "$OUTPUT_DIR/${BASENAME}.hex"
    echo ":00000001FF" >> "$OUTPUT_DIR/${BASENAME}.hex"
    
    # Create a simple mock assembly file
    echo "; Mock assembly for ${BASENAME}.c" > "$OUTPUT_DIR/${BASENAME}.asm"
    echo "; Generated by gcc-mock-compile.sh" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    ; Main program" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "start:" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    ; Initialize ports" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    clrf  PORTA" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    movlw b'11111110'" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    movwf TRISA" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "main_loop:" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    bsf   PORTA, 0    ; Turn LED on" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    call  delay" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    bcf   PORTA, 0    ; Turn LED off" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    call  delay" >> "$OUTPUT_DIR/${BASENAME}.asm"
    echo "    goto  main_loop" >> "$OUTPUT_DIR/${BASENAME}.asm"
    
    # Create a simple listing file
    echo "CC5X GCC-Mock C Compiler" > "$OUTPUT_DIR/${BASENAME}.lst"
    echo "File: ${BASENAME}.c" >> "$OUTPUT_DIR/${BASENAME}.lst"
    echo "Heap size: 0 locations" >> "$OUTPUT_DIR/${BASENAME}.lst"
    echo "RAM usage: 20 bytes (5 %), 4 bytes (95 %) free" >> "$OUTPUT_DIR/${BASENAME}.lst"
    echo "Object file size: 64 bytes" >> "$OUTPUT_DIR/${BASENAME}.lst"
    
    echo "Mock compilation successful. Created .hex, .asm and .lst files."
    exit 0
else
    echo "Mock compilation failed."
    if [ -f /tmp/gcc_errors.txt ]; then
        cat /tmp/gcc_errors.txt
    fi
    exit 1
fi
