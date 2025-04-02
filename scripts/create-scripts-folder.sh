#!/bin/bash

# Create the scripts directory
mkdir -p /home/avr1/software/cc5x/scripts

# Move all shell scripts to the new directory
mv /home/avr1/software/cc5x/*.sh /home/avr1/software/cc5x/scripts/

# Don't move this script itself
mv /home/avr1/software/cc5x/scripts/create-scripts-folder.sh /home/avr1/software/cc5x/

# Make all scripts executable
chmod +x /home/avr1/software/cc5x/scripts/*.sh

echo "All shell scripts moved to scripts/ folder"
