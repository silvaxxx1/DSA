#include <stdio.h>
#include <string.h>

int main() {
    char destination[50];
    char source[] = "Hello, World!";
    char source2[] = "Hi, there!";
    char source3[] = "everyone!";
    char destination2[50], destination3[50], destination4[50];

    // 1. strcpy: Copy string to destination
    strcpy(destination, source);
    printf("After strcpy: %s\n", destination);  // Output: "Hello, World!"

    // 2. strncpy: Copy first 5 characters from source
    strncpy(destination2, source, 5);
    destination2[5] = '\0';  // Ensure null terminator is added manually
    printf("After strncpy: %s\n", destination2);  // Output: "Hello"

    // 3. strcat: Concatenate strings
    strcpy(destination3, "Hi, ");
    strcat(destination3, source2);
    printf("After strcat: %s\n", destination3);  // Output: "Hi, Hi, there!"

    // 4. strncat: Concatenate first 3 characters from source3
    strcpy(destination4, "Hi, ");
    strncat(destination4, source3, 3);  // Append "eve"
    printf("After strncat: %s\n", destination4);  // Output: "Hi, eve"

    // 5. strcmp: Compare two strings (case-sensitive)
    if (strcmp(source, source2) == 0) {
        printf("source and source2 are equal.\n");
    } else {
        printf("source and source2 are not equal.\n");  // This will be printed
    }

    // 6. strncmp: Compare first 5 characters of two strings
    if (strncmp(source, source2, 5) == 0) {
        printf("First 5 characters of source and source2 are equal.\n");
    } else {
        printf("First 5 characters of source and source2 are not equal.\n");  // This will be printed
    }

    return 0;
}
