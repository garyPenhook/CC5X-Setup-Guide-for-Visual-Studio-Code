#!/bin/bash

echo "=== Cleaning up unused files and folders ==="

# Define the project root
PROJECT_ROOT="/home/avr1/software/cc5x"

# Essential files to keep
ESSENTIAL_FILES=(
  "cc5x-direct.sh"      # Main compilation script 
  "gcc-mock-compile.sh" # Fallback mock compiler
  "cleanup.sh"          # Main cleanup script
  "README.md"           # Project documentation
  "CMakeLists.txt"      # CMake configuration
  ".gitignore"          # Git ignore file
)

# Essential directories to keep
ESSENTIAL_DIRS=(
  ".vscode"  # VS Code configuration
  "src"      # Source code
  "include"  # Include files
  "output"   # Compilation output
)

# Remove unnecessary script files
echo "Removing unnecessary script files..."
for file in "$PROJECT_ROOT"/*.sh; do
  # Skip if file doesn't exist
  [ -f "$file" ] || continue
  
  filename=$(basename "$file")
  
  # Skip essential files
  if [[ " ${ESSENTIAL_FILES[@]} " =~ " ${filename} " ]] || [[ "$filename" == "cleanup-unused.sh" ]]; then
    echo "  Keeping $filename"
    continue
  fi
  
  echo "  Removing $filename"
  rm -f "$file"
done

# Remove unnecessary directories
echo "Removing unnecessary directories..."
for dir in "$PROJECT_ROOT"/*/; do
  # Skip if directory doesn't exist
  [ -d "$dir" ] || continue
  
  dirname=$(basename "$dir")
  
  # Skip essential directories and hidden directories
  if [[ " ${ESSENTIAL_DIRS[@]} " =~ " ${dirname} " ]] || [[ "$dirname" == .* ]]; then
    echo "  Keeping directory $dirname"
    continue
  fi
  
  echo "  Removing directory $dirname"
  rm -rf "$dir"
done

# Remove specific unused files
UNUSED_FILES=(
  "cc5x-crossover.sh"
  "build.sh"
  "check-wine.sh"
  "simple-compile.sh"
  "direct-compile.sh"
  "cxrun-compile.sh"
  "docker-compile.sh"
  "dosbox-compile.sh"
  "cc5x-compile.sh"
  "git-setup.sh"
  "git-push.sh"
  "git-push-master.sh"
  "manual-compile.sh"
  "debug-cc5x.sh"
)

for file in "${UNUSED_FILES[@]}"; do
  if [ -f "$PROJECT_ROOT/$file" ]; then
    echo "  Removing specific unused file: $file"
    rm -f "$PROJECT_ROOT/$file"
  fi
done

# Remove unused directories
UNUSED_DIRS=(
  "build"
  "dosbox"
  ".cache"
)

for dir in "${UNUSED_DIRS[@]}"; do
  if [ -d "$PROJECT_ROOT/$dir" ]; then
    echo "  Removing specific unused directory: $dir"
    rm -rf "$PROJECT_ROOT/$dir"
  fi
done

echo "Clean up complete!"
echo "Remaining files:"
find "$PROJECT_ROOT" -type f -maxdepth 1 | sort
echo ""
echo "Remaining directories:"
find "$PROJECT_ROOT" -type d -maxdepth 1 -not -path "*/\.*" | sort

echo ""
echo "To execute further clean-up, make this script executable with:"
echo "chmod +x $PROJECT_ROOT/cleanup-unused.sh"
echo "And run it with:"
echo "$PROJECT_ROOT/cleanup-unused.sh"
