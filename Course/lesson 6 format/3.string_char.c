/*********************************************************************
 * STRING AND CHARACTER FORMATTING IN C
 * 
 * This program demonstrates how to format and display strings and
 * characters using printf in C.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     printf("=== STRING AND CHARACTER FORMATTING EXAMPLES ===\n\n");
     
     char character = 'A';
     char string[] = "Hello, World!";
     const char *stringPtr = "Pointer to string";
     
     /* Basic String and Character Formatting */
     printf("Basic Format Specifiers:\n");
     printf("%%c - Character:                %c\n", character);
     printf("%%s - String:                   %s\n", string);
     printf("%%s - String pointer:           %s\n\n", stringPtr);
     
     /* Field Width with Strings and Characters */
     printf("Field Width Examples:\n");
     printf("%%10c - Character (width 10):   |%10c|\n", character);
     printf("%%10s - String (width 10):      |%10s|\n", "Short");
     printf("%%20s - String (width 20):      |%20s|\n", "Longer string");
     printf("%%5s  - String (width too small):|%5s|\n\n", "This is longer than 5");
     
     /* Left Alignment */
     printf("Left Alignment Examples:\n");
     printf("%%-10c - Character left-aligned: |%-10c|\n", character);
     printf("%%-10s - String left-aligned:    |%-10s|\n", "Left");
     printf("%%-20s - String left-aligned:    |%-20s|\n\n", "Left aligned string");
     
     /* String Precision */
     printf("String Precision Examples:\n");
     printf("%%.5s  - Print first 5 chars:    |%.5s|\n", "Hello, World!");
     printf("%%10.5s - Width 10, 5 chars:     |%10.5s|\n", "Hello, World!");
     printf("%%-10.5s - Left align, 5 chars:  |%-10.5s|\n\n", "Hello, World!");
     
     /* Special Characters and Escape Sequences */
     printf("Escape Sequences in Strings:\n");
     printf("Newline: \"Hello\\nWorld\" prints as:\nHello\nWorld\n");
     printf("Tab: \"Column1\\tColumn2\" prints as:\nColumn1\tColumn2\n");
     printf("Quote marks: \\\" and \\\' print as: \" and '\n");
     printf("Backslash: \\\\ prints as: \\\n");
     
     return 0;
 }