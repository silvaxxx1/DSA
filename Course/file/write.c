// File: 6_using_fprintf.c
#include <stdio.h>

int main() {
    FILE *fp = fopen("wnb.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(fp, "1001 Alice 2000.00\n");
    fprintf(fp, "1002 Bob -150.50\n");
    fprintf(fp, "1003 Carol 500.00\n");

    fclose(fp);
    printf("Data written to file using fprintf.\n");

    return 0;
}
