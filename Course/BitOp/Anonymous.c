// --- FILE 7: anonymous_struct_union.c ---

#include <stdio.h>

// Definition of a struct 'Employee' that contains an anonymous struct
struct Employee {
    int id; // An integer field 'id' to store the employee's ID.
    struct {
        char city[20];   // A character array to store the city name (up to 19 characters + null terminator).
        char country[20]; // A character array to store the country name (up to 19 characters + null terminator).
    }; // Anonymous struct: The struct does not have a name, and its fields are directly accessible from 'Employee' instances.
};

// Definition of a struct 'Data' that contains an anonymous union
struct Data {
    int type; // An integer field to specify the type of data (used to distinguish between union fields).
    union {
        int i;     // An integer field for storing integer values.
        float f;   // A float field for storing float values.
    }; // Anonymous union: The union does not have a name, and its fields are directly accessible from 'Data' instances.
};

int main() {
    // Initialize an instance of the 'Employee' struct.
    // The 'id' is set to 101, 'city' is set to "Ankara", and 'country' is set to "Türkiye".
    struct Employee e = {101, "Ankara", "Türkiye"};
    
    // Print the values of 'id', 'city', and 'country'.
    // The anonymous struct allows us to access 'city' and 'country' directly as members of 'e'.
    printf("ID: %d, City: %s, Country: %s\n", e.id, e.city, e.country);

    // Initialize an instance of the 'Data' struct.
    struct Data d;
    d.type = 1;    // The type is set to 1, indicating that the union field 'f' will be used.
    d.f = 3.14f;   // The float field 'f' of the union is set to 3.14.
    
    // Depending on the value of 'type', we print either the integer or float value from the union.
    if (d.type == 0) {
        // If 'type' is 0, print the integer value 'i' from the union.
        printf("Integer: %d\n", d.i);
    } else {
        // If 'type' is not 0, print the float value 'f' from the union.
        printf("Float: %.2f\n", d.f);
    }

    return 0;
}
