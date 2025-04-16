#include <stdio.h>

int main() {
    // Initial value
    int c = 6;  // Binary: 0110
    // Bitwise AND assignment
    // 0110 & 0011 = 0010 => 2
    c &= 3;  
    printf("c &= 3: %d\n", c);  // Output: 2

    // Bitwise OR assignment
    // 0010 | 0010 = 0010 => remains 2
    c |= 2;  
    printf("c |= 2: %d\n", c);  // Output: 2

    // Bitwise XOR assignment
    // 0010 ^ 0001 = 0011 => 3
    c ^= 1;  
    printf("c ^= 1: %d\n", c);  // Output: 3

    // Bitwise Left Shift assignment
    // 0011 << 1 = 0110 => 6 (multiplies by 2)
    c <<= 1;
    printf("c <<= 1: %d\n", c);  // Output: 6

    // Bitwise Right Shift assignment
    // 0110 >> 2 = 0001 => 1 (integer divide by 4)
    c >>= 2;
    printf("c >>= 2: %d\n", c);  // Output: 1

    return 0;
}
