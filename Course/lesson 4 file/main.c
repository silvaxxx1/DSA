#include <stdio.h> 

int main() {
    FILE *ptr = fopen("yamin.txt", "w+");

    if (ptr == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Write to the file
    fprintf(ptr, "It looks like you have a C program that attempts to write data to a file and then read it back. However, there is an issue in the code. You are writing to the file, but in the reading step, you are trying to open. This mismatch will cause the program to fail when it attempts to read from a file that doesn't exist.");

    // Move the file pointer back to the beginning to read the file
    fseek(ptr, 0, SEEK_SET);

    // Read and display the content
    char ch; 
    while ((ch = fgetc(ptr)) != EOF) {
        putchar(ch);  // Display the character
    }

    // Close the file after reading and writing
    fclose(ptr);
    
    return 0;
}
