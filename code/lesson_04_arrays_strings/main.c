#include <stdio.h>
#include <string.h>

int main() {
    // Arrays
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Array access: numbers[2] = %d\n", numbers[2]);

    // Iterate array
    printf("All numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Multi-dimensional array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("Matrix[1][2] = %d\n", matrix[1][2]);

    // Strings (character arrays, null-terminated)
    char str1[] = "Hello";  // Compiler calculates size
    char str2[20] = "World";
    printf("String: %s\n", str1);

    // String functions
    printf("Length of '%s': %zu\n", str1, strlen(str1));

    // String copying
    char str3[20];
    strcpy(str3, "Copy me");
    printf("Copied string: %s\n", str3);

    // String concatenation
    strcat(str3, " now");
    printf("Concatenated: %s\n", str3);

    // String comparison
    if (strcmp(str1, "Hello") == 0) {
        printf("Strings are equal\n");
    }

    // Accessing characters in string
    printf("First char: %c, Last char: %c\n", str1[0], str1[strlen(str1) - 1]);

    return 0;
}
