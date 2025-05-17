// --- FILE 7: anonymous_struct_union.c ---

#include <stdio.h>

// -------------------------------------------------------------
// Definition of a struct 'Employee' that contains an anonymous struct
// -------------------------------------------------------------
struct Employee {
    int id; // An integer field 'id' to store the employee's ID.

    // Anonymous struct definition (no tag name)
    struct {
        char city[20];    // City name (max 19 chars + '\0')
        char country[20]; // Country name (max 19 chars + '\0')
    }; 
    // Because the inner struct is anonymous, you can access
    // 'city' and 'country' directly through an Employee instance.
};

// -------------------------------------------------------------
// Definition of a struct 'Data' that contains an anonymous union
// -------------------------------------------------------------
struct Data {
    int type; // Field to indicate the type of data stored in the union

    // Anonymous union definition (no tag name)
    union {
        int i;     // Integer value
        float f;   // Floating-point value
    };
    // Since the union is anonymous, you can access 'i' and 'f' directly
    // without needing to go through a union member.
};

int main() {
    // -------------------------------------------------------------
    // Create and initialize an Employee
    // -------------------------------------------------------------
    struct Employee e = {101, "Ankara", "Türkiye"}; 
    // The initializer sets:
    // - id to 101
    // - city to "Ankara"
    // - country to "Türkiye"
    // Because of the anonymous struct, we can access e.city and e.country directly

    // Print Employee information
    printf("ID: %d, City: %s, Country: %s\n", e.id, e.city, e.country);

    // -------------------------------------------------------------
    // Create and initialize a Data instance
    // -------------------------------------------------------------
    struct Data d;
    d.type = 1;    // Set the type to 1 to indicate we're using the float
    d.f = 3.14f;   // Store a float in the anonymous union

    // Conditionally access union fields based on 'type'
    if (d.type == 0) {
        // If type is 0, assume the union stores an integer
        printf("Integer: %d\n", d.i);
    } else {
        // Otherwise, assume it stores a float
        printf("Float: %.2f\n", d.f);
    }

    return 0;
}
