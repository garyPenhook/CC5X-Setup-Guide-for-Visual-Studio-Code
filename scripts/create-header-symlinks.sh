#!/bin/bash

# Create lowercase header symlinks for IDE support
echo "=== Creating header symlinks for IDE support ==="

# Define directories
HEADERS_DIR="/home/avr1/software/cc5x/include/headers"
LOWERCASE_DIR="/home/avr1/software/cc5x/include/pic"

# Create needed directory
mkdir -p "$LOWERCASE_DIR"

# Create lowercase symlinks
for header in "$HEADERS_DIR"/*.H; do
    if [ -f "$header" ]; then
        FILENAME=$(basename "$header")
        LOWERCASE=$(echo "$FILENAME" | tr '[:upper:]' '[:lower:]')
        echo "Creating symlink: $FILENAME -> $LOWERCASE"
        ln -sf "../headers/$FILENAME" "$LOWERCASE_DIR/$LOWERCASE"
    fi
done

# Also create a special case symlink for the header file in the current directory
ln -sf "$HEADERS_DIR/16F15313.H" "./16F15313.H"

echo "Done! Created symlinks in $LOWERCASE_DIR"
echo "Also created symlink in current directory for ./16F15313.H"

# Fix c_cpp_properties.json to include both cases
if [ -f ".vscode/c_cpp_properties.json" ]; then
    echo "Updating c_cpp_properties.json..."
    sed -i 's|"includePath": \[|"includePath": \[\n                "${workspaceFolder}/include/pic",|' .vscode/c_cpp_properties.json
fi
