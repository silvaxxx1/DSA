/*********************************************************************
 * INTEGER FORMATTING IN C
 * 
 * This program demonstrates various ways to format and display integers 
 * using printf in C.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     printf("=== INTEGER FORMATTING EXAMPLES ===\n\n");
     
     int num = 455;
     
     /* Basic Integer Formatting */
     printf("Basic Integer Format Specifiers:\n");
     printf("%%d - Decimal:                  %d\n", num);
     printf("%%i - Integer (same as %%d):    %i\n", num);
     printf("%%o - Octal:                    %o\n", num);
     printf("%%u - Unsigned:                 %u\n", num);
     printf("%%x - Hex (lowercase):          %x\n", num);
     printf("%%X - Hex (uppercase):          %X\n", num);
     printf("Negative number (%%d):          %d\n\n", -num);
     
     /* Integer Size Modifiers */
     short shortNum = 32000;
     long longNum = 2000000000L;
     
     printf("Integer Size Modifiers:\n");
     printf("%%hd - Short:                   %hd\n", shortNum);
     printf("%%ld - Long:                    %ld\n\n", longNum);
     
     /* Field Width */
     printf("Field Width Examples:\n");
     printf("%%4d  - Width 4:                |%4d|\n", 1);
     printf("%%4d  - Width 4:                |%4d|\n", 12);
     printf("%%4d  - Width 4:                |%4d|\n", 123);
     printf("%%4d  - Width 4:                |%4d|\n", 1234);
     printf("%%4d  - Width 4 (exceeds):      |%4d|\n\n", 12345);
     
     /* Integer Precision */
     printf("Integer Precision Examples:\n");
     printf("%%.4d - Precision 4:            |%.4d|\n", 73);
     printf("%%.6d - Precision 6:            |%.6d|\n\n", 73);
     
     /* Format Flags with Integers */
     printf("Format Flags with Integers:\n");
     printf("%%+d  - Plus flag:              |%+d|\n", 42);
     printf("%% d  - Space flag:             |% d|\n", 42);
     printf("%%#o  - Hash flag (octal):      |%#o|\n", 42);
     printf("%%#x  - Hash flag (hex):        |%#x|\n", 42);
     printf("%%08d - Zero padding:           |%08d|\n", 123);
     printf("%%-8d - Left alignment:         |%-8d|\n", 123);
     
     return 0;
 }