// Array Operation: 
// 4- Merge: 
// 1- Merge two unsorted arrays into a single array.

#include <stdio.h>

int main() {
    int arr1[10], arr2[10], mergedArr[20];
    int n1, n2, n;

    // Get the size of the first array
    printf("Enter the size of the first array (max 10): ");
    scanf("%d", &n1);

    // Get the size of the second array
    printf("Enter the size of the second array (max 10): ");
    scanf("%d", &n2);

    // Validate the sizes
    if (n1 > 10 || n1 <= 0 || n2 > 10 || n2 <= 0) {
        printf("Invalid size! The size should be between 1 and 10.\n");
        return 1;
    }

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays
    n = n1 + n2;
    int index = 0;

    // Copy elements from arr1
    for (int i = 0; i < n1; i++) {
        mergedArr[index++] = arr1[i];
    }

    // Copy elements from arr2
    for (int i = 0; i < n2; i++) {
        mergedArr[index++] = arr2[i];
    }

    // Print the merged (unsorted) array
    printf("\nThe merged array (unsorted):\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
