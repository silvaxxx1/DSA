#include <stdio.h>
#include <string.h>

int main() {
    // a) strncpy does not null-terminate if source < size
    char s[10];
    strncpy(s, "hello", 5);
    s[5] = '\0';  // Fix: null-terminate manually
    printf("%s\n", s);

    // b) Error: 'a' is char, not string
    // printf("%s", 'a'); // ❌ WRONG
    printf("%s\n", "a"); // ✅ FIX

    // c) "Welcome Home" is 13 characters including '\0'
    // char s[12]; // ❌ TOO SMALL
    char s2[13]; // ✅ Correct
    strcpy(s2, "Welcome Home");

    // d) strcmp returns 0 when strings are equal
    char string1[] = "hello", string2[] = "hello";
    if (strcmp(string1, string2) == 0) { // ✅ Compare for equality
        puts("The strings are equal");
    }

    return 0;
}


