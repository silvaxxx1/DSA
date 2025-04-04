/**
 * String Conversion Functions Demo
 * 
 * This program demonstrates the standard string conversion functions from 
 * the <stdlib.h> library in C. These functions convert string representations
 * of numbers into their corresponding numeric values.
 * 
 * Functions demonstrated:
 * - strtod: Convert string to double
 * - strtol: Convert string to long integer
 * - strtoul: Convert string to unsigned long integer
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 /**
  * Demonstrates strtod function which converts a string to a double value
  * @param str The string to convert
  */
 void demonstrate_strtod(const char *str) {
     printf("\n=== STRTOD FUNCTION DEMO ===\n");
     printf("Input string: \"%s\"\n", str);
     
     char *remainder;
     double value = strtod(str, &remainder);
     
     printf("Converted value: %f\n", value);
     printf("Remainder of string: \"%s\"\n", remainder);
     printf("Explanation: strtod() converts a string to a double value.\n");
     printf("             It stops at the first character it cannot convert.\n");
     printf("             The remainder pointer points to the first unconverted character.\n");
 }
 
 /**
  * Demonstrates strtol function which converts a string to a long integer value
  * @param str The string to convert
  * @param base The numeric base to use (e.g., 10 for decimal, 16 for hexadecimal)
  */
 void demonstrate_strtol(const char *str, int base) {
     printf("\n=== STRTOL FUNCTION DEMO ===\n");
     printf("Input string: \"%s\"\n", str);
     printf("Base: %d %s\n", base, 
            base == 10 ? "(decimal)" : 
            base == 16 ? "(hexadecimal)" : 
            base == 8 ? "(octal)" : 
            base == 2 ? "(binary)" : 
            base == 0 ? "(auto-detect)" : "");
     
     char *remainder;
     long value = strtol(str, &remainder, base);
     
     printf("Converted value: %ld\n", value);
     printf("Remainder of string: \"%s\"\n", remainder);
     printf("Explanation: strtol() converts a string to a long integer.\n");
     printf("             The base parameter specifies the number base (10=decimal, 16=hex, etc.).\n");
     printf("             A base of 0 means the function auto-detects based on the string format.\n");
     printf("             (0x prefix for hex, 0 prefix for octal, otherwise decimal)\n");
 }
 
 /**
  * Demonstrates strtoul function which converts a string to an unsigned long integer value
  * @param str The string to convert
  * @param base The numeric base to use (e.g., 10 for decimal, 16 for hexadecimal)
  */
 void demonstrate_strtoul(const char *str, int base) {
     printf("\n=== STRTOUL FUNCTION DEMO ===\n");
     printf("Input string: \"%s\"\n", str);
     printf("Base: %d %s\n", base, 
            base == 10 ? "(decimal)" : 
            base == 16 ? "(hexadecimal)" : 
            base == 8 ? "(octal)" : 
            base == 2 ? "(binary)" : 
            base == 0 ? "(auto-detect)" : "");
     
     char *remainder;
     unsigned long value = strtoul(str, &remainder, base);
     
     printf("Converted value: %lu\n", value);
     printf("Remainder of string: \"%s\"\n", remainder);
     printf("Explanation: strtoul() converts a string to an unsigned long integer.\n");
     printf("             It works similarly to strtol() but for unsigned values.\n");
     printf("             This means it can handle larger positive numbers.\n");
 }
 
 /**
  * Main function to demonstrate all string conversion functions
  */
 int main() {
     printf("======================================\n");
     printf("STRING CONVERSION FUNCTIONS DEMO\n");
     printf("======================================\n");
     printf("This program demonstrates the string-to-number\n");
     printf("conversion functions from <stdlib.h>\n\n");
     
     // Demonstrate strtod with various inputs
     demonstrate_strtod("123.456");
     demonstrate_strtod("123.456 miles per hour");
     demonstrate_strtod("temperature is 98.6 degrees");
     
     // Demonstrate strtol with various inputs and bases
     demonstrate_strtol("123456", 10);           // Decimal number
     demonstrate_strtol("0x1A3F", 0);            // Hexadecimal with prefix (auto-detect)
     demonstrate_strtol("1A3F", 16);             // Hexadecimal without prefix
     demonstrate_strtol("0777", 0);              // Octal with prefix (auto-detect)
     demonstrate_strtol("777", 8);               // Octal without prefix
     demonstrate_strtol("1010101", 2);           // Binary number
     demonstrate_strtol("-123 followed by text", 10);  // Negative number with text
     
     // Demonstrate strtoul with various inputs and bases
     demonstrate_strtoul("4294967295", 10);      // Maximum unsigned 32-bit value
     demonstrate_strtoul("0xFFFFFFFF", 0);       // Hexadecimal maximum unsigned 32-bit value
     demonstrate_strtoul("DEADBEEF", 16);        // Hexadecimal without prefix
     demonstrate_strtoul("0777", 0);             // Octal with prefix (auto-detect)
     
     printf("\n======================================\n");
     printf("Program completed successfully.\n");
     return 0;
 }