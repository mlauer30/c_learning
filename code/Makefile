CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g

# Find all lesson directories and create targets
LESSONS = $(wildcard lesson_*/main.c)
PROGRAMS = $(LESSONS:main.c=main)

.PHONY: all clean help

all: $(PROGRAMS)

lesson_%/main: lesson_%/main.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "✓ Built $@"

run-%: lesson_%/main
	./lesson_$*/main

clean:
	find . -name "main" -type f -delete
	@echo "✓ Cleaned up compiled files"

help:
	@echo "C Learning Makefile"
	@echo "==================="
	@echo "make              - Compile all lessons"
	@echo "make run-lesson-2 - Run lesson 2"
	@echo "make clean        - Remove compiled files"
	@echo ""
	@echo "Available lessons:"
	@ls -d lesson_*
