# CC5X PIC Development Environment

This repository contains a development environment for PIC microcontroller programming using the CC5X compiler under Linux.

## Overview

This project provides a streamlined development workflow for PIC microcontroller programming using B Knudsen's CC5X compiler through Wine on Linux systems. It includes various helper scripts and VS Code integration for a smoother development experience.

## Setup

1. Install dependencies:
   ```bash
   sudo apt-get install wine
   ```

2. Set up CC5X:
   - Install CC5X using Wine or CrossOver
   - Default expected location: `~/.cxoffice/Crossword_Compiler_9/drive_c/Program Files/bknd/CC5X`
   - Alternatively, install to `~/bin/cc5x/` for direct access

3. Initialize project structure:
   ```bash
   ./scripts/cleanup.sh    # Creates required directories
   ./cc5x-direct.sh        # Tests the compiler setup
   ```

4. Copy PIC headers (VS Code task):
   - Run the "Copy PIC Headers" task in VS Code
   - Or manually: `mkdir -p include/headers && cp "~/.cxoffice/Crossword_Compiler_9/drive_c/Program Files/bknd/CC5X/"*.H include/headers/`

## Project Structure
