#include <stdio.h>      // For printf and putchar
#include <limits.h>     // For CHAR_BIT constant

// Function to display the binary representation of an unsigned int
void displayBits(unsigned int value) {
    // Step 1: Create a bitmask with a 1 in the leftmost bit position
    // Example for 32-bit int: 1 << 31 => 10000000 00000000 00000000 00000000
    unsigned int mask = 1 << (CHAR_BIT * sizeof(unsigned int) - 1);

    // Step 2: Loop through each bit position (e.g., 32 times for a 32-bit int)
    for (int i = 0; i < CHAR_BIT * sizeof(unsigned int); ++i) {
        // Use bitwise AND to check if the current bit is 1 or 0
        // If the result of (value & mask) is non-zero, the bit is 1
        // Otherwise, it's 0
        putchar(value & mask ? '1' : '0');

        // Shift value one bit to the left to move to the next bit
        value <<= 1;

        // Add a space after every 8 bits for better readability (byte grouping)
        if ((i + 1) % 8 == 0) putchar(' ');
    }

    // Print a newline at the end
    putchar('\n');
}


int main() {
    unsigned int num = 123;
    displayBits(num);
    return 0;
}