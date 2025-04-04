/**
 * String Search Functions Demo
 * 
 * This program demonstrates the use of various string search functions from the <string.h> library:
 * 
 * Search Functions:
 * - strchr: Searches for the first occurrence of a character in a string.
 * - strcspn: Finds the length of the initial part of the string that does not contain any characters from another string.
 * - strpbrk: Searches for the first occurrence of any character from a set of characters in the string.
 * - strrchr: Searches for the last occurrence of a character in the string.
 * - strspn: Finds the length of the initial part of the string that contains only characters from another string.
 * - strstr: Searches for the first occurrence of a substring in the string.
 * - strtok: Breaks the string into tokens separated by specified delimiters.
 */

 #include <stdio.h>
 #include <string.h>
 
 /**
  * Demonstrates the strchr function which searches for the first occurrence of a character
  * in a string.
  */
 void demonstrate_strchr() {
     printf("\n=== STRCHR FUNCTION DEMO ===\n");
     printf("strchr(str, c) returns a pointer to the first occurrence of character c in str.\n");
     
     char str[] = "Hello, World!";
     char *result = strchr(str, 'o'); // Find first occurrence of 'o'
     
     if (result != NULL) {
         printf("First occurrence of 'o' is at: %s\n", result);
     } else {
         printf("'o' not found in the string.\n");
     }
     
     printf("Explanation: strchr searches for the first occurrence of the given character\n");
     printf("             and returns a pointer to it. If the character is not found, it returns NULL.\n");
 }
 
 /**
  * Demonstrates the strcspn function which finds the length of the initial part of the string
  * that does not contain any characters from another string.
  */
 void demonstrate_strcspn() {
     printf("\n=== STRCSPN FUNCTION DEMO ===\n");
     printf("strcspn(str, reject) returns the length of the initial segment of str\n");
     printf("that does not contain any characters from reject.\n");
     
     char str[] = "abcdef";
     char reject[] = "dgh";
     
     size_t length = strcspn(str, reject); // Find length before any characters from "dgh"
     printf("Length of initial part of str that doesn't contain 'd', 'g', or 'h': %zu\n", length);
     
     printf("Explanation: strcspn returns the length of the segment of str\n");
     printf("             that doesn't contain any of the characters in reject.\n");
 }
 
 /**
  * Demonstrates the strpbrk function which searches for the first occurrence of any character
  * from a set of characters in the string.
  */
 void demonstrate_strpbrk() {
     printf("\n=== STRPBRK FUNCTION DEMO ===\n");
     printf("strpbrk(str, accept) returns a pointer to the first character in str\n");
     printf("that matches any character from accept.\n");
     
     char str[] = "abcdef";
     char accept[] = "dgh";
     
     char *result = strpbrk(str, accept); // Find first occurrence of any character from "dgh"
     
     if (result != NULL) {
         printf("First matching character: %c\n", *result);
     } else {
         printf("No characters from 'dgh' found in the string.\n");
     }
     
     printf("Explanation: strpbrk returns a pointer to the first matching character\n");
     printf("             from accept, or NULL if no matches are found.\n");
 }
 
 /**
  * Demonstrates the strrchr function which searches for the last occurrence of a character
  * in a string.
  */
 void demonstrate_strrchr() {
     printf("\n=== STRRCHR FUNCTION DEMO ===\n");
     printf("strrchr(str, c) returns a pointer to the last occurrence of character c in str.\n");
     
     char str[] = "Hello, World!";
     char *result = strrchr(str, 'o'); // Find last occurrence of 'o'
     
     if (result != NULL) {
         printf("Last occurrence of 'o' is at: %s\n", result);
     } else {
         printf("'o' not found in the string.\n");
     }
     
     printf("Explanation: strrchr searches for the last occurrence of the given character\n");
     printf("             and returns a pointer to it. If the character is not found, it returns NULL.\n");
 }
 
 /**
  * Demonstrates the strspn function which finds the length of the initial part of the string
  * that contains only characters from another string.
  */
 void demonstrate_strspn() {
     printf("\n=== STRSPN FUNCTION DEMO ===\n");
     printf("strspn(str, accept) returns the length of the initial segment of str\n");
     printf("that contains only characters from accept.\n");
     
     char str[] = "abcdef";
     char accept[] = "ab";
     
     size_t length = strspn(str, accept); // Find length before encountering a character not in "ab"
     printf("Length of initial part of str that only contains 'a' or 'b': %zu\n", length);
     
     printf("Explanation: strspn returns the length of the segment of str\n");
     printf("             that contains only characters from accept.\n");
 }
 
 /**
  * Demonstrates the strstr function which searches for the first occurrence of a substring
  * in a string.
  */
 void demonstrate_strstr() {
     printf("\n=== STRSTR FUNCTION DEMO ===\n");
     printf("strstr(str, substr) returns a pointer to the first occurrence of the substring\n");
     printf("substr in the string str.\n");
     
     char str[] = "Hello, World!";
     char substr[] = "World";
     
     char *result = strstr(str, substr); // Find first occurrence of "World"
     
     if (result != NULL) {
         printf("Found substring '%s' at: %s\n", substr, result);
     } else {
         printf("Substring '%s' not found.\n", substr);
     }
     
     printf("Explanation: strstr searches for the first occurrence of substr in str\n");
     printf("             and returns a pointer to it. If not found, returns NULL.\n");
 }
 
 /**
  * Demonstrates the strtok function which breaks a string into tokens separated by specified delimiters.
  */
 void demonstrate_strtok() {
     printf("\n=== STRTOK FUNCTION DEMO ===\n");
     printf("strtok(str, delim) breaks str into tokens separated by any character in delim.\n");
     
     char str[] = "Hello, World, How, Are, You";
     char delim[] = ", "; // Delimiters are comma and space
     
     char *token = strtok(str, delim); // First token
     
     while (token != NULL) {
         printf("Token: %s\n", token);
         token = strtok(NULL, delim); // Subsequent tokens
     }
     
     printf("Explanation: strtok splits str into tokens based on characters in delim.\n");
     printf("             The first call provides the string, and subsequent calls provide NULL\n");
     printf("             to continue tokenizing the same string.\n");
 }
 
 /**
  * Main function to demonstrate all string search functions
  */
 int main() {
     printf("=================================================\n");
     printf("STRING SEARCH FUNCTIONS DEMO\n");
     printf("=================================================\n");
     printf("This program demonstrates various search functions\n");
     printf("from the <string.h> library.\n");
     
     // Demonstrate string search functions
     demonstrate_strchr();
     demonstrate_strcspn();
     demonstrate_strpbrk();
     demonstrate_strrchr();
     demonstrate_strspn();
     demonstrate_strstr();
     demonstrate_strtok();
     
     printf("\n=================================================\n");
     printf("Program completed successfully.\n");
     return 0;
 }
 