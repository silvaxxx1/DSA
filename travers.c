// Operation on the array : 
// 1- Traversing the array :

// write a programm that peform the following operaion on array fromm the user
// 1- print the original array 
// 2- find the samllest and biggest elemnts 
// 3-find the average
// 4-find if the array contain duplicates 
// 5- write and number form the user digits

// Note : the array is just 1D



#include <stdio.h>

int main() {
    int arr[10], n;
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid size! The size should be between 1 and 10.\n");
        return 1;
    }

    // 1. Input and print the array
    for (int i = 0; i < n; i++) {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // 2. Find the smallest and biggest elements
    int smallest = arr[0], small_pos = 0;
    int biggest = arr[0], big_pos = 0;

    for (int i = 1; i < n; i++) {  // Start from 1 to avoid comparing the first element with itself
        if (arr[i] < smallest) {
            smallest = arr[i];
            small_pos = i;
        }
        if (arr[i] > biggest) {
            biggest = arr[i];
            big_pos = i;
        }
    }

    printf("\nSmallest element is %d at position %d", smallest, small_pos);
    printf("\nBiggest element is %d at position %d\n", biggest, big_pos);

    // 3. Calculate the average
    float avg = 0;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    avg /= n;
    printf("The average is %.2f\n", avg);

    // 4. Find duplicates
    int duplicate = 0;
    int dup_pos1 = -1, dup_pos2 = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                dup_pos1 = i;
                dup_pos2 = j;
                break;  // Found a duplicate, no need to check further
            }
        }
        if (duplicate) break;  // Stop outer loop if duplicate is found
    }

    if (duplicate) {
        printf("Found duplicate at positions %d and %d. The number is %d\n", dup_pos1, dup_pos2, arr[dup_pos1]);
    } else {
        printf("No duplicates found.\n");
    }

    // 5. Make a number from the digits
    int digits[10] = {0}, m, number = 0;
    printf("Enter the number of digits (max 10): ");
    scanf("%d", &m);

    if (m > 10 || m <= 0) {
        printf("Invalid number of digits! It should be between 1 and 10.\n");
        return 1;
    }

    printf("Enter the digits one by one:\n");
    for (int i = 0; i < m; i++) {
        printf("Digit[%d]: ", i);
        scanf("%d", &digits[i]);

        if (digits[i] < 0 || digits[i] > 9) {
            printf("Invalid digit! Only single digits (0-9) are allowed.\n");
            return 1;
        }
    }

    for (int i = 0; i < m; i++) {
        number = number * 10 + digits[i];
    }

    printf("\nThe constructed number is: %d\n", number);

    return 0;
}
