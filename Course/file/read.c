// File: 5_using_feof.c
#include <stdio.h>

int main() {
    FILE *fp = fopen("wnb.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char ch;

    while (!feof(fp)) {
        ch = fgetc(fp);  // Get a character from file
        putchar(ch);     // Display the character
    }


    fclose(fp);
    return 0;
}
