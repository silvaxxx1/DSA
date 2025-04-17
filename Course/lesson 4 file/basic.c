#include <stdio.h>  // Needed for FILE and file functions

int main() {
    // FILE is a special structure defined in stdio.h
    // It holds information about the file being accessed
    // A pointer to a FILE structure is used to access files

    FILE *filePtr;  // Declare a FILE pointer (not a file itself)

    // Right now, filePtr doesn't point to any file.
    // It's just declared and uninitialized.

    // Let's open a file and make filePtr point to it
    filePtr = fopen("example.txt", "w"); // Open file for writing

    // fopen() returns a FILE* (pointer to FILE) or NULL if opening fails
    if (filePtr == NULL) {
        // If file opening fails, display error
        printf("Error opening the file.\n");
        return 1; // Exit with error code
    }

    // If file was opened successfully
    printf("File opened successfully using a FILE pointer.\n");

    // Let's write something to the file
    fprintf(filePtr, "This is written using a FILE pointer in C.\n");

    // After done, close the file
    fclose(filePtr);

    // FILE pointer is no longer valid after closing
    printf("File closed successfully.\n");

    return 0;
}
