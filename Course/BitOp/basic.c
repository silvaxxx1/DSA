#include <stdio.h>

int main() {
    // Declare two variables
    int a = 5;  // In binary: 0101
    int b = 3;  // In binary: 0011

    // 1. Bitwise AND (&)
    // Bitwise AND compares each bit of the operands and results in 1 only if both corresponding bits are 1.
    // 0101 (a)  
    // 0011 (b)
    // ----
    // 0001 (result)
    int and_result = a & b;
    printf("a & b = %d\n", and_result);  // Output: 1
    // Explanation: The only position where both bits are 1 is the last bit (2^0), so the result is 1.

    // 2. Bitwise OR (|)
    // Bitwise OR compares each bit of the operands and results in 1 if at least one of the corresponding bits is 1.
    // 0101 (a)  
    // 0011 (b)
    // ----
    // 0111 (result)
    int or_result = a | b;
    printf("a | b = %d\n", or_result);  // Output: 7
    // Explanation: The result has 1s wherever at least one of the bits of 'a' or 'b' is 1 (positions 2^2, 2^1, and 2^0).

    // 3. Bitwise XOR (^)
    // Bitwise XOR compares each bit of the operands and results in 1 if the bits are different (one is 0, the other is 1).
    // 0101 (a)  
    // 0011 (b)
    // ----
    // 0110 (result)
    int xor_result = a ^ b;
    printf("a ^ b = %d\n", xor_result);  // Output: 6
    // Explanation: XOR results in 1 where the bits of 'a' and 'b' differ. Here, the second and third bits are different.

    // 4. Bitwise NOT (~)
    // Bitwise NOT flips all the bits of the operand, converting 0s to 1s and 1s to 0s. This operation inverts the bits.
    // 0101 (a) in binary (5 in decimal)
    // ----
    // 1010 (flipped bits) => In two's complement, this represents -6.
    int not_result = ~a;
    printf("~a = %d\n", not_result);  // Output: -6
    // Explanation: The two's complement representation of -6 is achieved by flipping the bits of 'a' and adding 1.
    // ~a results in 1010 (in binary), which is -6 in decimal.

    // 5. Left Shift (<<)
    // Left shift moves the bits of the operand to the left by the specified number of positions (in this case, 1).
    // Each left shift multiplies the number by 2.
    // 0101 (a)  shifted left by 1
    // ----
    // 1010 (result) 
    // Explanation: Shifting left by one position means multiplying by 2, so 5 * 2 = 10.
    int left_shift_result = a << 1;  // Shift left by 1
    printf("a << 1 = %d\n", left_shift_result);  // Output: 10

    // 6. Right Shift (>>)
    // Right shift moves the bits of the operand to the right by the specified number of positions (in this case, 1).
    // Each right shift divides the number by 2.
    // 0101 (a) shifted right by 1
    // ----
    // 0010 (result)
    // Explanation: Shifting right by one position means dividing by 2 (integer division), so 5 / 2 = 2.
    int right_shift_result = a >> 1;  // Shift right by 1
    printf("a >> 1 = %d\n", right_shift_result);  // Output: 2

    return 0;
}
