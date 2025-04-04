/**
 * Character Classification and Case Conversion Functions Demo
 * 
 * This program demonstrates all standard character classification and case conversion
 * functions from the <ctype.h> library in C. It allows users to input any character
 * and see the results of applying each function to their input.
 * 
 * These functions are essential for character processing, input validation,
 * and text manipulation in C programming.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 /**
  * Analyzes and displays information about a character using all <ctype.h> functions
  * 
  * @param c The character to analyze (passed as int as per C standard)
  */
 void print_character_info(int c) {
     printf("\n=== CHARACTER ANALYSIS RESULTS ===\n");
     printf("Character '%c' (ASCII %d):\n\n", c, c);
     
     /* ----- ALPHANUMERIC CLASSIFICATION ----- */
     printf("-- ALPHANUMERIC CLASSIFICATION --\n");
     
     // isblank: Checks for blank characters (space and horizontal tab only)
     printf("isblank: %s\n", isblank(c) ? "true" : "false");
     printf("   → Returns true if character is a space ' ' or horizontal tab '\\t'\n");
     
     // isdigit: Checks for decimal digits (0-9)
     printf("isdigit: %s\n", isdigit(c) ? "true" : "false");
     printf("   → Returns true if character is a digit (0-9)\n");
     
     // isalpha: Checks for alphabetic characters (a-z, A-Z)
     printf("isalpha: %s\n", isalpha(c) ? "true" : "false");
     printf("   → Returns true if character is a letter (a-z or A-Z)\n");
     
     // isalnum: Checks for alphanumeric characters (a-z, A-Z, 0-9)
     printf("isalnum: %s\n", isalnum(c) ? "true" : "false");
     printf("   → Returns true if character is a letter or digit\n");
     
     // isxdigit: Checks for hexadecimal digits (0-9, a-f, A-F)
     printf("isxdigit: %s\n", isxdigit(c) ? "true" : "false");
     printf("   → Returns true if character is a hexadecimal digit (0-9, a-f, or A-F)\n\n");
     
     /* ----- CASE CLASSIFICATION AND CONVERSION ----- */
     printf("-- CASE CLASSIFICATION AND CONVERSION --\n");
     
     // islower: Checks for lowercase letters (a-z)
     printf("islower: %s\n", islower(c) ? "true" : "false");
     printf("   → Returns true if character is a lowercase letter (a-z)\n");
     
     // isupper: Checks for uppercase letters (A-Z)
     printf("isupper: %s\n", isupper(c) ? "true" : "false");
     printf("   → Returns true if character is an uppercase letter (A-Z)\n");
     
     // tolower: Converts character to lowercase if it's an uppercase letter
     printf("tolower: '%c'\n", tolower(c));
     printf("   → Returns lowercase version (if uppercase letter) or unchanged character\n");
     
     // toupper: Converts character to uppercase if it's a lowercase letter
     printf("toupper: '%c'\n", toupper(c));
     printf("   → Returns uppercase version (if lowercase letter) or unchanged character\n\n");
     
     /* ----- SPECIAL CHARACTER CLASSIFICATION ----- */
     printf("-- SPECIAL CHARACTER CLASSIFICATION --\n");
     
     // isspace: Checks for whitespace characters
     printf("isspace: %s\n", isspace(c) ? "true" : "false");
     printf("   → Returns true if character is whitespace (space, tab, newline, etc.)\n");
     
     // iscntrl: Checks for control characters
     printf("iscntrl: %s\n", iscntrl(c) ? "true" : "false");
     printf("   → Returns true if character is a control character (ASCII 0-31 or 127)\n");
     
     // ispunct: Checks for punctuation characters
     printf("ispunct: %s\n", ispunct(c) ? "true" : "false");
     printf("   → Returns true if character is printable but not space, letter, or digit\n");
     
     // isprint: Checks for printable characters (including space)
     printf("isprint: %s\n", isprint(c) ? "true" : "false");
     printf("   → Returns true if character is printable (ASCII 32-126)\n");
     
     // isgraph: Checks for printable characters except space
     printf("isgraph: %s\n", isgraph(c) ? "true" : "false");
     printf("   → Returns true if character is printable and not a space (ASCII 33-126)\n");
     
     printf("\n=================================\n");
 }
 
 /**
  * Main function to accept user input and analyze the character
  */
 int main() {
     char test_char;
     
     printf("======================================\n");
     printf("CHARACTER CLASSIFICATION FUNCTION DEMO\n");
     printf("======================================\n");
     printf("This program demonstrates all character\n");
     printf("classification functions from <ctype.h>\n\n");
     
     printf("Enter a character to analyze: ");
     scanf("%c", &test_char);
     
     // Call the analysis function with the user's input
     print_character_info(test_char);
     
     printf("\nProgram completed successfully.\n");
     return 0;
 }