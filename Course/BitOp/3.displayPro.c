#include <stdio.h>
#include <limits.h>  // For CHAR_BIT constant

// Function to display the binary representation of any integer (signed or unsigned)
void displayBits(void *value, size_t size) {
    // Create a pointer to the value to interpret it as an unsigned char array (byte-by-byte)
    unsigned char *ptr = (unsigned char *) value;
    
    // Loop through each byte of the integer (size gives the number of bytes)
    for (size_t byte = 0; byte < size; ++byte) {
        unsigned char mask = 1 << (CHAR_BIT * sizeof(unsigned char) - 1); // Mask to check each bit in the byte

        // Loop through each bit in the byte (8 bits per byte)
        for (int bit = 0; bit < CHAR_BIT; ++bit) {
            // Use bitwise AND to check if the current bit is 1 or 0
            putchar(ptr[byte] & mask ? '1' : '0');

            // Shift the mask to the right to check the next bit
            mask >>= 1;
        }

        // Print space after each byte for readability
        putchar(' ');
    }
    putchar('\n');
}

int main() {
    unsigned int u_num = 123;     // Example unsigned integer (positive value)
    int num = -123;               // Example signed integer (negative value)

    // Display binary representation of unsigned int
    printf("Binary representation of unsigned int %u:\n", u_num);
    displayBits(&u_num, sizeof(u_num));

    // Display binary representation of signed int
    printf("Binary representation of signed int %d:\n", num);
    displayBits(&num, sizeof(num));

    return 0;
}
// This code demonstrates how to display the binary representation of both signed and unsigned integers.
// The `displayBits` function takes a pointer to the value and its size in bytes, allowing it to handle any integer type.
// The main function shows how to call this function for both unsigned and signed integers, providing a clear output of their binary forms.
// The output will show the binary representation of the numbers, with each byte separated by a space for clarity.
// The code uses bitwise operations to check each bit of the integer and prints '1' or '0' accordingly.
// The `CHAR_BIT` constant is used to determine the number of bits in a byte, ensuring compatibility across different platforms.
// The code is designed to be portable and works with any integer type, making it a versatile tool for bit manipulation and display.
