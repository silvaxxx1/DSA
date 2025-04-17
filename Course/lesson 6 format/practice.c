/*********************************************************************
 * PRACTICAL FORMATTED I/O EXAMPLES IN C
 * 
 * This program shows practical real-world examples of formatted I/O
 * in C using printf and scanf.
 *********************************************************************/

 #include <stdio.h>

 int main() {
     printf("=== PRACTICAL FORMATTED I/O EXAMPLES ===\n\n");
 
     /*
      * EXAMPLE 1: Formatting a Table with Aligned Columns
      */
     printf("EXAMPLE 1: Formatted Table\n");
     printf("%-15s %10s %12s %8s\n", "Product", "Quantity", "Price", "Total");
     printf("%-15s %10s %12s %8s\n", "-------", "--------", "-----", "-----");
     printf("%-15s %10d %12.2f %8.2f\n", "Apple", 5, 0.99, 5 * 0.99);
     printf("%-15s %10d %12.2f %8.2f\n", "Orange Juice", 2, 3.49, 2 * 3.49);
     printf("%-15s %10d %12.2f %8.2f\n", "Bread", 1, 2.49, 1 * 2.49);
     printf("%-15s %10s %12s %8.2f\n\n", "", "", "TOTAL:", 5*0.99 + 2*3.49 + 2.49);
 
     /*
      * EXAMPLE 2: Formatting Financial Data
      */
     printf("EXAMPLE 2: Financial Report\n");
     double amount = 1234567.89;
     
     printf("Amount in different formats:\n");
     printf("Regular:     $%.2f\n", amount);
     printf("Accounting:  $%'13.2f\n", amount);  // Note: ' might not work on all systems
     printf("Scientific:  $%.2e\n", amount);
     printf("With commas: ");
     // Manually formatting with thousands separators (since %' isn't always supported)
     int millions = amount / 1000000;
     int thousands = (int)(amount / 1000) % 1000;
     double remainder = amount - (millions * 1000000 + thousands * 1000);
     printf("$%d,%03d,%.2f\n\n", millions, thousands, remainder);
 
     /*
      * EXAMPLE 3: Formatting Dates and Times
      */
     printf("EXAMPLE 3: Date and Time Formatting\n");
     int day = 17;
     int month = 4;
     int year = 2025;
     int hour = 14;
     int minute = 35;
     int second = 42;
     
     printf("Date formats:\n");
     printf("US format:      %02d/%02d/%04d\n", month, day, year);
     printf("ISO format:     %04d-%02d-%02d\n", year, month, day);
     printf("European:       %02d.%02d.%04d\n", day, month, year);
     printf("Time:           %02d:%02d:%02d\n", hour, minute, second);
     printf("Date and time:  %02d/%02d/%04d %02d:%02d:%02d\n\n", 
            month, day, year, hour, minute, second);
 
     /*
      * EXAMPLE 4: Progress Bar
      */
     printf("EXAMPLE 4: ASCII Progress Bar\n");
     int progress = 60; // 60% complete
     printf("Progress: [");
     for(int i = 0; i < 100; i += 5) {
         if(i < progress) {
             printf("=");
         } else if(i == progress) {
             printf(">");
         } else {
             printf(" ");
         }
     }
     printf("] %3d%%\n\n", progress);
 
     /*
      * EXAMPLE 5: Aligning Decimal Points in Floating Point Values
      */
     printf("EXAMPLE 5: Aligning Decimal Points\n");
     double values[] = {123.45, 67.8, 9.0, 0.12345};
     
     printf("Unaligned:           Aligned:\n");
     for(int i = 0; i < 4; i++) {
         printf("%-15.5f    %10.2f\n", values[i], values[i]);
     }
     printf("\n");
     
     /*
      * EXAMPLE 6: Parsing Input with scanf
      * (Commented to allow this program to run without input)
      */
     printf("EXAMPLE 6: Parsing Input with scanf\n");
     printf("/* Code is commented to run without user input */\n");
     /*
     // Credit card number input (format: XXXX-XXXX-XXXX-XXXX)
     char card[20];
     printf("Enter credit card number (XXXX-XXXX-XXXX-XXXX): ");
     scanf("%19s", card); // In real code, you'd validate the format
     
     // Phone number with area code (format: (XXX) XXX-XXXX)
     int areaCode, prefix, lineNum;
     printf("Enter phone number ((XXX) XXX-XXXX): ");
     scanf("(%d) %d-%d", &areaCode, &prefix, &lineNum);
     printf("Area code: %d, Prefix: %d, Line: %d\n", areaCode, prefix, lineNum);
     
     // Date with various separators
     int month2, day2, year2;
     printf("Enter date (MM/DD/YYYY or MM-DD-YYYY): ");
     scanf("%d%*[-/]%d%*[-/]%d", &month2, &day2, &year2);
     printf("Month: %d, Day: %d, Year: %d\n", month2, day2, year2);
     */
     
     return 0;
 }