/*********************************************************************
 * FLOATING-POINT FORMATTING IN C
 * 
 * This program demonstrates how to format and display floating-point 
 * numbers using printf in C.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     printf("=== FLOATING-POINT FORMATTING EXAMPLES ===\n\n");
     
     double num = 1234567.89;
     double smallNum = 0.0000123;
     double integerLikeNum = 1234.0;
     
     /* Basic Floating-Point Format Specifiers */
     printf("Basic Floating-Point Format Specifiers:\n");
     printf("%%e - Exponential (lowercase):  %e\n", num);
     printf("%%E - Exponential (uppercase):  %E\n", num);
     printf("%%f - Fixed-point:              %f\n", num);
     printf("%%g - General format (lower):   %g\n", num);
     printf("%%G - General format (upper):   %G\n\n", num);
     
     /* How Different Values are Formatted */
     printf("Different Values with %%g Format:\n");
     printf("Large number (%%g):             %g\n", num);
     printf("Small number (%%g):             %g\n", smallNum);
     printf("Integer-like (%%g):             %g\n\n", integerLikeNum);
     
     /* Precision Control */
     printf("Precision Control Examples:\n");
     printf("%%.2f - 2 decimal places:       %.2f\n", 123.456789);
     printf("%%.5f - 5 decimal places:       %.5f\n", 123.456789);
     printf("%%.1e - 1 decimal place (exp):  %.1e\n", 123.456789);
     printf("%%.3g - 3 significant digits:   %.3g\n\n", 123.456789);
     
     /* Field Width and Precision */
     printf("Field Width and Precision Combined:\n");
     printf("%%10.2f - Width 10, 2 decimals: |%10.2f|\n", 123.456);
     printf("%%10.2e - Width 10, 2 decimals: |%10.2e|\n", 123.456);
     printf("%%10.4g - Width 10, 4 sig digs: |%10.4g|\n\n", 123.456);
     
     /* Format Flags with Floating Point */
     printf("Format Flags with Floating Point:\n");
     printf("%%+f    - Plus flag:            |%+f|\n", 123.45);
     printf("%% f    - Space flag:           |% f|\n", 123.45);
     printf("%%#g    - Hash flag:            |%#g|\n", 123.0);
     printf("%%010.2f - Zero padding:        |%010.2f|\n", 123.45);
     printf("%%-10.2f - Left alignment:      |%-10.2f|\n", 123.45);
     
     return 0;
 }