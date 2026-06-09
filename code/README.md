# C Learning Path

A structured approach to learning C from basics to advanced concepts.

## Lessons

1. **Basics** - Hello world, compilation
2. **Variables & Types** - int, float, char, sizeof, type conversion
3. **Control Flow** - if/else, switch, for, while, do-while
4. **Arrays & Strings** - arrays, multidimensional arrays, string functions
5. **Functions** - declaration, definition, return values, parameters
6. **Pointers** - addresses, dereferencing, pointer arithmetic
7. **Structs & Unions** - custom types, nested structures
8. **File I/O** - reading/writing files, FILE operations
9. **Memory Management** - malloc, free, memory leaks
10. **Advanced** - function pointers, macros, bit operations

## How to Build and Run

### Build all lessons
```bash
make
```

### Run a specific lesson
```bash
make run-2_variables_types
make run-3_control_flow
make run-4_arrays_strings
make run-5_functions
make run-6_pointers
make run-7_structs
make run-8_file_io
make run-9_memory_management
make run-10_advanced
```

### Clean up
```bash
make clean
```

### Run from within docker container
```bash
docker exec -it <container-name> bash
cd /code  # or wherever code is mounted
make run-2_variables_types
```

## Key C Concepts

### Memory
- C gives you manual memory management (malloc/free)
- Stack vs Heap
- Memory leaks occur when you forget to free()

### Pointers
- `int *ptr;` declares a pointer to int
- `&variable` gets the address
- `*ptr` dereferences to get the value
- Essential for passing by reference and dynamic memory

### Type Safety
- C is weakly typed compared to modern languages
- Always check array bounds manually
- Use sizeof() to write portable code

### Strings
- Strings are character arrays terminated with '\0'
- string.h functions: strlen, strcpy, strcat, strcmp
- Be careful with buffer overflow

## Compilation

The Makefile uses gcc with these flags:
- `-Wall -Wextra` - Enable all warnings
- `-std=c99` - Use C99 standard (includes useful features like inline variable declarations in for loops)
- `-g` - Include debug symbols (for debugging with gdb)

## Tips for Learning

1. Modify examples - change values, add new cases
2. Write your own programs combining concepts
3. Use printf() extensively for debugging
4. Compile and run frequently
5. Read compiler warnings - they're helpful!
6. Don't skip pointers - they're core to C
