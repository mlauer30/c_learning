#include <stdio.h>
#include <string.h>

// Define a struct - custom data type
struct Person {
    char name[50];
    int age;
    float height;
};

// Typedef for convenience
typedef struct {
    int x;
    int y;
} Point;

// Nested struct
struct Address {
    char street[100];
    char city[50];
    int zipcode;
};

struct Employee {
    char name[50];
    int id;
    struct Address address;  // Nested struct
};

// Union - all members share same memory
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // Create and initialize struct
    printf("=== Basic Struct ===\n");
    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 30;
    p1.height = 5.6f;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);
    printf("Size of Person: %zu bytes\n", sizeof(struct Person));

    // Struct with initializer
    printf("\n=== Struct Initialization ===\n");
    struct Person p2 = {"Bob", 25, 5.9f};
    printf("Name: %s, Age: %d\n", p2.name, p2.age);

    // Array of structs
    printf("\n=== Array of Structs ===\n");
    struct Person people[] = {
        {"Charlie", 35, 6.0f},
        {"Diana", 28, 5.4f},
        {"Eve", 32, 5.7f}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s: %d years old\n", people[i].name, people[i].age);
    }

    // Pointers to structs
    printf("\n=== Pointers to Structs ===\n");
    struct Person *ptr = &p1;
    printf("Via pointer (->): %s\n", ptr->name);
    printf("Via pointer and dereference: %s\n", (*ptr).name);

    // Typedef struct
    printf("\n=== Typedef Struct ===\n");
    Point pt1 = {10, 20};
    Point pt2 = {30, 40};
    printf("Point 1: (%d, %d)\n", pt1.x, pt1.y);
    printf("Point 2: (%d, %d)\n", pt2.x, pt2.y);

    // Nested structs
    printf("\n=== Nested Structs ===\n");
    struct Employee emp = {
        "Frank",
        1001,
        {"123 Main St", "Springfield", 12345}
    };
    printf("Employee: %s\n", emp.name);
    printf("City: %s\n", emp.address.city);

    // Union - members share memory
    printf("\n=== Union ===\n");
    union Data data;
    printf("Size of Union: %zu bytes\n", sizeof(union Data));

    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 3.14f;  // Overwrites data.i
    printf("After data.f = 3.14:\n");
    printf("data.f = %.2f\n", data.f);
    printf("data.i = %d (corrupted)\n", data.i);

    return 0;
}
