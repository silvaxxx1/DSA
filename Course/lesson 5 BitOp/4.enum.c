#include <stdio.h>

// Enum definition
// An enum is a user-defined type that consists of a set of named integer constants.
// Enums make code more readable by using meaningful names instead of raw numbers.
enum Weekday {
    Sunday = 0,    // Sunday is assigned the value 0 (default for first item if no value is specified)
    Monday,        // Monday gets the value 1
    Tuesday,       // Tuesday gets the value 2
    Wednesday,     // Wednesday gets the value 3
    Thursday,      // Thursday gets the value 4
    Friday,        // Friday gets the value 5
    Saturday       // Saturday gets the value 6
};

// Main function demonstrating enums
int main() {
    // Declare a variable 'today' of type 'enum Weekday'
    // 'enum Weekday' is the type, and today is assigned a specific value (Wednesday)
    enum Weekday today = Wednesday;  // 'today' is assigned the value 3 (Wednesday)
    
    // Printing the integer value associated with 'today'
    // This will print the integer value of Wednesday, which is 3
    printf("Today is day number: %d\n", today);

    // If we want to print the name of the day instead of the integer value,
    // we use a switch-case statement to match the enum value to the corresponding day name.
    switch (today) {
        case Sunday:    printf("Today is Sunday\n"); break;
        case Monday:    printf("Today is Monday\n"); break;
        case Tuesday:   printf("Today is Tuesday\n"); break;
        case Wednesday: printf("Today is Wednesday\n"); break;
        case Thursday:  printf("Today is Thursday\n"); break;
        case Friday:    printf("Today is Friday\n"); break;
        case Saturday:  printf("Today is Saturday\n"); break;
        default:        printf("Invalid day\n"); break;
    }

    // Example of using enums with a function:
    // A function that accepts an enum as a parameter and returns the name of the day.
    printDayName(today);

    // Example of using enum for error codes:
    enum ErrorCode {
        SUCCESS = 0,         // Operation was successful
        ERROR_NOT_FOUND = 404, // Resource not found
        ERROR_BAD_REQUEST = 400, // Invalid request
        ERROR_INTERNAL = 500   // Internal server error
    };

    enum ErrorCode code = ERROR_NOT_FOUND;
    if (code == ERROR_NOT_FOUND) {
        printf("Error: Resource not found. Error code: %d\n", code);
    }

    return 0;
}

// Function to print the name of a day based on enum value
void printDayName(enum Weekday day) {
    // Switch-case is used here to map enum values to human-readable names.
    switch (day) {
        case Sunday:    printf("The day is Sunday\n"); break;
        case Monday:    printf("The day is Monday\n"); break;
        case Tuesday:   printf("The day is Tuesday\n"); break;
        case Wednesday: printf("The day is Wednesday\n"); break;
        case Thursday:  printf("The day is Thursday\n"); break;
        case Friday:    printf("The day is Friday\n"); break;
        case Saturday:  printf("The day is Saturday\n"); break;
        default:        printf("Invalid day\n"); break;
    }
}
