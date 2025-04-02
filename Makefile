# PIC Project Makefile for CC5X

# Project settings
PROJECT = pic_project
DEVICE = 16F15313
CC = ./cc5x-direct.sh

# Directories
SRCDIR = src
INCDIR = include
OUTPUTDIR = output

# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OUTPUTDIR)/%.hex,$(SOURCES))

# Default target
all: $(OBJECTS)

# Rule to compile .c files to .hex
$(OUTPUTDIR)/%.hex: $(SRCDIR)/%.c
	@mkdir -p $(OUTPUTDIR)
	$(CC) $<

# Clean target
clean:
	rm -f $(OUTPUTDIR)/*.hex $(OUTPUTDIR)/*.asm $(OUTPUTDIR)/*.lst

.PHONY: all clean
