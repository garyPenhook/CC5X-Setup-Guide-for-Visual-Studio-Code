#!/bin/bash

# Native compilation script for CC5X
# This script assumes CC5X is installed in a more accessible location
# than the CrossOver bottle

echo "===== CC5X Native Compiling $(basename "$1") ====="

# Get source file
SOURCE_FILE="$1"
if [ -z "$SOURCE_FILE" ]; then
    SOURCE_FILE="/home/avr1/software/cc5x/src/main.c"
fi

# Path to CC5X - update this path if you install CC5X in a different location
CC5X_PATH="$HOME/bin/cc5x/CC5X.EXE"

# Check if CC5X exists
if [ ! -f "$CC5X_PATH" ]; then
    echo "Error: CC5X not found at $CC5X_PATH"
    echo "Falling back to direct CrossOver method..."
    "$HOME/software/cc5x/cc5x-direct.sh" "$SOURCE_FILE"
    exit $?
fi

# Output directory
OUTPUT_DIR="/home/avr1/software/cc5x/output"
mkdir -p "$OUTPUT_DIR"

# Include directory
INCLUDE_DIR="/home/avr1/software/cc5x/include/headers"

# Get basename for output files
BASENAME=$(basename "$SOURCE_FILE" .c)

# Run CC5X with Wine
WINEDEBUG=-all wine "$CC5X_PATH" "$SOURCE_FILE" -I"$INCLUDE_DIR" -a -L -V

# Check if compilation was successful
if [ -f "${SOURCE_FILE%.*}.hex" ]; then
    # Move output files to output directory
    for ext in .hex .asm .lst; do
        if [ -f "${SOURCE_FILE%.*}${ext}" ]; then
            mv "${SOURCE_FILE%.*}${ext}" "$OUTPUT_DIR/${BASENAME}${ext}"
        fi
    done
    echo "Compilation successful."
    exit 0
else
    echo "Compilation failed. Falling back to mock compiler..."
    "$HOME/software/cc5x/gcc-mock-compile.sh" "$SOURCE_FILE"
    exit 1
fi
