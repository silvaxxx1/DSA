/*********************************************************************
 * COMPREHENSIVE GUIDE TO FORMATTED INPUT/OUTPUT IN C
 * 
 * This file demonstrates the various formatting capabilities
 * of printf() and scanf() functions in C programming.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     /******************************************
      * SECTION 1: INTRODUCTION TO STREAMS
      ******************************************/
     
     /* In C, input and output are performed with streams:
      * - Input operations: bytes flow into memory from devices (keyboard, disk, etc.)
      * - Output operations: bytes flow from memory to devices (screen, printer, etc.)
      * 
      * Three standard streams available:
      * - Standard input (stdin): connected to keyboard
      * - Standard output (stdout): connected to screen
      * - Standard error (stderr): connected to screen
      */
     
     printf("=== FORMATTED INPUT/OUTPUT IN C ===\n\n");
     
     /******************************************
      * SECTION 2: PRINTING INTEGERS
      ******************************************/
     
     printf("SECTION 2: PRINTING INTEGERS\n");
     
     /* Integer conversion specifiers:
      * %d, %i - signed decimal integer
      * %o     - unsigned octal integer
      * %u     - unsigned decimal integer
      * %x, %X - unsigned hexadecimal integer (lowercase/uppercase)
      * 
      * Modifiers:
      * h  - short
      * l  - long
      * ll - long long
      */
     
     int num = 455;
     
     printf("%d      - Decimal:                  %d\n", num, num);
     printf("%%i      - Integer (same as %%d):    %i\n", num, num);
     printf("%%-d     - Negative:                 %d\n", -num, -num);
     printf("%%o      - Octal:                    %o\n", num, num);
     printf("%%u      - Unsigned:                 %u\n", num, num);
     printf("%%x      - Hex (lowercase):          %x\n", num, num);
     printf("%%X      - Hex (uppercase):          %X\n", num, num);
     
     short shortNum = 32000;
     long longNum = 2000000000L;
     
     printf("%%hd     - Short:                    %hd\n", shortNum);
     printf("%%ld     - Long:                     %ld\n", longNum);
     printf("\n");
     
     /******************************************
      * SECTION 3: PRINTING FLOATING-POINT NUMBERS
      ******************************************/
     
     printf("SECTION 3: PRINTING FLOATING-POINT NUMBERS\n");
     
     /* Floating-point conversion specifiers:
      * %e, %E - exponential notation
      * %f, %F - fixed-point notation
      * %g, %G - uses %e/%E or %f depending on value magnitude
      *
      * Modifier:
      * L - long double
      */
     
     double floatNum = 1234567.89;
     
     printf("%%e      - Exponential (lowercase):  %e\n", floatNum);
     printf("%%E      - Exponential (uppercase):  %E\n", floatNum);
     printf("%%f      - Fixed-point:              %f\n", floatNum);
     printf("%%g      - General format (lower):   %g\n", floatNum);
     printf("%%G      - General format (upper):   %G\n", floatNum);
     printf("\n");
     
     /******************************************
      * SECTION 4: PRINTING STRINGS AND CHARACTERS
      ******************************************/
     
     printf("SECTION 4: PRINTING STRINGS AND CHARACTERS\n");
     
     /* String and character specifiers:
      * %c - character
      * %s - string (null-terminated)
      */
     
     char character = 'A';
     char string[] = "Hello, World!";
     const char *stringPtr = "Pointer to string";
     
     printf("%%c      - Character:                %c\n", character);
     printf("%%s      - String:                   %s\n", string);
     printf("%%s      - String pointer:           %s\n", stringPtr);
     printf("\n");
     
     /******************************************
      * SECTION 5: OTHER CONVERSION SPECIFIERS
      ******************************************/
     
     printf("SECTION 5: OTHER CONVERSION SPECIFIERS\n");
     
     /* Other specifiers:
      * %p - pointer value (implementation-defined format)
      * %% - percent sign
      */
     
     int value = 42;
     int *ptr = &value;
     
     printf("%%p      - Pointer:                  %p\n", ptr);
     printf("%%%%     - Percent sign:             %%\n");
     printf("\n");
     
     /******************************************
      * SECTION 6: FIELD WIDTHS AND PRECISION
      ******************************************/
     
     printf("SECTION 6: FIELD WIDTHS AND PRECISION\n");
     
     /* Field width: 
      * %Nd - Displays value in a field of width N (right-aligned)
      * 
      * Precision:
      * %.Nd - For integers: minimum number of digits
      * %.Nf - For floats: number of digits after decimal point
      * %.Ns - For strings: maximum number of characters
      * 
      * Combined:
      * %N.Mf - Field width N, precision M
      */
     
     // Field width examples
     printf("Field width of 4 for integers:\n");
     printf("%%4d:    |%4d|\n", 1);
     printf("%%4d:    |%4d|\n", 12);
     printf("%%4d:    |%4d|\n", 123);
     printf("%%4d:    |%4d|\n", 1234);
     printf("%%4d:    |%4d|\n", 12345);  // Exceeds width, prints in full
     
     // Precision examples
     printf("\nPrecision examples:\n");
     printf("%%.4d    - Integer precision:        |%.4d|\n", 73);     // Min 4 digits with zeros
     printf("%%.3f    - Float precision:          |%.3f|\n", 123.45678); // 3 digits after decimal
     printf("%%.5s    - String precision:         |%.5s|\n", "Hello World"); // First 5 chars only
     
     // Combined field width and precision
     printf("\nCombined field width and precision:\n");
     printf("%%8.2f   - Width 8, precision 2:     |%8.2f|\n", 123.456);
     printf("%%8.2f   - Width 8, precision 2:     |%8.2f|\n", 9876.54321);
     
     // Dynamic width and precision
     int width = 10;
     int precision = 3;
     printf("%%*.*f   - Dynamic width/precision:  |%*.*f|\n", width, precision, 123.456789);
     printf("\n");
     
     /******************************************
      * SECTION 7: FORMAT FLAGS
      ******************************************/
     
     printf("SECTION 7: FORMAT FLAGS\n");
     
     /* Format flags:
      * -  Left-align within field width
      * +  Force display of + for positive numbers
      * (space)  Insert space before positive values
      * #  Alternative form (0 prefix for octal, 0x for hex, force decimal point)
      * 0  Pad with leading zeros instead of spaces
      */
     
     // Left alignment flag (-)
     printf("%%-10s  - Left-aligned string:       |%-10s|\n", "Left");
     printf("%%10s   - Right-aligned string:      |%10s|\n", "Right");
     
     // Plus flag (+)
     printf("%%+d     - Positive with + sign:     |%+d|\n", 42);
     printf("%%+d     - Negative with sign:       |%+d|\n", -42);
     
     // Space flag
     printf("%% d     - Space flag (positive):    |% d|\n", 42);
     printf("%% d     - Space flag (negative):    |% d|\n", -42);
     
     // Hash flag (#)
     printf("%%#o     - Octal with prefix:        |%#o|\n", 42);
     printf("%%#x     - Hex with prefix:          |%#x|\n", 42);
     printf("%%#X     - Hex with prefix (upper):  |%#X|\n", 42);
     printf("%%#g     - Float with forced point:  |%#g|\n", 123.0);
     
     // Zero flag (0)
     printf("%%08d   - Zero-padded integer:      |%08d|\n", 123);
     printf("%%+08d  - Zero-padded with sign:    |%+08d|\n", 123);
     printf("\n");
     
     /******************************************
      * SECTION 8: ESCAPE SEQUENCES
      ******************************************/
     
     printf("SECTION 8: ESCAPE SEQUENCES\n");
     
     /* Common escape sequences:
      * \n - newline
      * \t - tab
      * \\ - backslash
      * \" - double quote
      * \' - single quote
      * \r - carriage return
      * \b - backspace
      * \a - alert (bell)
      */
     
     printf("Newline: line1\\nline2\nline1\nline2\n");
     printf("Tab: column1\\tcolumn2\ncolumn1\tcolumn2\n");
     printf("Backslash: \\\n");
     printf("Quotes: \"\'\n");
     printf("\n");
     
     /******************************************
      * SECTION 9: FORMATTED INPUT WITH SCANF
      ******************************************/
     
     printf("SECTION 9: FORMATTED INPUT WITH SCANF\n");
     
     /* scanf conversion specifiers:
      * Similar to printf, but reads values into variables
      * Must use pointers (addresses) of variables
      * 
      * Example: scanf("%d %f %s", &intVar, &floatVar, strVar);
      * Note: strVar is already a pointer, so & is not needed
      */
     
     /* Common scanf features:
      * %d, %i - read decimal integer
      * %o, %x - read octal, hex integers
      * %f, %e, %g - read floating point
      * %c - read character
      * %s - read string (stops at whitespace)
      * %[...] - scan set (read specified characters)
      * %[^...] - inverted scan set (read until specified characters)
      * %*... - assignment suppression (read but don't store)
      * %Ns - field width (read at most N characters)
      */
     
     /* Examples (commented out to make this a runnable demo):
     
     // Basic integer input
     int a;
     printf("Enter an integer: ");
     scanf("%d", &a);
     printf("You entered: %d\n", a);
     
     // Multiple values
     int day, month, year;
     printf("Enter date (dd-mm-yyyy): ");
     scanf("%d-%d-%d", &day, &month, &year);
     printf("Date: %d/%d/%d\n", day, month, year);
     
     // String input
     char name[50];
     printf("Enter your name: ");
     scanf("%s", name);  // Note: no & for arrays
     printf("Hello, %s!\n", name);
     
     // Character input
     char firstChar;
     printf("Enter first character: ");
     scanf(" %c", &firstChar);  // Space before %c to skip whitespace
     printf("First character: %c\n", firstChar);
     
     // Scan sets
     char vowels[20];
     printf("Enter some text (we'll extract vowels): ");
     scanf("%[aeiouAEIOU]", vowels);
     printf("Vowels found: %s\n", vowels);
     
     // Field width
     int firstTwo, rest;
     printf("Enter a number with at least 4 digits: ");
     scanf("%2d%d", &firstTwo, &rest);
     printf("First two digits: %d, Rest: %d\n", firstTwo, rest);
     
     // Assignment suppression
     int month2, day2, year2;
     printf("Enter date (mm/dd/yyyy): ");
     scanf("%d%*c%d%*c%d", &month2, &day2, &year2); // Ignore separators
     printf("Month: %d, Day: %d, Year: %d\n", month2, day2, year2);
     */
     
     printf("\nThis program demonstrates printf formatting capabilities.\n");
     printf("For scanf examples, remove the comments and compile again.\n");
     
     return 0;
 }