#!/bin/bash

# CC5X Compilation Script (Fixed for CrossOver with verbose output)
echo "===== CC5X Native Compilation ====="

# Get source file
SOURCE_FILE="$1"
if [ -z "$SOURCE_FILE" ]; then
    SOURCE_FILE="/home/avr1/software/cc5x/src/main.c"
fi

# Extract Crossover bottle name
BOTTLE_DIR=$(find $HOME/.cxoffice -name "CC5X.EXE" -type f | grep -o "$HOME/.cxoffice/[^/]*" | head -1)
BOTTLE_NAME=$(basename "$BOTTLE_DIR")

echo "Using CrossOver bottle: $BOTTLE_NAME"
echo "Bottle directory: $BOTTLE_DIR"

# Set paths
OUTPUT_DIR="/home/avr1/software/cc5x/output"
TEMP_DIR="/tmp/cc5x_compile"
mkdir -p "$OUTPUT_DIR"
mkdir -p "$TEMP_DIR"

# Get file basename
BASENAME=$(basename "$SOURCE_FILE" .c)
echo "Compiling: $SOURCE_FILE"

# Create a temporary output file for compiler messages
COMPILER_OUTPUT="$TEMP_DIR/compiler_output.txt"

# Create batch file in the bottle's drive_c
BATCH_FILE="$BOTTLE_DIR/drive_c/cc5x_compile.bat"

# Create a temporary windows-compatible source file path in the bottle
WIN_SOURCE="$BOTTLE_DIR/drive_c/temp"
mkdir -p "$WIN_SOURCE"
cp "$SOURCE_FILE" "$WIN_SOURCE/${BASENAME}.c"

echo "Copied source to $WIN_SOURCE/${BASENAME}.c"

# Create a batch file that will capture compiler output
cat > "$BATCH_FILE" << EOF
@echo on
cd "C:\Program Files\bknd\CC5X"
echo CC5X Compiler Output: > C:\temp\output.txt
echo ===================== >> C:\temp\output.txt
CC5X.EXE C:\temp\\${BASENAME}.c -p16F877 -a -L -V >> C:\temp\output.txt 2>&1
echo Return code: %errorlevel% >> C:\temp\output.txt
type C:\temp\output.txt
exit %errorlevel%
EOF

echo "Created batch file: $BATCH_FILE"
chmod +x "$BATCH_FILE"

# Set current directory to the bottle's drive_c
cd "$BOTTLE_DIR/drive_c"

# Run the batch file using CrossOver's cxrun and capture output
echo "Running compilation with CrossOver..."
COMPILER_OUT=$(/opt/cxoffice/bin/cxrun --bottle "$BOTTLE_NAME" --command -- "C:\\cc5x_compile.bat" 2>&1)
RESULT=$?

# Save and display compiler output
echo "$COMPILER_OUT" > "$COMPILER_OUTPUT"
echo "Compiler output:"
echo "================"
cat "$COMPILER_OUTPUT"
echo "================"

# Also try to get the output file from the bottle
if [ -f "$BOTTLE_DIR/drive_c/temp/output.txt" ]; then
    echo "Compiler output from batch file:"
    echo "================================"
    cat "$BOTTLE_DIR/drive_c/temp/output.txt"
    echo "================================"
fi

# Check for output files in the bottle's C drive
echo "Checking for output files..."
for EXT in .hex .asm .lst; do
    # Check in multiple possible locations
    for DIR in "$BOTTLE_DIR/drive_c" "$BOTTLE_DIR/drive_c/temp" "$BOTTLE_DIR/drive_c/Program Files/bknd/CC5X"; do
        OUTPUT_FILE="$DIR/${BASENAME}${EXT}"
        if [ -f "$OUTPUT_FILE" ]; then
            echo "Found ${BASENAME}${EXT} in $DIR, copying to output directory"
            cp "$OUTPUT_FILE" "$OUTPUT_DIR/"
            break
        fi
    done
done

# Check if any files were found
if ls "$OUTPUT_DIR/${BASENAME}"* >/dev/null 2>&1; then
    echo "Compilation successful! Output files in: $OUTPUT_DIR"
    ls -la "$OUTPUT_DIR/${BASENAME}"*
    
    # Display the HEX file content
    if [ -f "$OUTPUT_DIR/${BASENAME}.hex" ]; then
        echo "HEX file content:"
        echo "================"
        cat "$OUTPUT_DIR/${BASENAME}.hex"
        echo "================"
    fi
    
    # Display the ASM file content
    if [ -f "$OUTPUT_DIR/${BASENAME}.asm" ]; then
        echo "ASM file content (first 20 lines):"
        echo "=================================="
        head -20 "$OUTPUT_DIR/${BASENAME}.asm"
        echo "..."
        echo "=================================="
    fi
    
    exit 0
else
    echo "Compilation failed or no output files were generated."
    echo "Please check the CrossOver bottle or try running the batch file manually."
    
    # Try to use the mock compiler as fallback
    echo "Using mock compiler as fallback..."
    /home/avr1/software/cc5x/gcc-mock-compile.sh "$SOURCE_FILE"
    exit 1
fi
