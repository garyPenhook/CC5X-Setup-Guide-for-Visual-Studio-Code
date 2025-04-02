#!/bin/bash

echo "Moving scripts to scripts folder..."

# Create scripts folder if it doesn't exist
mkdir -p scripts

# Move all script files to scripts folder
for script in *.sh; do
    # Skip the move-scripts.sh itself
    if [ "$script" != "move-scripts.sh" ]; then
        echo "Moving $script to scripts folder"
        mv "$script" scripts/
    fi
done

echo "Updating the move-scripts.sh script itself"
mv move-scripts.sh scripts/

echo "All scripts moved successfully"
