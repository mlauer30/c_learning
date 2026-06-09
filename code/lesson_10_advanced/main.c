#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

// Function pointers
typedef int (*MathFunc)(int, int);

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

// Callback function
void apply_operation(int x, int y, MathFunc op) {
    printf("Result: %d\n", op(x, y));
}

// Forward declaration
void static_demo();

// Variadic functions - variable number of arguments
int sum_all(int count, ...) {
    int total = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

// Macros
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Conditional compilation
#define DEBUG 1

int main() {
    // Function pointers
    printf("=== Function Pointers ===\n");

    MathFunc operation = add;
    printf("add(10, 5) = %d\n", operation(10, 5));

    operation = subtract;
    printf("subtract(10, 5) = %d\n", operation(10, 5));

    operation = multiply;
    printf("multiply(10, 5) = %d\n", operation(10, 5));

    // Array of function pointers
    printf("\n=== Array of Function Pointers ===\n");
    MathFunc operations[] = {add, subtract, multiply};
    char *op_names[] = {"Add", "Subtract", "Multiply"};

    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", op_names[i], operations[i](10, 5));
    }

    // Using function pointers as callbacks
    printf("\n=== Function Pointers as Callbacks ===\n");
    apply_operation(20, 8, add);
    apply_operation(20, 8, subtract);
    apply_operation(20, 8, multiply);

    // Macros - text substitution
    printf("\n=== Macros ===\n");
    printf("PI = %f\n", PI);
    printf("SQUARE(5) = %d\n", SQUARE(5));
    printf("MAX(3, 7) = %d\n", MAX(3, 7));
    printf("MIN(3, 7) = %d\n", MIN(3, 7));

    // Conditional compilation
    printf("\n=== Conditional Compilation ===\n");
#ifdef DEBUG
    printf("DEBUG mode is ON\n");
#else
    printf("DEBUG mode is OFF\n");
#endif

    // Bit operations
    printf("\n=== Bit Operations ===\n");
    int a = 5;      // 0101
    int b = 3;      // 0011

    printf("a = %d (binary: %04b)\n", a, a);
    printf("b = %d (binary: %04b)\n", b, b);
    printf("a & b (AND)  = %d\n", a & b);     // 0001 = 1
    printf("a | b (OR)   = %d\n", a | b);     // 0111 = 7
    printf("a ^ b (XOR)  = %d\n", a ^ b);     // 0110 = 6
    printf("~a (NOT)     = %d\n", ~a);        // Inverts all bits
    printf("a << 1 (left shift)  = %d\n", a << 1);    // 1010 = 10
    printf("a >> 1 (right shift) = %d\n", a >> 1);    // 0010 = 2

    // Bit flags
    printf("\n=== Bit Flags ===\n");
    #define FLAG_READ    (1 << 0)   // 0001
    #define FLAG_WRITE   (1 << 1)   // 0010
    #define FLAG_EXECUTE (1 << 2)   // 0100

    int permissions = 0;
    permissions |= FLAG_READ;      // Set read flag
    permissions |= FLAG_WRITE;     // Set write flag

    printf("Has read?    %s\n", (permissions & FLAG_READ) ? "Yes" : "No");
    printf("Has write?   %s\n", (permissions & FLAG_WRITE) ? "Yes" : "No");
    printf("Has execute? %s\n", (permissions & FLAG_EXECUTE) ? "Yes" : "No");

    permissions &= ~FLAG_WRITE;    // Remove write flag
    printf("After removing write: %s\n", (permissions & FLAG_WRITE) ? "Yes" : "No");

    // Typedef
    printf("\n=== Typedef ===\n");
    typedef struct {
        int x;
        int y;
    } Point;

    typedef unsigned int uint;
    uint count = 42;
    printf("typedef uint: %u\n", count);

    // Static keyword
    printf("\n=== Static Variables ===\n");
    static_demo();
    static_demo();
    static_demo();

    // Inline functions
    printf("\n=== Ternary Operator ===\n");
    int age = 25;
    char *status = (age >= 18) ? "Adult" : "Minor";
    printf("Age %d: %s\n", age, status);

    return 0;
}

void static_demo() {
    static int count = 0;  // Initialized only once
    count++;
    printf("static_demo() called %d time(s)\n", count);
}
