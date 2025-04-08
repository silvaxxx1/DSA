#include <stdio.h>

// Define a union called 'Data'
union Data {
    int intValue;     // Integer type
    float floatValue; // Float type
    char charValue;   // Character type
};

int main() {
    // Declare a variable 'data' of type 'union Data'
    union Data data;

    // Assign a value to the int member
    data.intValue = 10;
    printf("Union with int value: %d\n", data.intValue);

    // Now, assign a value to the float member (this will overwrite the previous value)
    data.floatValue = 3.14;
    printf("Union with float value: %.2f\n", data.floatValue);

    // Now, assign a value to the char member (this will overwrite the previous value)
    data.charValue = 'A';
    printf("Union with char value: %c\n", data.charValue);

    // Accessing the int member after assigning the char value will show unexpected results (overwritten)
    printf("Union after overwriting with char value (intValue): %d\n", data.intValue);

    return 0;
}
