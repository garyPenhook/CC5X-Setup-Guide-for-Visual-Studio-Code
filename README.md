# Simplified PIC Development Template

This is a lightweight template for PIC microcontroller development using the CC5X compiler.

## Directory Structure
- `src/` - Source code (main.c and project headers)
- `include/` - Only the header files you actually need
- `output/` - Build output files
- `build.sh` - Single compilation script

## Usage
1. Edit `src/main.c` with your application code
2. Run `./build.sh [PIC_MODEL]` to compile (defaults to 16F15313)
   Example: `./build.sh 16F877`
3. Output files will be in the `output/` directory

## Configuration
- Edit the `build.sh` script to change default settings
