#include <stdio.h>
#include <string.h>

int main() {
    char correct_password[] = "password 123"; // predefined password
    char entered_password[50];  // buffer to store entered password
    int attempts = 3;  // number of attempts

    printf("Enter the password: \n");

    // Loop for 3 attempts
    for (int i = 0; i < attempts; i++) {
        // Get user input
        fgets(entered_password, sizeof(entered_password), stdin);
        
        // Remove newline character if it's present
        entered_password[strcspn(entered_password, "\n")] = '\0';

        // Compare the entered password with the correct one
        if (strcmp(entered_password, correct_password) == 0) {
            printf("Password correct! Access granted.\n");
            return 0; // Exit the program if the password is correct
        } else {
            printf("Incorrect password. You have %d attempts left.\n", attempts - i - 1);
        }
    }

    printf("You have exceeded the maximum number of attempts.\n");
    return 0;
}
