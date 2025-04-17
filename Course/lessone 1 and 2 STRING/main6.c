/**
 * Other Functions of the String-Handling Library Demo
 * 
 * This program demonstrates the use of two additional string-handling functions:
 * 
 * - strerror: Maps an integer error number into a full text string in a locale-specific manner.
 * - strlen: Returns the number of characters in a string, excluding the null terminator.
 */

 #include <stdio.h>
 #include <string.h>
 #include <errno.h>  // Required for strerror
 
 /**
  * Demonstrates the strerror function which maps an error number to a descriptive string.
  */
 void demonstrate_strerror() {
     printf("\n=== STRERROR FUNCTION DEMO ===\n");
     printf("strerror(errnum) returns a pointer to a string that describes the error number errnum.\n");
     
     int errnum = ENOENT;  // Error number for "No such file or directory"
     
     // Get the error string corresponding to ENOENT
     char *error_str = strerror(errnum);
     printf("Error %d: %s\n", errnum, error_str);
     
     printf("Explanation: strerror returns a human-readable string that describes the error\n");
     printf("             corresponding to the error number provided as the argument.\n");
 }
 
 /**
  * Demonstrates the strlen function which returns the length of a string excluding the null terminator.
  */
 void demonstrate_strlen() {
     printf("\n=== STRLEN FUNCTION DEMO ===\n");
     printf("strlen(str) returns the length of the string str, excluding the null terminator.\n");
     
     char str[] = "Hello, World!";
     
     // Get the length of the string
     size_t length = strlen(str);
     printf("The length of the string \"%s\" is: %zu\n", str, length);
     
     printf("Explanation: strlen returns the number of characters in the string str, not\n");
     printf("             including the null terminator at the end of the string.\n");
 }
 
 /**
  * Main function to demonstrate both strerror and strlen functions
  */
 int main() {
     printf("=================================================\n");
     printf("STRING-HANDLING LIBRARY - OTHER FUNCTIONS DEMO\n");
     printf("=================================================\n");
     printf("This program demonstrates the strerror and strlen functions from <string.h>.\n");
     
     // Demonstrate strerror and strlen functions
     demonstrate_strerror();
     demonstrate_strlen();
     
     printf("\n=================================================\n");
     printf("Program completed successfully.\n");
     return 0;
 }
 