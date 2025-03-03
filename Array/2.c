// Write a program that reads an array of 100
//integers. Display all the pairs of elements whose
//sum is 50.

# include<stdio.h>

# define SIZE 100

int main(){


int arr[SIZE] ; 


 // Input elements for the first array
 printf("Enter elements for the array:\n");
 for (int i = 0; i < SIZE; i++) {
     printf("Element[%d]: ", i);
     scanf("%d", &arr[i]);
 }

for (int i=0;i<SIZE - 1;i++){
    for (int j=i + 1; j<SIZE ; j++){
        if (arr[i] + arr[j] == 50){
            printf("(%d , %d)\n",arr[i] , arr[j]);
        }
    }
}
    return 0;
}