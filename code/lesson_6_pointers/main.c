#include <stdio.h>

int add(int a, int b);

int main() {
    // Basic pointer concepts
    int x = 42;
    int *ptr = &x;  // ptr points to x

    printf("=== Basic Pointers ===\n");
    printf("x = %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("ptr stores: %p\n", (void *)ptr);
    printf("Dereference ptr (*ptr): %d\n", *ptr);

    // Modifying through pointer
    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("x = %d\n", x);

    // Pointer arithmetic
    printf("\n=== Pointer Arithmetic ===\n");
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("arr[0] via pointer: %d\n", *p);
    printf("arr[1] via p+1: %d\n", *(p + 1));
    printf("arr[3] via p+3: %d\n", *(p + 3));

    // Incrementing pointers
    printf("\nIterating with pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Pointers to pointers
    printf("\n=== Pointers to Pointers ===\n");
    int val = 99;
    int *ptr1 = &val;
    int **ptr2 = &ptr1;  // Pointer to pointer

    printf("val = %d\n", val);
    printf("*ptr1 = %d\n", *ptr1);
    printf("**ptr2 = %d\n", **ptr2);
    printf("Modify via **ptr2:\n");
    **ptr2 = 55;
    printf("val is now: %d\n", val);

    // NULL pointer
    printf("\n=== NULL Pointer ===\n");
    int *null_ptr = NULL;
    printf("null_ptr is NULL: %s\n", null_ptr == NULL ? "true" : "false");

    // Function pointers (preview)
    printf("\n=== Function Pointers ===\n");
    int (*func_ptr)(int, int) = &add;  // Pointer to function
    printf("Call add(10, 5) via pointer: %d\n", func_ptr(10, 5));

    // void pointer (generic pointer)
    printf("\n=== Void Pointer ===\n");
    int num = 42;
    void *generic_ptr = &num;
    printf("void* to int: %d\n", *(int *)generic_ptr);

    return 0;
}

int add(int a, int b) {
    return a + b;
}
