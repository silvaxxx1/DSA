#include <stdio.h>
#include <string.h>

/*
--------------------------------------------------------------------------------------
 C STRING SEARCH FUNCTIONS REFERENCE (from <string.h>)
--------------------------------------------------------------------------------------

1. char *strchr(const char *str, int c)
   → Finds the first occurrence of character 'c' in the string 'str'.

2. char *strrchr(const char *str, int c)
   → Finds the last occurrence of character 'c' in the string 'str'.

3. size_t strcspn(const char *str1, const char *str2)
   → Returns the number of characters in the beginning of 'str1'
     that are NOT in 'str2'.

4. size_t strspn(const char *str1, const char *str2)
   → Returns the number of characters in the beginning of 'str1'
     that ARE ONLY from 'str2'.

5. char *strpbrk(const char *str1, const char *str2)
   → Returns a pointer to the first character in 'str1'
     that matches ANY character in 'str2'.

6. char *strstr(const char *haystack, const char *needle)
   → Finds the first occurrence of substring 'needle' in 'haystack'.

7. char *strtok(char *str, const char *delim)
   → Breaks a string into tokens using delimiters from 'delim'.
   ⚠️ Modifies the original string by inserting '\0'.

--------------------------------------------------------------------------------------
*/

int main() {
    char sample[] = "hello, world! 1234";
    char vowels[] = "aeiou";
    char digits[] = "0123456789";
    char word[] = "world";

    printf("Original string: \"%s\"\n\n", sample);

    // 1. strchr – First occurrence of a character
    char *ptr1 = strchr(sample, 'o');
    if (ptr1)
        printf("strchr: First 'o' found at: \"%s\"\n", ptr1);

    // 2. strrchr – Last occurrence of a character
    char *ptr2 = strrchr(sample, 'o');
    if (ptr2)
        printf("strrchr: Last 'o' found at: \"%s\"\n", ptr2);

    // 3. strcspn – Count characters until any from another string appears
    size_t index = strcspn(sample, digits);
    printf("strcspn: First digit occurs at index: %zu\n", index);

    // 4. strspn – Count characters that ONLY belong to a set
    size_t span = strspn(sample, "helo, ");  // characters in beginning part
    printf("strspn: Initial characters only from \"helo, \": %zu\n", span);

    // 5. strpbrk – First match of any character from a set
    char *ptr3 = strpbrk(sample, vowels);
    if (ptr3)
        printf("strpbrk: First vowel found at: \"%s\"\n", ptr3);

    // 6. strstr – Find first occurrence of substring
    char *ptr4 = strstr(sample, word);
    if (ptr4)
        printf("strstr: Found \"%s\" in string at: \"%s\"\n", word, ptr4);

    // 7. strtok – Tokenize string using delimiters
    char tokStr[] = "apple,banana,orange";
    char *token = strtok(tokStr, ",");

    printf("\nstrtok: Tokens from \"apple,banana,orange\":\n");
    while (token != NULL) {
        printf(" - %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
