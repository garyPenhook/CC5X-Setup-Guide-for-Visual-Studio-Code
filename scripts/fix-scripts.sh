#!/bin/bash

# Create scripts directory
mkdir -p scripts

# Move script files to scripts directory
mv cc5x-direct.sh scripts/
mv cc5x-compile.sh scripts/
mv gcc-mock-compile.sh scripts/
mv cleanup.sh scripts/

# Make all scripts executable
chmod +x scripts/*.sh

echo "Scripts moved to scripts/ directory and made executable"
