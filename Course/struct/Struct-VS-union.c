#include <stdio.h>

// Define a struct called 'DataStruct'
struct DataStruct {
    int intValue;     // Integer type
    float floatValue; // Float type
    char charValue;   // Character type
};

// Define a union called 'DataUnion'
union DataUnion {
    int intValue;     // Integer type
    float floatValue; // Float type
    char charValue;   // Character type
};

int main() {
    // Declare a variable 'dataStruct' of type 'struct DataStruct'
    struct DataStruct dataStruct;
    dataStruct.intValue = 10;
    dataStruct.floatValue = 3.14;
    dataStruct.charValue = 'A';

    // Print values stored in struct
    printf("Struct Values:\n");
    printf("intValue: %d\n", dataStruct.intValue);
    printf("floatValue: %.2f\n", dataStruct.floatValue);
    printf("charValue: %c\n", dataStruct.charValue);

    // Declare a variable 'dataUnion' of type 'union DataUnion'
    union DataUnion dataUnion;
    dataUnion.intValue = 10;
    dataUnion.floatValue = 3.14;
    dataUnion.charValue = 'A';

    // Print values stored in union
    printf("\nUnion Values:\n");
    printf("intValue: %d\n", dataUnion.intValue);
    printf("floatValue: %.2f\n", dataUnion.floatValue);
    printf("charValue: %c\n", dataUnion.charValue);

    // Demonstrate memory layout difference
    printf("\nMemory Size:\n");
    printf("Size of struct DataStruct: %lu bytes\n", sizeof(dataStruct));
    printf("Size of union DataUnion: %lu bytes\n", sizeof(dataUnion));

    return 0;
}
