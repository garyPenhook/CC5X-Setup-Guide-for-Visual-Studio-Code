# PIC Project Makefile for CC5X through Crossover

# Project settings
PROJECT = my_pic_project
DEVICE = 16F877
CC = cc5x-crossover.sh

# Directories
SRCDIR = src
INCDIR = include
OUTPUTDIR = output

# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OUTPUTDIR)/%.hex,$(SOURCES))

# Compiler flags
CFLAGS = -p$(DEVICE) -a -L -V

# Default target
all: $(OBJECTS)

# Rule to compile .c files to .hex
$(OUTPUTDIR)/%.hex: $(SRCDIR)/%.c
	@mkdir -p $(OUTPUTDIR)
	$(CC) $< $(CFLAGS) -o$(OUTPUTDIR)/$*

# Clean target
clean:
	rm -f $(OUTPUTDIR)/*.hex $(OUTPUTDIR)/*.asm $(OUTPUTDIR)/*.lst

.PHONY: all clean
