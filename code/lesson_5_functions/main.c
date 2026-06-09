#include <stdio.h>

// Function declarations (prototypes)
int add(int a, int b);
void greet(char *name);
int factorial(int n);
void increment_by_value(int num);
void increment_by_pointer(int *ptr);

int main() {
    // Calling functions
    printf("5 + 3 = %d\n", add(5, 3));

    greet("Alice");

    printf("Factorial of 5 = %d\n", factorial(5));

    // Passing by value (changes don't affect original)
    int x = 10;
    printf("Before: x = %d\n", x);
    increment_by_value(x);
    printf("After increment_by_value: x = %d\n", x);

    // Passing by reference (changes affect original)
    int y = 10;
    printf("\nBefore: y = %d\n", y);
    increment_by_pointer(&y);
    printf("After increment_by_pointer: y = %d\n", y);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

void greet(char *name) {
    printf("Hello, %s!\n", name);
}

// Recursive function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void increment_by_value(int num) {
    num++;  // Only changes local copy
}

void increment_by_pointer(int *ptr) {
    (*ptr)++;  // Changes the actual variable
}
