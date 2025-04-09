#include <stdio.h>
#include <string.h>

// Define a nested struct for Address
struct Address {
    char street[50];
    char city[50];
    char country[50];
};

// Define a struct for Person, which contains an Address struct
struct Person {
    char name[50];
    int age;
    struct Address address;  // Nested struct (Address)
};

// Function to print the details of a Person
void printPersonDetails(struct Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Address: %s, %s, %s\n", p->address.street, p->address.city, p->address.country);
}

int main() {
    // Initialize a person with a nested address struct
    struct Person person1 = {
        "John Doe", 35, {"123 Main St", "New York", "USA"}
    };

 

    // Print the details of the person
    printPersonDetails(&person1);

    return 0;
}
