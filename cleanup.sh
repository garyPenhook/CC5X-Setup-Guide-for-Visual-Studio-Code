#!/bin/bash

echo "=== Cleaning up project files ==="

# Define the project root
PROJECT_ROOT="/home/avr1/software/cc5x"

# List of scripts to keep
KEEP_SCRIPTS=(
  "cc5x-direct.sh"
  "cc5x-compile.sh"
  "gcc-mock-compile.sh"
  "cleanup.sh"
)

# List of directories that should remain
KEEP_DIRS=(
  ".vscode"
  "src"
  "include"
  "output"
)

# Clean up scripts
echo "Removing unnecessary script files..."
for file in "$PROJECT_ROOT"/*.sh; do
  filename=$(basename "$file")
  keep=false
  for keep_script in "${KEEP_SCRIPTS[@]}"; do
    if [ "$filename" = "$keep_script" ]; then
      keep=true
      break
    fi
  done
  
  if ! $keep; then
    echo "  Removing $filename"
    rm -f "$file"
  else
    echo "  Keeping $filename"
  fi
done

# Clean up unnecessary directories
echo "Cleaning up directories..."
for dir in "$PROJECT_ROOT"/*/; do
  dirname=$(basename "$dir")
  keep=false
  for keep_dir in "${KEEP_DIRS[@]}"; do
    if [ "$dirname" = "$keep_dir" ]; then
      keep=true
      break
    fi
  done
  
  if ! $keep; then
    echo "  Removing directory $dirname"
    rm -rf "$dir"
  else
    echo "  Keeping directory $dirname"
  fi
done

# Create necessary directories if they don't exist
echo "Ensuring required directories exist..."
for keep_dir in "${KEEP_DIRS[@]}"; do
  if [ ! -d "$PROJECT_ROOT/$keep_dir" ]; then
    echo "  Creating $keep_dir directory"
    mkdir -p "$PROJECT_ROOT/$keep_dir"
  fi
done

# Remove unnecessary files in the root
echo "Removing other unnecessary files..."
for file in "$PROJECT_ROOT"/*; do
  if [ -f "$file" ]; then
    filename=$(basename "$file")
    extension="${filename##*.}"
    
    # Keep only specific file types and Makefile
    if [[ "$extension" != "sh" && "$extension" != "md" && "$filename" != "Makefile" && "$filename" != "CMakeLists.txt" ]]; then
      echo "  Removing $filename"
      rm -f "$file"
    fi
  fi
done

echo "Clean up complete!"
echo "Remaining project structure:"
find "$PROJECT_ROOT" -type d -not -path "*/\.*" | sort
echo ""
echo "Remaining scripts:"
ls -la "$PROJECT_ROOT"/*.sh
