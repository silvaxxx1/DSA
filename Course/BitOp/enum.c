// --- FILE: enum_example.c ---

#include <stdio.h>

// Enum definition
// 'enum' is a user-defined type that consists of a set of named integer constants.
enum Weekday {
    Sunday,    // Sunday is assigned the value 0 (default starting value for an enum)
    Monday,    // Monday is assigned the value 1
    Tuesday,   // Tuesday is assigned the value 2
    Wednesday, // Wednesday is assigned the value 3
    Thursday,  // Thursday is assigned the value 4
    Friday,    // Friday is assigned the value 5
    Saturday   // Saturday is assigned the value 6
};

int main() {
    // Declare a variable 'today' of type 'enum Weekday'
    enum Weekday today = Wednesday;  // 'today' is assigned the value 3 (Wednesday)

    // Print the value associated with 'today'
    // This will print the integer value of 'Wednesday', which is 3
    printf("Today is day number: %d\n", today);

    // If we want to print the name of the day instead of the integer, we can use a switch-case
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

    return 0;
}
