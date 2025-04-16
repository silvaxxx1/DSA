// --- FILE 5: unnamed_bit_fields.c ---

#include <stdio.h>

// Definition of a struct 'Example' with bit fields
struct Example {
    // 'a' is an unsigned integer that occupies 13 bits
    unsigned int a : 13;

    // This unnamed bit field occupies 19 bits but is not assigned to a variable.
    // It acts as padding between 'a' and 'b', ensuring proper alignment.
    unsigned int : 19;

    // 'b' is an unsigned integer that occupies 4 bits
    unsigned int b : 4;
};

int main() {
    // Initialize the struct with values for 'a' and 'b'.
    // The unnamed bit field is not initialized, as it is not directly accessible.
    struct Example ex = {4095, 7};

    // Print the values of 'a' and 'b'.
    // 'ex.a' will print 4095, as it's the maximum value that can be stored in 13 bits.
    // 'ex.b' will print 7, which fits in 4 bits.
    printf("a = %u, b = %u\n", ex.a, ex.b);

    return 0;
}
