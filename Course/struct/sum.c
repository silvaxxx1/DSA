#include <stdio.h>
#include <string.h>  // Required for strcpy

// Define the struct
struct Person {
    char name[50];
    int age;
    float height;
};

// Function that takes a struct by value (makes a copy)
void printPerson(struct Person p) {
    printf("Inside printPerson (by value):\n");
    printf("Name: %s | Age: %d | Height: %.1f ft\n", p.name, p.age, p.height);
}

// Function that takes a struct by reference (via pointer)
void birthday(struct Person *p) {
    p->age += 1; // Modify the original data
    printf("Happy Birthday, %s! You're now %d!\n", p->name, p->age);
}

int main() {
    // -----------------------------------------
    // 1. Defining and Using Structs
    // -----------------------------------------
    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 25;
    p1.height = 5.4;

    // Access and print the struct data
    printf("---- Person Info ----\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f ft\n", p1.height);

    // -----------------------------------------
    // 2. Combined Declaration + Definition
    // -----------------------------------------
    struct example {
        char c;
        int i;
    } sample1 = {'A', 1}, sample2 = {'B', 2};

    // Print combined declaration example
    printf("\n---- Combined Declaration Example ----\n");
    printf("Sample1 - Char: %c, Int: %d\n", sample1.c, sample1.i);
    printf("Sample2 - Char: %c, Int: %d\n", sample2.c, sample2.i);

    // -----------------------------------------
    // 3. Passing Structs to Functions
    // -----------------------------------------
    // Passing by value (just prints info)
    printPerson(p1);

    // Passing by reference (modifies the original)
    birthday(&p1); // Pass address of p1

    // Check updated age
    printf("After function call:\n");
    printf("Name: %s | Age: %d | Height: %.1f ft\n", p1.name, p1.age, p1.height);

    return 0;
}
