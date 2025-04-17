#include <stdio.h>
#include <string.h> // Required for strcpy

// Define a struct called 'Person'
struct Person {
    char name[50];   // String to store name
    int age;         // Integer to store age
    float height;    // Float to store height in feet
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person p1;

    // Assign values to members using dot operator
    strcpy(p1.name, "Alice");   // Copy string into 'name' (can't use '=' for strings in C)
    p1.age = 25;
    p1.height = 5.4;

    // Print the struct data
    printf("---- Person Info ----\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f ft\n", p1.height);

    // Initialize another person in a single line
    struct Person p2 = {"Bob", 30, 6.0};

    // Print the second person's data
    printf("\n---- Another Person ----\n");
    printf("Name: %s\n", p2.name);
    printf("Age: %d\n", p2.age);
    printf("Height: %.1f ft\n", p2.height);

    return 0;
}
