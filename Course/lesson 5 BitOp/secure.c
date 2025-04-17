// --- FILE 8: secure_c.c ---

#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array 'name' to hold the user's name (with a size of 10).
    // We can store a maximum of 9 characters, plus the null terminator.
    char name[10];

    // Prompt the user to enter their name, limiting input to 9 characters.
    printf("Enter your name (max 9 chars): ");
    
    // Use 'fgets' to securely read user input. 'fgets' ensures we don't overflow the buffer
    // by reading a maximum of 'sizeof(name) - 1' characters, leaving space for the null terminator.
    fgets(name, sizeof(name), stdin);
    
    // 'fgets' retains the newline character if the user presses Enter, so we remove it manually.
    // 'strcspn' finds the position of the newline and replaces it with '\0' (null terminator).
    name[strcspn(name, "\n")] = 0;
    
    // Print a greeting message with the user's name.
    printf("Hello, %s\n", name);

    // Declare an array 'arr' of integers with 5 elements.
    int arr[5];
    
    // Fill the array with multiples of 10 (0, 10, 20, 30, 40).
    for (int i = 0; i < 5; ++i) arr[i] = i * 10;

    // Declare an enum with two states: ON and OFF.
    // An anonymous enum is used here, and its constants are implicitly assigned values 0 (ON) and 1 (OFF).
    enum { ON, OFF } state = ON;  // Initialize 'state' to ON (0).
    
    // Check if the 'state' is neither ON nor OFF. This is a sanity check to ensure 'state' is valid.
    // In this case, 'state' can only be ON (0) or OFF (1), so this check would normally never trigger.
    if (state != ON && state != OFF) {
        // This would print if an invalid state is encountered, which shouldn't happen with the current enum.
        printf("Invalid state!\n");
    }

    return 0;
}
