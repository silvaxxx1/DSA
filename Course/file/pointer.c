#include <stdio.h>

int main() {
    // Step 1: Write some sample content into data.txt
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Failed to create file.\n");
        return 1;
    }

    // Writing structured data (ID Name Balance)
    fprintf(fp, "1001 Alice 2000.00\n");
    fprintf(fp, "1002 Bob -150.50\n");
    fprintf(fp, "1003 Carol 500.00\n");

    fclose(fp);  // Close after writing

    // Step 2: Open the file for reading
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Failed to open file for reading.\n");
        return 1;
    }

    // Move the pointer to the end of the file
    fseek(fp, 0, SEEK_END);  // Offset 0 from the end
    long size = ftell(fp);   // Get file size in bytes

    printf("File size: %ld bytes\n\n", size);

    // Reset file pointer to the beginning using rewind()
    rewind(fp);  // Equivalent to fseek(fp, 0, SEEK_SET)

    // Step 3: Read and print contents from the beginning
    int id;
    char name[30];
    float balance;

    printf("Reading file after rewind:\n");
    printf("----------------------------\n");

    // Read structured records from the file
    while (fscanf(fp, "%d %s %f", &id, name, &balance) == 3) {
        printf("ID: %d, Name: %s, Balance: %.2f\n", id, name, balance);
    }

    fclose(fp);  // Always close the file when done

    return 0;
}
