#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("=== Dynamic Memory Allocation ===\n");

    // malloc - allocate memory
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 42;
    printf("Allocated 1 int: %d\n", *ptr);
    free(ptr);
    printf("Freed memory\n");

    // Allocating arrays
    printf("\n=== Allocating Arrays ===\n");
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    printf("Dynamic array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    // calloc - allocate and initialize to zero
    printf("\n=== Using calloc ===\n");
    int *arr2 = (int *)calloc(5, sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("calloc initializes to zero: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr2);

    // realloc - resize allocated memory
    printf("\n=== Using realloc ===\n");
    int *arr3 = (int *)malloc(3 * sizeof(int));
    arr3[0] = 1;
    arr3[1] = 2;
    arr3[2] = 3;

    printf("Original (size 3): ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    arr3 = (int *)realloc(arr3, 5 * sizeof(int));
    if (arr3 == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    arr3[3] = 4;
    arr3[4] = 5;
    printf("Resized (size 5): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    free(arr3);

    // Dynamic strings
    printf("\n=== Dynamic Strings ===\n");
    char *str = (char *)malloc(50 * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str, "Hello, Dynamic Memory!");
    printf("String: %s\n", str);
    printf("Length: %zu\n", strlen(str));
    free(str);

    // Allocating structs
    printf("\n=== Allocating Structs ===\n");
    typedef struct {
        int id;
        char name[50];
    } Student;

    Student *student = (Student *)malloc(sizeof(Student));

    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    student->id = 1001;
    strcpy(student->name, "John Doe");

    printf("Student ID: %d\n", student->id);
    printf("Student Name: %s\n", student->name);
    free(student);

    // Array of structs
    printf("\n=== Array of Structs ===\n");
    Student *students = (Student *)malloc(3 * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        students[i].id = 1000 + i;
        sprintf(students[i].name, "Student %d", i + 1);
    }

    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
    }
    free(students);

    // Common memory issues
    printf("\n=== Memory Allocation Functions ===\n");
    printf("malloc(size)             - Allocate bytes (uninitialized)\n");
    printf("calloc(count, size)      - Allocate and zero-initialize\n");
    printf("realloc(ptr, new_size)   - Resize allocated memory\n");
    printf("free(ptr)                - Deallocate memory\n");
    printf("\nAlways check if malloc/calloc/realloc return NULL\n");
    printf("Always free() allocated memory to prevent leaks\n");
    printf("Never access memory after free()\n");

    return 0;
}
