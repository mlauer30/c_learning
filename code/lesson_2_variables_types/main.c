#include <stdio.h>

int main() {
    // Integer types
    int count = 42;
    short small = 1;
    long big = 1000000L;

    // Floating point
    float pi = 3.14f;
    double pi_precise = 3.14159265358979;

    // Character
    char letter = 'A';

    // Boolean (C99+, need to include stdbool.h for bool type)
    int is_true = 1;  // 1 = true, 0 = false

    printf("int: %d (size: %zu bytes)\n", count, sizeof(int));
    printf("short: %d (size: %zu bytes)\n", small, sizeof(short));
    printf("long: %ld (size: %zu bytes)\n", big, sizeof(long));
    printf("float: %.2f (size: %zu bytes)\n", pi, sizeof(float));
    printf("double: %.10f (size: %zu bytes)\n", pi_precise, sizeof(double));
    printf("char: %c (size: %zu bytes)\n", letter, sizeof(char));

    // Type conversion
    int x = 10;
    float y = x;  // implicit conversion
    int z = (int)3.14;  // explicit cast, z = 3

    printf("\nType conversion: %d -> %.1f -> %d\n", x, y, z);

    return 0;
}
