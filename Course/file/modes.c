// File: 8_file_modes.c
#include <stdio.h>

int main() {
    // File open modes:
    // "r" – read
    // "w" – write
    // "a" – append
    // "r+" – read and write
    // "w+" – write and read (overwrites)
    // "a+" – append and read


    FILE *fp;

    fp = fopen("wnb.txt", "a"); // open for appending
    if (fp != NULL) {
        fprintf(fp, "My name is Yamin\n");
        fclose(fp);
    }

    return 0;
}
