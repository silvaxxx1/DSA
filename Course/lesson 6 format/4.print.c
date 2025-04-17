/*********************************************************************
 * OTHER PRINTF FEATURES IN C
 * 
 * This program demonstrates additional printf features including
 * pointers, format flags, and special formatting tricks.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     printf("=== OTHER PRINTF FEATURES ===\n\n");
     
     /* Pointer Formatting */
     int value = 42;
     int *ptr = &value;
     
     printf("Pointer Formatting:\n");
     printf("%%p - Pointer value:            %p\n", ptr);
     printf("%%p - Address of variable:      %p\n\n", &value);
     
     /* The Percent Sign */
     printf("Printing a Percent Sign:\n");
     printf("%%%%    - Percent sign:         %%\n\n");
     
     /* Combined Format Flags */
     printf("Combined Format Flags:\n");
     printf("%%+08.2f - Plus, zero-pad, width 8, 2 decimals: |%+08.2f|\n", 123.45);
     printf("%%#8.4x  - Hash, width 8, 4 digits hex:         |%#8.4x|\n", 255);
     printf("%%-+8d   - Left-align, always show sign:        |%-+8d|\n\n", 42);
     
     /* Dynamic Field Width and Precision */
     int width = 12;
     int precision = 3;
     
     printf("Dynamic Width and Precision:\n");
     printf("%%*d    - Dynamic width:        |%*d|\n", width, 123);
     printf("%%*.*f  - Dynamic width & prec: |%*.*f|\n\n", width, precision, 123.456789);
     
     /* Special Uses */
     printf("Special Uses:\n");
     printf("Right-aligned columns:\n");
     printf("%10s %10s %10s\n", "Column 1", "Column 2", "Column 3");
     printf("%10d %10d %10d\n", 123, 456, 789);
     printf("%10.2f %10.2f %10.2f\n\n", 123.45, 678.9, 456.789);
     
     printf("Left-aligned columns:\n");
     printf("%-10s %-10s %-10s\n", "Column 1", "Column 2", "Column 3");
     printf("%-10d %-10d %-10d\n", 123, 456, 789);
     printf("%-10.2f %-10.2f %-10.2f\n", 123.45, 678.9, 456.789);
     
     return 0;
 }