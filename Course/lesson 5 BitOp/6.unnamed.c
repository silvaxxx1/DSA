#include <stdio.h>

// ---------------------------------------------
// Structure: NoPadding
// Purpose  : Demonstrates tightly packed bit fields
// ---------------------------------------------
struct NoPadding {
    unsigned int a : 4;  // 4 bits for field 'a' (e.g., values 0–15)
    unsigned int b : 4;  // 4 bits for field 'b' → packed into the same byte as 'a'
    unsigned int c : 8;  // 8 bits (1 byte) for field 'c'
    unsigned int d : 8;  // 8 bits (1 byte) for field 'd'
    // Total: 4 + 4 + 8 + 8 = 24 bits = 3 bytes (usually fits tightly unless alignment forces 4 bytes)
};

// ---------------------------------------------
// Structure: WithPadding
// Purpose  : Demonstrates use of unnamed bit fields to enforce alignment
// ---------------------------------------------
struct WithPadding {
    unsigned int a : 4;    // 4 bits for field 'a'
    unsigned int   : 4;    // unnamed 4-bit field — forces next field to start on a new byte boundary
    unsigned int b : 4;    // 4 bits for field 'b' (in next byte)
    unsigned int c : 8;    // 8 bits (1 byte) for field 'c'
    unsigned int d : 8;    // 8 bits (1 byte) for field 'd'
    // Due to forced alignment, this structure may require more memory (e.g., 4–5 bytes or more)
};

int main() {
    // Print the actual size (in bytes) of each structure
    // sizeof tells how much memory the compiler has allocated for the struct
    printf("Size without padding: %zu bytes\n", sizeof(struct NoPadding));
    printf("Size with padding   : %zu bytes\n", sizeof(struct WithPadding));
    return 0;
}
