#!/bin/bash

# Setup IDE support for PIC development
echo "=== Setting up Visual Studio Code for PIC Development ==="

PROJECT_ROOT="/home/avr1/software/cc5x"
INCLUDE_DIR="$PROJECT_ROOT/include"
HEADERS_DIR="$INCLUDE_DIR/headers"
PIC_DIR="$INCLUDE_DIR/pic"

# Create directories
mkdir -p "$HEADERS_DIR"
mkdir -p "$PIC_DIR"

# Copy headers from CrossOver bottle if needed
CC5X_DIR="$HOME/.cxoffice/Crossword_Compiler_9/drive_c/Program Files/bknd/CC5X"
if [ -d "$CC5X_DIR" ]; then
    echo "Copying header files from CrossOver bottle..."
    cp "$CC5X_DIR/"*.H "$HEADERS_DIR/" 2>/dev/null
else
    echo "CrossOver CC5X directory not found. Please ensure CC5X files are in $HEADERS_DIR"
fi

# Create lowercase symlinks for clangd
echo "Creating lowercase symlinks for IDE support..."
for header in "$HEADERS_DIR"/*.H; do
    if [ -f "$header" ]; then
        basename=$(basename "$header")
        lowercase=$(echo "$basename" | tr '[:upper:]' '[:lower:]')
        ln -sf "../headers/$basename" "$PIC_DIR/$lowercase"
        echo "  $basename -> $PIC_DIR/$lowercase"
    fi
done

# Generate extract_defines.c to extract register definitions
cat > "$PROJECT_ROOT/extract_defines.c" << EOF
// Simple program to extract PIC register definitions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("$HEADERS_DIR/16F15313.H", "r");
    if (!file) {
        printf("Could not open header file\n");
        return 1;
    }
    
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        // Look for register definitions (typically starts with #define)
        if (strstr(line, "#define") && (strstr(line, "PORTA") || strstr(line, "TRISA"))) {
            printf("%s", line);
        }
    }
    fclose(file);
    return 0;
}
EOF

# Compile and run the extractor
gcc -o "$PROJECT_ROOT/extract_defines" "$PROJECT_ROOT/extract_defines.c"
if [ -f "$PROJECT_ROOT/extract_defines" ]; then
    echo "Extracting register definitions..."
    "$PROJECT_ROOT/extract_defines" > "$PROJECT_ROOT/register_defines.txt"
    if [ -f "$PROJECT_ROOT/register_defines.txt" ]; then
        cat "$PROJECT_ROOT/register_defines.txt"
    fi
    rm "$PROJECT_ROOT/extract_defines"
    rm "$PROJECT_ROOT/extract_defines.c"
else
    echo "Failed to compile register extractor"
fi

# Install VS Code C/C++ extension if not already installed
if ! code --list-extensions | grep -q "ms-vscode.cpptools"; then
    echo "Installing C/C++ extension for VS Code..."
    code --install-extension ms-vscode.cpptools
fi

echo "Setup complete!"
echo "Please reload VS Code window to apply changes."
