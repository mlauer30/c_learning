#include <stdio.h>

int main() {
    // If-else
    int age = 18;
    if (age >= 18) {
        printf("You are an adult\n");
    } else if (age >= 13) {
        printf("You are a teenager\n");
    } else {
        printf("You are a child\n");
    }

    // Switch statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    // For loop
    printf("\nFor loop (0-4):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop (countdown 3-0):\n");
    int count = 3;
    while (count >= 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    // Do-while loop (runs at least once)
    printf("Do-while loop:\n");
    int x = 0;
    do {
        printf("x = %d\n", x);
        x++;
    } while (x < 2);

    // Continue and break
    printf("Loop with continue and break:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue;  // Skip 3
        if (i == 7) break;     // Exit at 7
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
