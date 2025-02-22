// Array Operation: 
// 4- Merge: 
// 2- Merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main() {
    int arr1[10], arr2[10], mergedArr[20];
    int n1, n2, n;

    // Get the size of the first array
    printf("Enter the size of the first sorted array (max 10): ");
    scanf("%d", &n1);

    // Get the size of the second array
    printf("Enter the size of the second sorted array (max 10): ");
    scanf("%d", &n2);

    // Validate the sizes
    if (n1 > 10 || n1 <= 0 || n2 > 10 || n2 <= 0) {
        printf("Invalid size! The size should be between 1 and 10.\n");
        return 1;
    }

    // Input elements for the first array
    printf("Enter %d sorted elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d sorted elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    n = n1 + n2;
    int first_index = 0, second_index = 0, index = 0;

    while (first_index < n1 && second_index < n2) {
        if (arr1[first_index] < arr2[second_index]) {
            mergedArr[index++] = arr1[first_index++];
        } else {
            mergedArr[index++] = arr2[second_index++];
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (first_index < n1) {
        mergedArr[index++] = arr1[first_index++];
    }

    // Copy remaining elements from arr2 (if any)
    while (second_index < n2) {
        mergedArr[index++] = arr2[second_index++];
    }

    // Print the merged sorted array
    printf("\nThe merged sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
