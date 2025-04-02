#!/bin/bash

# Direct CC5X compilation using system Wine
echo "===== CC5X Compiling $(basename "$1") ====="

# Get source file
SOURCE_FILE="$1"
if [ -z "$SOURCE_FILE" ]; then
    SOURCE_FILE="/home/avr1/software/cc5x/src/main.c"
fi

# Path to CC5X in CrossOver bottle
CC5X_DIR="$HOME/.cxoffice/Crossword_Compiler_9/drive_c/Program Files/bknd/CC5X"
CC5X_EXE="$CC5X_DIR/CC5X.EXE"

# Check if CC5X exists
if [ ! -f "$CC5X_EXE" ]; then
    echo "ERROR: CC5X.EXE not found"
    exit 1
fi

# Output directory
OUTPUT_DIR="/home/avr1/software/cc5x/output"
mkdir -p "$OUTPUT_DIR" > /dev/null 2>&1

# Get the basename without extension
BASENAME=$(basename "$SOURCE_FILE" .c)

# Create a temporary directory for compilation
TEMP_DIR="/tmp/cc5x_wine_compile"
mkdir -p "$TEMP_DIR" > /dev/null 2>&1

# Copy source file to temp directory
cp "$SOURCE_FILE" "$TEMP_DIR/${BASENAME}.c" > /dev/null 2>&1

# Include directory for PIC headers
INCLUDE_DIR="$OUTPUT_DIR/../include/headers"
mkdir -p "$INCLUDE_DIR" > /dev/null 2>&1

# Copy CC5X to temp directory for easier access
mkdir -p "$TEMP_DIR/cc5x" > /dev/null 2>&1
cp "$CC5X_DIR"/*.* "$TEMP_DIR/cc5x/" 2>/dev/null

# Also copy header files to temp directory for easier access
mkdir -p "$TEMP_DIR/include" > /dev/null 2>&1
cp "$INCLUDE_DIR/"*.H "$TEMP_DIR/include/" 2>/dev/null

# Go to temp directory for compilation
cd "$TEMP_DIR" || exit 1

# Create a temp file to capture compiler output
COMPILER_OUT="$TEMP_DIR/compiler.out"

# Run CC5X with system Wine - REMOVED the -p16F15313 flag to avoid duplicate definition
WINEDEBUG=-all wine "$TEMP_DIR/cc5x/CC5X.EXE" "${BASENAME}.c" -I./include -a -L -V > "$COMPILER_OUT" 2>&1
RESULT=$?

# Display only essential compiler output - filter out noise
if [ -f "$COMPILER_OUT" ]; then
    # Extract and display only the CC5X version line and important info
    grep -E "CC5X Version|RAM usage|Optimizing|Codepage|Total of" "$COMPILER_OUT" || true
    # Show any warning or error messages
    grep -E "Warning|Error|ERROR" "$COMPILER_OUT" || true
fi

# Check for and copy output files
for EXT in .hex .asm .lst; do
    if [ -f "$TEMP_DIR/${BASENAME}${EXT}" ]; then
        cp "$TEMP_DIR/${BASENAME}${EXT}" "$OUTPUT_DIR/" > /dev/null 2>&1
    fi
done

# Display success or failure with minimal details
if [ $RESULT -eq 0 ] && [ -f "$OUTPUT_DIR/${BASENAME}.hex" ]; then
    echo "Compilation successful."
    exit 0
else
    echo "Compilation failed."
    # Display any error messages
    grep -E "Error|ERROR" "$COMPILER_OUT" || true
    
    # Fall back to mock compiler if needed
    /home/avr1/software/cc5x/gcc-mock-compile.sh "$SOURCE_FILE" > /dev/null 2>&1
    echo "Created mock hex file."
    exit 1
fi
