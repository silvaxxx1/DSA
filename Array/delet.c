// Array Operation : 
// 3- Delete : 
// 1- Deleting from the end of the array is quite simple, we just subtract from the upper bound. 
// 2- Delete an element from the middle of the array. 
// 3- Delete an element from the middle of the array (sorted array).

#include <stdio.h>

int main() {
    int arr[10], n, pos, num;

    // Get the size of the array
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    // Validate the size
    if (n > 10 || n <= 0) {
        printf("Invalid size! The size should be between 1 and 10.\n");
        return 1;
    }

    // 1. Input and print the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // 1- Deleting from the end of the array
    n--;
    printf("The new array after deleting the last element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // 2- Delete an element from the middle of the array
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("The array after deleting an element from the middle:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }

    // 3- Delete an element from a sorted array
    printf("Enter the number to delete from the sorted array: ");
    scanf("%d", &num);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break; // Assuming the array is sorted, stop after deleting the first occurrence
        }
    }

    if (found) {
        printf("The array after deleting an element from the sorted array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
