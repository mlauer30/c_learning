# C Learning Assignments

Practical exercises to reinforce each lesson's concepts. Each assignment builds on previous knowledge.

## How to Work on Assignments

1. **Start with reading the requirements** in `lesson_N/assignment.c`
2. **Implement your solution** in the same file (replace TODO sections)
3. **Compile**: `make compile-assignment-N`
4. **Run**: `make run-assignment-N`
5. **Debug** if needed - read error messages carefully

## Assignment Overview

### Assignment 2: Temperature Converter
**Difficulty**: ⭐ Easy  
**Time**: 15-20 minutes

**Concepts tested**: Variables, types, type conversion, basic math

**What you'll build**: A program that converts between Fahrenheit and Celsius

**Key skills**:
- Declaring float variables
- Arithmetic operations
- Using `printf()` with format specifiers

**Hints**:
- Use `float` for decimal precision
- Formula: `C = (F - 32) * 5/9`
- Printf format: `%.1f` shows 1 decimal place

---

### Assignment 3: Grade Calculator
**Difficulty**: ⭐⭐ Easy-Medium  
**Time**: 20-30 minutes

**Concepts tested**: Control flow (if-else, switch), logic

**What you'll build**: Score-to-letter-grade converter with error checking

**Key skills**:
- Multi-branch if-else statements
- Switch statements
- Logical operators (`&&`, `||`)
- Input validation

**Hints**:
- Use if-else is clearer than switch for range checks
- Check for invalid input first
- Consider edge cases: 89.9 vs 90, 59 vs 60

---

### Assignment 4: Word Counter & String Analyzer
**Difficulty**: ⭐⭐ Medium  
**Time**: 30-40 minutes

**Concepts tested**: Arrays, strings, string functions, loops

**What you'll build**: Analyze a string for length, word count, longest word

**Key skills**:
- Working with character arrays
- String functions (`strlen()`, etc.)
- Iterating through strings
- Counting patterns

**Hints**:
- `strlen()` returns string length
- Spaces separate words - count spaces + 1
- Track max length as you iterate
- `str[i]` accesses individual characters

---

### Assignment 5: Calculator with Functions
**Difficulty**: ⭐⭐ Medium  
**Time**: 30-45 minutes

**Concepts tested**: Functions, parameters, return values, error handling

**What you'll build**: A calculator with add, subtract, multiply, divide operations

**Key skills**:
- Function declarations and definitions
- Parameters and return values
- Function calls from main
- Error handling (division by zero)

**Hints**:
- Declare all functions at the top
- Check `b == 0` before dividing
- Return appropriate types (int or float)
- Use helper function for printing

---

### Assignment 6: Array Manipulation with Pointers ⭐⭐⭐ CRITICAL
**Difficulty**: ⭐⭐⭐ Medium-Hard  
**Time**: 45-60 minutes

**Concepts tested**: Pointers, pointer arithmetic, functions with pointers, arrays

**What you'll build**: Functions that use pointers to analyze and manipulate arrays

**Key skills**:
- Passing arrays as pointers: `int *arr`
- Pointer arithmetic: `arr + i`
- Dereferencing: `*(arr + i)`
- Functions that modify data via pointers

**Hints**:
- `int *arr` is a pointer to the first element
- `*(arr + i)` is the same as `arr[i]`
- Use pointer arithmetic to iterate: `for (int *p = arr; p < arr + size; p++)`
- The `swap()` function MUST use pointers: `void swap(int *a, int *b)`

**Why this is critical**: Pointers are the foundation of C. Master this and the rest becomes easier.

---

### Assignment 7: Student Record System
**Difficulty**: ⭐⭐⭐ Medium-Hard  
**Time**: 45-60 minutes

**Concepts tested**: Structs, struct arrays, pointers to structs, functions with structs

**What you'll build**: A mini database of students with search and analysis functions

**Key skills**:
- Defining structs
- Creating struct arrays
- Using pointers to structs: `struct Student *ptr`
- Arrow operator: `ptr->field`
- Passing structs to functions

**Hints**:
- Define struct before main
- Use array initialization: `Student students[] = {...}`
- Functions take `Student *ptr` to modify or examine data
- Arrow operator `->` is shorthand for `(*ptr).field`

