#!/bin/bash

# Create scripts directory
mkdir -p scripts

# Move existing scripts to the scripts directory
for script in cc5x-direct.sh cc5x-compile.sh gcc-mock-compile.sh cleanup.sh; do
  if [ -f "$script" ]; then
    echo "Moving $script to scripts directory"
    mv "$script" scripts/
    chmod +x "scripts/$script"
  fi
done

# Create a symbolic link for build.sh to maintain compatibility
if [ -f "build.sh" ]; then
  mv build.sh scripts/
  ln -sf scripts/build.sh build.sh
  chmod +x scripts/build.sh
fi

echo "Scripts have been organized into the scripts directory"
