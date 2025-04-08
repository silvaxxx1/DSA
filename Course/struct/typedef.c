#include <stdio.h>

// 1. Without typedef: Using 'struct' every time
struct Person {
    char name[50];
    int age;
    float height;
};

// 2. With typedef: Creating an alias for the struct
typedef struct {
    char name[50];
    int age;
    float height;
} PersonWithTypedef;  // 'PersonWithTypedef' is an alias for the struct

// 3. Typedef with a constant unsigned int
typedef const unsigned int UIntConst;  // 'UIntConst' is an alias for 'const unsigned int'

int main() {
    // 1. Without typedef: Declaring a variable of type 'struct Person'
    struct Person p1 = {"John Doe", 30, 5.9};
    printf("Without typedef - Person:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    // 2. With typedef: Declaring a variable of type 'PersonWithTypedef'
    PersonWithTypedef p2 = {"Jane Doe", 25, 5.5};
    printf("\nWith typedef - Person:\n");
    printf("Name: %s\n", p2.name);
    printf("Age: %d\n", p2.age);
    printf("Height: %.1f\n", p2.height);

    // 3. Without typedef: Using pointer to 'struct Person'
    struct Person* ptr1 = &p1;
    printf("\nWithout typedef - Pointer to Person:\n");
    printf("Value pointed by ptr1: %s\n", ptr1->name);

    // 4. With typedef: Using pointer to 'PersonWithTypedef'
    PersonWithTypedef* ptr2 = &p2;
    printf("\nWith typedef - Pointer to Person:\n");
    printf("Value pointed by ptr2: %s\n", ptr2->name);

    // 5. Using typedef for const unsigned int
    UIntConst num1 = 100;  // Declaring a const unsigned int using typedef
    printf("\nWith typedef for const unsigned int:\n");
    printf("Constant unsigned int: %u\n", num1);

    return 0;
}
