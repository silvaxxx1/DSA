/**
 * Memory Functions Demo
 * 
 * This program demonstrates the use of various memory functions from the <string.h> library:
 * 
 * Memory Functions:
 * - memcpy: Copies a specified number of bytes from one object to another.
 * - memmove: Similar to memcpy, but ensures safe copying even when the memory regions overlap.
 * - memcmp: Compares the specified number of bytes of two objects.
 * - memchr: Searches for the first occurrence of a byte in a memory block.
 * - memset: Sets a specified number of bytes in a memory block to a given value.
 */

 #include <stdio.h>
 #include <string.h>
 
 /**
  * Demonstrates the memcpy function which copies a specified number of bytes from one
  * memory location to another.
  */
 void demonstrate_memcpy() {
     printf("\n=== MEMCPY FUNCTION DEMO ===\n");
     printf("memcpy(dest, src, n) copies n bytes from src to dest.\n");
     
     char src[] = "Hello, World!";
     char dest[50];
     
     // Copy first 5 bytes (characters) from src to dest
     memcpy(dest, src, 5);
     dest[5] = '\0';  // Null-terminate the string
     printf("After memcpy, dest contains: %s\n", dest);
     
     printf("Explanation: memcpy copies a specified number of bytes from src to dest.\n");
 }
 
 /**
  * Demonstrates the memmove function which safely copies a specified number of bytes
  * from one memory location to another, even if the memory regions overlap.
  */
 void demonstrate_memmove() {
     printf("\n=== MEMMOVE FUNCTION DEMO ===\n");
     printf("memmove(dest, src, n) safely copies n bytes from src to dest, even if they overlap.\n");
     
     char str[] = "Hello, World!";
     
     // Move the substring "World" (from index 7 to 12) to the beginning
     memmove(str, str + 7, 5);
     str[5] = '\0';  // Null-terminate the string
     printf("After memmove, str contains: %s\n", str);
     
     printf("Explanation: memmove ensures safe copying, even when the memory regions overlap.\n");
 }
 
 /**
  * Demonstrates the memcmp function which compares the specified number of bytes of two memory blocks.
  */
 void demonstrate_memcmp() {
     printf("\n=== MEMCMP FUNCTION DEMO ===\n");
     printf("memcmp(ptr1, ptr2, n) compares the first n bytes of ptr1 and ptr2.\n");
     
     char str1[] = "Hello";
     char str2[] = "Hello";
     int result = memcmp(str1, str2, 5);  // Compare first 5 bytes
     
     if (result == 0) {
         printf("str1 and str2 are identical.\n");
     } else if (result < 0) {
         printf("str1 is less than str2.\n");
     } else {
         printf("str1 is greater than str2.\n");
     }
     
     printf("Explanation: memcmp compares the first n bytes of two memory blocks and returns\n");
     printf("             0 if they are identical, a negative value if ptr1 < ptr2, and a positive\n");
     printf("             value if ptr1 > ptr2.\n");
 }
 
 /**
  * Demonstrates the memchr function which searches for the first occurrence of a byte in a memory block.
  */
 void demonstrate_memchr() {
     printf("\n=== MEMCHR FUNCTION DEMO ===\n");
     printf("memchr(ptr, value, n) searches for the first occurrence of value in the first n bytes of ptr.\n");
     
     char str[] = "Hello, World!";
     
     // Search for the first occurrence of the character 'o'
     char *result = memchr(str, 'o', 13);  // Search in first 13 bytes
     
     if (result != NULL) {
         printf("First occurrence of 'o' found at: %s\n", result);
     } else {
         printf("'o' not found in the string.\n");
     }
     
     printf("Explanation: memchr searches for the first occurrence of value in the memory block\n");
     printf("             and returns a pointer to it. If not found, returns NULL.\n");
 }
 
 /**
  * Demonstrates the memset function which sets a specified number of bytes in a memory block to a given value.
  */
 void demonstrate_memset() {
     printf("\n=== MEMSET FUNCTION DEMO ===\n");
     printf("memset(ptr, value, n) sets the first n bytes of ptr to the specified value.\n");
     
     char str[20] = "Hello, World!";
     
     // Set the first 5 bytes to 'A'
     memset(str, 'A', 5);
     str[5] = '\0';  // Null-terminate the string
     printf("After memset, str contains: %s\n", str);
     
     printf("Explanation: memset sets the first n bytes of ptr to the specified value.\n");
 }
 
 /**
  * Main function to demonstrate all memory functions
  */
 int main() {
     printf("=================================================\n");
     printf("MEMORY FUNCTIONS DEMO\n");
     printf("=================================================\n");
     printf("This program demonstrates various memory functions\n");
     printf("from the <string.h> library.\n");
     
     // Demonstrate memory functions
     demonstrate_memcpy();
     demonstrate_memmove();
     demonstrate_memcmp();
     demonstrate_memchr();
     demonstrate_memset();
     
     printf("\n=================================================\n");
     printf("Program completed successfully.\n");
     return 0;
 }
 