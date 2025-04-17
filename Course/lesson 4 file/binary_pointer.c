#include <stdio.h>
#include <stdlib.h>

// Define a simple structure to store in binary file
typedef struct {
    int id;
    char name[20];
    float balance;
} Account;

int main() {
    FILE *fp;

    // Step 1: Create and write some Account records to binary file
    Account accounts[3] = {
        {1001, "Alice", 1500.50},
        {1002, "Bob", -200.75},
        {1003, "Carol", 3050.00}
    };

    fp = fopen("accounts.dat", "wb");  // Open in binary write mode
    if (!fp) {
        perror("Failed to open file for writing");
        return 1;
    }

    // Write entire array to file
    fwrite(accounts, sizeof(Account), 3, fp);
    fclose(fp);  // Done writing

    // Step 2: Open file for binary reading
    fp = fopen("accounts.dat", "rb");
    if (!fp) {
        perror("Failed to open file for reading");
        return 1;
    }

    printf("File opened. Pointer at position: %ld bytes\n", ftell(fp));

    // Step 3: Move pointer to second record
    fseek(fp, sizeof(Account), SEEK_SET);  // Skip 1 record
    printf("Pointer moved to second record. Current position: %ld bytes\n", ftell(fp));

    // Step 4: Read second record
    Account second;
    fread(&second, sizeof(Account), 1, fp);
    printf("Second record: ID=%d, Name=%s, Balance=%.2f\n", second.id, second.name, second.balance);

    // Step 5: Go back to beginning and read all records
    rewind(fp);
    printf("\nAll records in file:\n----------------------\n");
    Account temp;
    while (fread(&temp, sizeof(Account), 1, fp)) {
        printf("ID: %d, Name: %s, Balance: %.2f\n", temp.id, temp.name, temp.balance);
    }

    fclose(fp);
    return 0;
}
