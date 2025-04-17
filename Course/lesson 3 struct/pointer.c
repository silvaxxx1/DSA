#include <stdio.h>
#include <string.h> // For strcpy

// Define the struct 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Create a Person and assign values
    struct Person p1;
    strcpy(p1.name, "Emily");
    p1.age = 27;
    p1.height = 5.6;

    // Create a pointer to the struct
    struct Person *ptr = &p1;

    // Access struct members through the pointer using the '->' operator
    printf("---- Accessing with Pointer ----\n");
    printf("Name: %s\n", ptr->name);       // Equivalent to (*ptr).name
    printf("Age: %d\n", ptr->age);         // Equivalent to (*ptr).age
    printf("Height: %.1f ft\n", ptr->height);

    // You can also modify values through the pointer
    ptr->age = 28;
    printf("\nAfter birthday update:\n");
    printf("Age: %d\n", p1.age); // Will show 28 now

    return 0;
}
