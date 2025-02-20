// Array operation : 
// 2- Insertaion :
//  inserting in the end of the array is quite simple , you just add +1 to the upper bound , so lets pass to more robust implemetaion 
// A- Insert element in unsorted array 
// b- Insert elemnt in sorted array

# include <stdio.h>


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
    
    int num , pos ;
    printf("input the number and position:");
    scanf("%d %d",&num , &pos);

    for (int i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];

    }

    arr[pos] = num ; 
    n++;

    printf("The array: after the inseration \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    

    // B- inserting a number in alredy sorted array
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    if (n >= 10 || n <= 0) {
        printf("Invalid size! The size should be between 1 and 9.\n");
        return 1;
    }

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the number to insert: ");
    scanf("%d", &num);

    // Find the correct position to insert `num`
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            break;
        }
    }

    // Shift elements to the right
    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = num; // Insert the number at the correct position
    n++; // Increase array size

    // Print the updated array
    printf("\nThe array after insertion of %d is:\n", num);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
    