#include <stdio.h>
#include <string.h> // For strcpy

// Define the struct 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare an array of 3 Person structs
    struct Person people[3];

    // Fill in the data for each person
    strcpy(people[0].name, "Charlie");
    people[0].age = 28;
    people[0].height = 5.8;

    strcpy(people[1].name, "Diana");
    people[1].age = 22;
    people[1].height = 5.5;

    strcpy(people[2].name, "Ethan");
    people[2].age = 35;
    people[2].height = 6.1;

    // Print out each person's data
    printf("---- People List ----\n");

    for (int i = 0; i < 3; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.1f ft\n", people[i].height);
    }

    return 0;
}
