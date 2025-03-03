/*
 * This program processes the marks of 20 students in 5 subjects.
 * The marks are stored in a 2D array: MARKS[20][5].
 * 
 * The program performs the following tasks:
 * 
 * (a) Computes the average marks obtained in each subject.
 * (b) Computes the average marks obtained by each student.
 * (c) Counts the number of students who have an average score below 50.
 * (d) Displays the marks obtained by every student.
 */

# define SUBJECT 3
# define STUDENT 3
#include <stdio.h>
int main() {

// make it smaller for testing
int MARKS[3][3];

// input the mark in 2d array
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("Enter mark for student %d in subject %d: ", i+1, j+1);
        scanf("%d", &MARKS[i][j]);
    }
}

// show the mark in 2d array
printf("The marks are:\n");
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d\t", MARKS[i][j]);
    }
    printf("\n");
}

printf("\nthe averge of each subject:\n");
// a- average of each subject 
for (int j=0;j< SUBJECT ; j++){
    int sum = 0 ;
    for (int i=0;i< STUDENT;i++){
        sum += MARKS[i][j];

    }
    float average = sum / STUDENT;
    printf("Subject %d : %.2f\n", j+1 , average);
}

printf("\nthe averge of each student:\n");
int below_50_counter = 0 ;
//b-average of the each student
for (int i=0;i< STUDENT ; i++){
    int sum = 0 ;
    for (int j=0;j< SUBJECT;j++){
        sum += MARKS[i][j];
    }
    float average = sum / SUBJECT;
    printf("Student %d: %.2f\n", i+1 , average);
    if (average < 50){
        below_50_counter++;
    }

}

printf("\nThe number of studens below 50:%d\n student",below_50_counter);


return 0;
}
