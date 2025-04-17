/**
 * Standard Input/Output Library Functions Demo
 * 
 * This program demonstrates several standard I/O functions from the <stdio.h> library:
 * - fgets: Read a line of text from a stream
 * - putchar: Output a single character
 * - getchar: Input a single character
 * - puts: Output a string followed by a newline
 * - sprintf: Write formatted output to a string
 * - sscanf: Read formatted input from a string
 *
 * These functions are fundamental for handling input and output in C programs.
 */

 #include <stdio.h>
 #include <string.h>
 
 /**
  * Demonstrates the fgets function which reads a line from a stream
  */
 void demonstrate_fgets() {
     printf("\n=== FGETS FUNCTION DEMO ===\n");
     printf("fgets(str, size, stream) reads characters from a stream into a string\n");
     printf("Enter a line of text: ");
     
     char input[100];
     fgets(input, sizeof(input), stdin);
     
     printf("You entered: %s", input); // Note: fgets keeps the newline character
     printf("Note: fgets preserves the newline character '\\n' in the string\n");
     printf("Input length (including newline): %lu\n", strlen(input));
     printf("Explanation: fgets reads up to size-1 characters or until a newline or EOF.\n");
     printf("             It adds a null terminator '\\0' at the end of the string.\n");
     printf("             If a newline is read, it is included in the string.\n");
     
     // Clear input buffer
     int c;
     while ((c = getchar()) != '\n' && c != EOF) {}
 }
 
 /**
  * Demonstrates the putchar function which outputs a single character
  */
 void demonstrate_putchar() {
     printf("\n=== PUTCHAR FUNCTION DEMO ===\n");
     printf("putchar(c) outputs a single character\n");
     
     printf("Printing the word \"Hello\" character by character: ");
     putchar('H');
     putchar('e');
     putchar('l');
     putchar('l');
     putchar('o');
     putchar('\n');
     
     printf("Explanation: putchar outputs a single character to stdout and\n");
     printf("             returns the character written as an unsigned char\n");
     printf("             cast to an int, or EOF if an error occurs.\n");
 }
 
 /**
  * Demonstrates the getchar function which inputs a single character
  */
 void demonstrate_getchar() {
     printf("\n=== GETCHAR FUNCTION DEMO ===\n");
     printf("getchar() inputs a single character\n");
     printf("Enter a single character: ");
     
     int c = getchar();
     
     printf("You entered: '%c' (ASCII value: %d)\n", c, c);
     printf("Explanation: getchar reads a single character from stdin and\n");
     printf("             returns it as an int, or EOF if end-of-file is encountered.\n");
     
     // Clear input buffer
     while ((c = getchar()) != '\n' && c != EOF) {}
 }
 
 /**
  * Demonstrates the puts function which outputs a string followed by a newline
  */
 void demonstrate_puts() {
     printf("\n=== PUTS FUNCTION DEMO ===\n");
     printf("puts(str) outputs a string followed by a newline\n");
     
     char *message = "This is a test message";
     
     printf("Using puts to display a message:\n");
     puts(message);
     
     printf("Explanation: puts writes a string to stdout followed by a newline.\n");
     printf("             Unlike printf, puts always adds a newline at the end.\n");
 }
 
 /**
  * Demonstrates the sprintf function which writes formatted output to a string
  */
 void demonstrate_sprintf() {
     printf("\n=== SPRINTF FUNCTION DEMO ===\n");
     printf("sprintf(str, format, ...) writes formatted output to a string\n");
     
     char buffer[100];
     int id = 12345;
     float price = 19.99;
     char *product = "Widget";
     
     sprintf(buffer, "Product: %s, ID: %d, Price: $%.2f", product, id, price);
     
     printf("After sprintf, buffer contains:\n%s\n", buffer);
     printf("Explanation: sprintf works like printf but writes to a string instead of stdout.\n");
     printf("             This is useful for creating formatted strings for later use.\n");
 }
 
 /**
  * Demonstrates the sscanf function which reads formatted input from a string
  */
 void demonstrate_sscanf() {
     printf("\n=== SSCANF FUNCTION DEMO ===\n");
     printf("sscanf(str, format, ...) reads formatted input from a string\n");
     
     char *data = "John Smith 35 72.5";
     char firstName[20], lastName[20];
     int age;
     float weight;
     
     sscanf(data, "%s %s %d %f", firstName, lastName, &age, &weight);
     
     printf("Data parsed from string:\n");
     printf("First Name: %s\n", firstName);
     printf("Last Name: %s\n", lastName);
     printf("Age: %d\n", age);
     printf("Weight: %.1f\n", weight);
     printf("Explanation: sscanf works like scanf but reads from a string instead of stdin.\n");
     printf("             This is useful for parsing data from predefined strings.\n");
 }
 
 /**
  * Main function to demonstrate all standard I/O functions
  */
 int main() {
     printf("============================================\n");
     printf("STANDARD INPUT/OUTPUT FUNCTIONS DEMO\n");
     printf("============================================\n");
     printf("This program demonstrates various standard\n");
     printf("I/O functions from <stdio.h>\n");
     
     // Demonstrate each function
     demonstrate_puts();    // Start with puts as it's simple
     demonstrate_putchar(); // Then demonstrate character output
     demonstrate_getchar(); // Then demonstrate character input
     demonstrate_fgets();   // Then demonstrate string input
     demonstrate_sprintf(); // Then demonstrate formatted string output
     demonstrate_sscanf();  // Finally demonstrate formatted string input
     
     printf("\n============================================\n");
     printf("Program completed successfully.\n");
     return 0;
 }