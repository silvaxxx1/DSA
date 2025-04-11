#include <stdio.h>

int main() {
    // Step 1: Write to the file
    FILE *fp = fopen("new.txt", "w");  // Open in write mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write sample data (ID Name Balance) to the file
    fprintf(fp, "1001 Alice 2000.00\n");
    fprintf(fp, "1002 Bob -150.50\n");
    fprintf(fp, "1003 Carol 500.00\n");
    fprintf(fp, "1004 Dave 300.75\n");

    // Close file after writing
    fclose(fp);
    printf("Data written to 'data.txt' successfully.\n\n");

    // Step 2: Read from the file
    fp = fopen("new.txt", "r");  // Open in read mode
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    int id;
    char name[30];
    float balance;

    printf("Reading from 'data.txt':\n");
    printf("--------------------------\n");

    // Read and display each record
    while (fscanf(fp, "%d %s %f", &id, name, &balance) == 3) {
        printf("ID: %d, Name: %s, Balance: %.2f\n", id, name, balance);
    }

    // Close the file after reading
    fclose(fp);

    return 0;
}
