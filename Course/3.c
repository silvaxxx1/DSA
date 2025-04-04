#include <stdio.h>
#include <ctype.h>

void analyze_character_type(int c) {
    printf("Character '%c' (ASCII %d):\n", c, c);
    printf("isspace: %s\n", isspace(c) ? "true" : "false");  // Checks if c is whitespace
    printf("iscntrl: %s\n", iscntrl(c) ? "true" : "false");  // Checks if c is a control character
    printf("ispunct: %s\n", ispunct(c) ? "true" : "false");  // Checks if c is punctuation
    printf("isprint: %s\n", isprint(c) ? "true" : "false");  // Checks if c is printable
    printf("isgraph: %s\n", isgraph(c) ? "true" : "false");  // Checks if c is printable excluding space
}

int main() {
    char test_char;
    printf("Enter a character to analyze: ");
    scanf("%c", &test_char);
    analyze_character_type(test_char);
    return 0;
}