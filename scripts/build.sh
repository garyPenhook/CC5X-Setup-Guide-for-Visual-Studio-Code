#!/bin/bash
# Simple build script for CC5X PIC projects

# Configuration
MCU=${1:-16F15313}
SRC_FILE=${2:-src/main.c}
OUTPUT_DIR="output"

# Ensure output directory exists
mkdir -p $OUTPUT_DIR

# Try the direct method first
if [ -f "cc5x-direct.sh" ]; then
    echo "Using direct CC5X compiler..."
    ./cc5x-direct.sh "$SRC_FILE"
    exit $?
fi

# Fall back to Wine method
echo "Compiling for PIC$MCU..."
wine cc5x.exe $SRC_FILE -a -p$MCU -o$OUTPUT_DIR/output.hex -O$OUTPUT_DIR/main.asm -l$OUTPUT_DIR/main.lst

if [ $? -eq 0 ]; then
    echo "Compilation successful! Output files in $OUTPUT_DIR/"
else
    # Try mock compiler as last resort
    if [ -f "gcc-mock-compile.sh" ]; then
        echo "Trying mock compiler..."
        ./gcc-mock-compile.sh "$SRC_FILE"
        exit $?
    fi
    echo "Compilation failed!"
    exit 1
fi
