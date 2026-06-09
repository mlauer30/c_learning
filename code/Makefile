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

# Assignment targets
ASSIGNMENTS = $(wildcard lesson_*/assignment.c)
ASSIGNMENT_PROGS = $(ASSIGNMENTS:assignment.c=assignment)

assignments: $(ASSIGNMENT_PROGS)

lesson_%/assignment: lesson_%/assignment.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "✓ Built $@"

run-assignment-%: lesson_%/assignment
	./lesson_$*/assignment

compile-assignment-%: lesson_%/assignment
	@echo "✓ Assignment compiled successfully"

help: help
	@echo ""
	@echo "Assignment targets:"
	@echo "make assignments           - Compile all assignments"
	@echo "make compile-assignment-2  - Compile lesson 2 assignment"
	@echo "make run-assignment-3      - Run lesson 3 assignment"

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
