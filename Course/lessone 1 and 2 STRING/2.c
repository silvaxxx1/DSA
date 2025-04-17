#include <stdio.h>
#include <ctype.h>

void analyze_case(int c) {
    printf("Character '%c' (ASCII %d):\n", c, c);
    printf("islower: %s\n", islower(c) ? "true" : "false");  // Checks if c is lowercase
    printf("isupper: %s\n", isupper(c) ? "true" : "false");  // Checks if c is uppercase
    printf("tolower: '%c'\n", tolower(c));                  // Converts c to lowercase
    printf("toupper: '%c'\n", toupper(c));                  // Converts c to uppercase
}

int main() {
    char test_char;
    printf("Enter a character to analyze: ");
    scanf("%c", &test_char);
    analyze_case(test_char);
    return 0;
}