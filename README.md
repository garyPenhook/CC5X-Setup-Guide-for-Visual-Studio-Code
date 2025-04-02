# CC5X PIC Microcontroller Development Environment

This repository contains a development environment setup for PIC microcontrollers using the CC5X compiler with Visual Studio Code.

## Features

- Configured for PIC16F15313 microcontroller
- VS Code integration with custom tasks
- Multiple compilation methods (Wine, CrossOver, DOSBox, Mock)
- Pre-configured project structure

## Project Structure

```
.
├── .vscode/            # VS Code configuration
├── include/            # Header files
│   └── headers/        # PIC header files from CC5X
├── src/                # Source code files
│   └── main.c          # Main application code
├── output/             # Compilation output (HEX, ASM, LST files)
├── cc5x-direct.sh      # Main compilation script using Wine
├── cc5x-compile.sh     # Alternative compilation script 
├── gcc-mock-compile.sh # Mock compiler for testing
└── cleanup.sh          # Script to clean up project files
```

## Prerequisites

- Linux environment
- Wine installed (`sudo apt install wine`)
- CC5X compiler files (from B Knudsen Data)
- Visual Studio Code

## Usage

1. Place your C source files in the `src/` directory
2. Open the project in VS Code
3. Press `Ctrl+Shift+B` to compile the current file using Wine
4. Output files will be placed in the `output/` directory

## Available Tasks

- `CC5X Direct Wine`: Main compilation task using system Wine (default build task)
- `CC5X Native Compile`: Alternative compilation using CrossOver
- `GCC Mock Compile`: Mock compilation for testing without CC5X
- `Clean Output Files`: Remove all generated output files
- `Copy PIC Headers`: Copy header files from CrossOver to the include directory

## Configuration

- Edit `.vscode/settings.json` to change the target PIC device
- Edit `cc5x-direct.sh` to modify compilation parameters

## License

This project is released under the MIT License. See the LICENSE file for details.

## Acknowledgments

- B Knudsen Data for the CC5X compiler
- CrossOver for Windows application compatibility on Linux
- Visual Studio Code for the development environment
