// Week 5: Bitwise Operations, Bit Fields, Enums, and Secure C Programming
#include <stdio.h>
#include <limits.h> // For CHAR_BIT: number of bits in a byte
#include <string.h> // For safe string functions like fgets and strcspn

// --- 10.9 Bitwise Operators ---
// Demonstrates basic bitwise operations on integers
void bitwise_operations() {
    int a = 5;  // binary 0101
    int b = 3;  // binary 0011

    printf("\n[Bitwise Operators]\n");
    // Bitwise AND: only bits set in both a and b remain set
    printf("a & b = %d\n", a & b);         // 0001 binary = 1 decimal

    // Bitwise OR: bits set in either a or b are set
    printf("a | b = %d\n", a | b);         // 0111 binary = 7 decimal

    // Bitwise XOR: bits set in a or b but not both
    printf("a ^ b = %d\n", a ^ b);         // 0110 binary = 6 decimal

    // Bitwise NOT (one's complement): flips all bits
    // Note: the result may look like a negative number due to two's complement representation
    printf("~a = %d\n", ~a);

    // Left shift: moves bits left, filling with 0s, effectively multiplying by 2
    printf("a << 1 = %d\n", a << 1);       // 1010 binary = 10 decimal

    // Right shift: moves bits right, effectively dividing by 2 (for positive numbers)
    printf("a >> 1 = %d\n", a >> 1);       // 0010 binary = 2 decimal

    // Compound assignment with bitwise operators
    int c = 6;        // 0110
    c &= 3;           // c = c & 3 (0011), results in 2 (0010)
    printf("c &= 3: %d\n", c);

    c |= 2;           // c = c | 2 (0010), results in 2 (unchanged)
    printf("c |= 2: %d\n", c);

    c ^= 1;           // c = c ^ 1 (0001), flips least significant bit, results in 3 (0011)
    printf("c ^= 1: %d\n", c);

    c <<= 1;          // left shift by 1, doubles value to 6 (0110)
    printf("c <<= 1: %d\n", c);

    c >>= 2;          // right shift by 2, divides value by 4, results in 1 (0001)
    printf("c >>= 2: %d\n", c);
}

// --- 10.9.1 Displaying an Unsigned Integer’s Bits ---
// Function to print the binary representation of an unsigned integer
void displayBits(unsigned int value) {
    // Mask with a 1 bit in the most significant bit position
    unsigned int mask = 1 << (CHAR_BIT * sizeof(unsigned int) - 1);

    // Iterate over every bit
    for (int i = 0; i < CHAR_BIT * sizeof(unsigned int); ++i) {
        // Print '1' if the bit is set, otherwise '0'
        putchar(value & mask ? '1' : '0');
        value <<= 1; // Shift value left to check the next bit
        if ((i + 1) % 8 == 0) putchar(' '); // Add space every 8 bits for readability
    }
    putchar('\n');
}

void show_binary_demo() {
    printf("\n[Displaying Bits]\n");
    unsigned int num = 123;
    printf("Binary of %u: ", num);
    displayBits(num);
}

// --- 10.10.1 Defining Bit Fields ---
// Bit fields allow packing multiple variables into specific bits of a single int,
// saving memory and allowing fine control over storage.
struct BitCard {
    unsigned int face : 4;  // 4 bits for face value (0–15)
    unsigned int suit : 2;  // 2 bits for suit (0–3)
    unsigned int color : 1; // 1 bit for color (0 or 1)
};

void bitfield_card_demo() {
    struct BitCard card = {11, 2, 1};
    printf("\n[Bit Fields - Card]\n");
    // Prints each field demonstrating how bit fields are accessed like normal struct members
    printf("Face: %u, Suit: %u, Color: %u\n", card.face, card.suit, card.color);
}

// --- 10.10.3 Unnamed Bit Fields ---
// Unnamed bit fields are used for padding or alignment in structs
struct Example {
    unsigned int a : 13;    // 13 bits for 'a'
    unsigned int : 19;      // 19 bits of padding, not accessible
    unsigned int b : 4;     // 4 bits for 'b'
};

// Using zero-width unnamed bit field forces the next field to start at a new storage unit boundary
struct AlignedExample {
    unsigned int a : 13;
    unsigned int : 0;       // Forces alignment to next int boundary
    unsigned int b : 4;
};

void unnamed_bitfield_demo() {
    struct Example ex = {4095, 7};
    printf("\n[Unnamed Bit Fields]\n");
    // Show values of bit fields 'a' and 'b'
    printf("a = %u, b = %u\n", ex.a, ex.b);
}

// --- 10.11 Enumeration Constants ---
// Enumerations give names to integer constants, improving readability
enum Months { JAN = 1, FEB, MAR, APR, MAY }; // Auto-increment: FEB = 2, MAR = 3, etc.
enum Status { OK = 0, WARNING = 1, ERROR = 1 }; // Duplicate values allowed, but can be confusing

void enum_demo() {
    enum Months m = MAR;
    enum Status s = ERROR;
    printf("\n[Enumerations]\n");
    printf("Month: %d, Status: %d\n", m, s);
}

// --- 10.12 Anonymous Structures and Unions ---
// Anonymous structs/unions let you embed members directly without naming the nested type

struct Employee {
    int id;
    struct {
        char city[20];
        char country[20];
    }; // anonymous struct, so city and country can be accessed directly
};

struct Data {
    int type; // 0 = int, 1 = float
    union {
        int i;
        float f;
    }; // anonymous union, stores either int or float in same memory
};

void anonymous_demo() {
    printf("\n[Anonymous Struct/Union]\n");
    struct Employee e = {101, "Ankara", "Türkiye"};
    // Access anonymous struct members directly as if part of Employee
    printf("ID: %d, City: %s, Country: %s\n", e.id, e.city, e.country);

    struct Data d;
    d.type = 1;   // Set type to float
    d.f = 3.14f;  // Store float value
    if (d.type == 0)
        printf("Integer: %d\n", d.i);
    else
        printf("Float: %.2f\n", d.f);
}

// --- 10.13 Secure C Programming ---
// Demonstrates safe string input and use of enums to avoid invalid states
void secure_demo() {
    printf("\n[Secure Programming]\n");
    
    // Define fixed size buffer for name input
    char name[10];
    
    printf("Enter your name (max 9 chars): ");
    // Use fgets to avoid buffer overflow, read up to sizeof(name)-1 characters
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character left by fgets to clean up string
    name[strcspn(name, "\n")] = 0;
    
    printf("Hello, %s\n", name);

    // Simple integer array initialization example
    int arr[5];
    for (int i = 0; i < 5; ++i) arr[i] = i * 10;

    // Use enum for states instead of raw integers for better readability and safety
    enum { ON, OFF } state = ON;

    // Defensive check to catch invalid enum states (shouldn't happen here)
    if (state != ON && state != OFF) {
        printf("Invalid state!\n");
    }
}

int main() {
    bitwise_operations();      // Run bitwise operator examples
    show_binary_demo();        // Show binary representation of a number
    bitfield_card_demo();      // Demonstrate bit fields usage
    unnamed_bitfield_demo();   // Demonstrate unnamed bit fields and padding
    enum_demo();               // Demonstrate enumerations
    anonymous_demo();          // Demonstrate anonymous structs/unions
    secure_demo();             // Demonstrate safe C programming practices
    return 0;
}
