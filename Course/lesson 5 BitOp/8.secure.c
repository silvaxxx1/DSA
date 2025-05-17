#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array 'name' with size 10
    // This means we can safely store up to 9 characters plus the null terminator '\0'
    char name[10];

    // Prompt the user to enter their name, limiting input to 9 characters
    printf("Enter your name (max 9 chars): ");

    // Use 'fgets' to safely read input from stdin
    // 'fgets' reads up to sizeof(name) - 1 characters to avoid buffer overflow
    // This prevents security issues like buffer overflow vulnerabilities
    fgets(name, sizeof(name), stdin);

    // 'fgets' may include the newline character '\n' if the input fits within the buffer
    // The following line removes the newline by replacing it with a null terminator '\0'
    // This avoids issues with string handling and printing
    name[strcspn(name, "\n")] = 0;

    // Print a greeting message using the sanitized name string
    printf("Hello, %s\n", name);

    // Declare an integer array 'arr' with 5 elements
    int arr[5];

    // Initialize the array with multiples of 10 using a loop
    // Demonstrates basic array usage and iteration
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Define an anonymous enum with two constants: ON = 0 and OFF = 1
    // Enums improve code readability and maintainability over using raw numbers
    enum { ON, OFF } state = ON;  // Initialize 'state' to ON (which is 0)

    // Sanity check: verify that 'state' holds a valid value (ON or OFF)
    // This helps prevent bugs if 'state' is ever assigned an unexpected value
    if (state != ON && state != OFF) {
        // This block would execute if 'state' has an invalid value
        // This should not happen here but is a good defensive programming practice
        printf("Invalid state!\n");
    }

    return 0;
}
