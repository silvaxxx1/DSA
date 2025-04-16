#include <stdio.h>
#include <limits.h>  // For CHAR_BIT, which defines the number of bits in a byte (usually 8)

// -------------------------------------------------------------
// Function: displayBits
// Purpose : To print the binary (bit-level) representation of any integer
// Arguments:
//   - value: a pointer to the integer (can be any type, signed or unsigned)
//   - size : the size of the data type (in bytes) so the function knows how many bytes to read
// -------------------------------------------------------------
void displayBits(void *value, size_t size) {
    // Cast the generic void pointer to an unsigned char pointer.
    // This allows us to access the value byte-by-byte.
    unsigned char *ptr = (unsigned char *) value;

    // Loop through each byte of the value.
    // We go from byte 0 to byte (size - 1)
    for (size_t byte = 0; byte < size; ++byte) {
        
        // Create a mask to check each bit in the byte, starting from the most significant bit (MSB)
        // CHAR_BIT is usually 8, so this creates a mask like 10000000 (in binary)
        unsigned char mask = 1 << (CHAR_BIT - 1);

        // Now check each bit in this byte
        for (int bit = 0; bit < CHAR_BIT; ++bit) {

            // If the current bit is set (1), print '1', otherwise print '0'
            putchar(ptr[byte] & mask ? '1' : '0');

            // Move the mask one bit to the right
            mask >>= 1;
        }

        // Print a space after each byte for easier readability
        putchar(' ');
    }

    // Newline after printing all bits
    putchar('\n');
}

int main() {
    // Declare an unsigned integer with a positive value
    unsigned int u_num = 123;

    // Declare a signed integer with a negative value
    int num = -123;

    // ------------------ Output: Unsigned Integer ------------------
    printf("Binary representation of unsigned int %u:\n", u_num);

    // Pass the address of u_num and its size to the displayBits function
    displayBits(&u_num, sizeof(u_num));

    // ------------------ Output: Signed Integer --------------------
    printf("Binary representation of signed int %d:\n", num);

    // Pass the address of num and its size to the displayBits function
    // This will show how negative numbers are stored using two's complement
    displayBits(&num, sizeof(num));

    return 0;
}