---

### Assignment 8: CSV File Handler
**Difficulty**: ⭐⭐⭐ Medium-Hard  
**Time**: 60-90 minutes

**Concepts tested**: File I/O, parsing, writing data, CSV format

**What you'll build**: Read and write student records from/to a CSV file

**Key skills**:
- `fopen()` with different modes ("w" write, "r" read)
- `fprintf()` for formatted writing
- `fgets()` for reading lines
- String parsing
- File error checking

**Hints**:
- Check `if (file == NULL)` after fopen
- Use `fprintf()` like `printf()` but to a file
- Use `fgets()` to read lines, then parse with `strtok()` or sscanf
- Don't forget `fclose(file)`
- Test file manually: `cat students.csv`

**Extra challenge**: Parse CSV using `strtok()`:
```c
char line[256];
fgets(line, sizeof(line), file);
int id = atoi(strtok(line, ","));
char *name = strtok(NULL, ",");
```

---

### Assignment 9: Dynamic Array Library ⭐⭐⭐⭐ MASTERY
**Difficulty**: ⭐⭐⭐⭐ Hard  
**Time**: 90-120 minutes

**Concepts tested**: Memory management, malloc/free, dynamic allocation, resizing

**What you'll build**: A growable array implementation (like C++ vector)

**Key skills**:
- `malloc()` to allocate memory
- `realloc()` to resize
- `free()` to deallocate
- Managing size vs capacity
- Memory safety

**Hints**:
- When `size == capacity`, realloc to double size
- Always check for NULL after malloc/realloc
- Only free at the very end
- Test with valgrind: `valgrind ./lesson_9/assignment`

**What you'll learn**: This is how real C arrays work. Understand this and you understand memory!

---

### Assignment 10: Function Pointer Calculator ⭐⭐⭐⭐ MASTERY
**Difficulty**: ⭐⭐⭐⭐⭐ Hard  
**Time**: 120+ minutes

**Concepts tested**: Function pointers, macros, bit operations, advanced design

**What you'll build**: An extensible calculator that uses function pointers for operations

**Key skills**:
- Function pointers: `int (*func)(int, int)`
- Arrays of function pointers
- Macros for constants and helper code
- Bit manipulation for flags
- Registering and discovering operations

**Hints**:
- Operation struct holds name, symbol, and function pointer
- Global array stores registered operations
- `find_operation('+')` searches the array
- Use `pow()` for exponentiation (include `math.h`)
- Bit operations: `value |= (1 << bit)` to set, `value &= ~(1 << bit)` to clear

**Advanced concept**: This pattern is used in real C:
- Plugin systems
- Event dispatching
- Command patterns
- Extensible architectures

---

## Difficulty Progression

```
Assignments 2-3   ⭐        Foundation
Assignments 4-5   ⭐⭐      Comfortable
Assignments 6-7   ⭐⭐⭐    Intermediate (Pointers + Structs!)
Assignment 8      ⭐⭐⭐    Practical Skills (File I/O)
Assignment 9      ⭐⭐⭐⭐  Mastery (Memory Management)
Assignment 10     ⭐⭐⭐⭐⭐ Capstone (Advanced Design)
```

## Testing Your Assignments

### Compile All
```bash
make assignments
```

### Run Specific Assignment
```bash
make run-assignment-6  # Run lesson 6 assignment
```

### Troubleshooting

**Compilation errors?**
- Read the error message carefully (line number, error type)
- Check syntax: missing semicolons, brackets
- Verify function declarations before main

**Wrong output?**
- Add debug print statements
- Check your loop conditions
- Verify array indexing

**Memory issues?**
- Use valgrind: `valgrind ./lesson_9/assignment`
- Check for malloc without free
- Verify realloc didn't fail (check for NULL)

## Bonus Challenges

Each assignment has optional bonus features that deepen understanding. Try them after completing the basic version!

## Solutions

Not included intentionally - Google and Stack Overflow are your friends. Key tips:
- Break the problem into smaller functions
- Test incrementally (one function at a time)
- Print intermediate results for debugging
- Read the requirements carefully

Good luck! 🚀
