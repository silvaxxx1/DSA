#include <stdio.h>
#include <string.h>

// Define a struct called 'Person'
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
    // Create and initialize a Person
    struct Person p1;
    strcpy(p1.name, "Liam");
    p1.age = 29;
    p1.height = 5.9;

    // Pass by value (just prints info)
    printPerson(p1);

    // Pass by reference (modifies the original)
    birthday(&p1); // Pass address of p1

    // Check updated age
    printf("After function call:\n");
    printf("Name: %s | Age: %d | Height: %.1f ft\n", p1.name, p1.age, p1.height);

    return 0;
}
