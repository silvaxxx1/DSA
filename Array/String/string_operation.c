// Some string operations in C
// 1- Length of a string 
// 2- Convert to uppercase 
// 3- Convert to lowercase

#include <stdio.h>

int main() {
    char str[100], upper_str[100], lower_str[100];
    int i = 0, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Find length
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        i++;
    }
    length = i;
    printf("\nLength of the string is: %d", length);

    // Convert to uppercase
    i = 0; // Reset i
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper_str[i] = str[i] - 32;
        } else {
            upper_str[i] = str[i];
        }
        i++;
    }
    upper_str[i] = '\0'; // Null terminate the string

    printf("\nThe string in upper case is: %s", upper_str);

// convert to lowercase
    i = 0; // Reset i
    while (str[i] != '\0' && str[i] != '\n') { // Ignore newline from fgets
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + 32;
        } else {
            lower_str[i] = str[i];
        }
        i++;
    }
    lower_str[i] = '\0'; // Null terminate the string

    printf("\nThe string in upper case is: %s\n", lower_str);

    return 0;
}
