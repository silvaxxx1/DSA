#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c, *ptr;
    int x = 10, y = 20, z = 30;
    double d, e, f;
    char s1[100], s2[100];

    // a) Convert c to uppercase and assign it back
    c = toupper(c);

    // b) Check if c is a digit using conditional operator
    printf("%c %s digit\n", c, isdigit(c) ? "is a" : "is not a");

    // c) Check if c is a control character
    printf("%c %s control character\n", c, iscntrl(c) ? "is a" : "is not a");

    // d) Read a line of text into s1 (do not use scanf)
    fgets(s1, sizeof(s1), stdin);

    // e) Print the line stored in s1 (do not use printf)
    puts(s1);

    // f) Assign ptr the location of the last occurrence of c in s1
    ptr = strrchr(s1, c);

    // g) Print the value of c (do not use printf)
    putchar(c);

    // h) Check if c is a letter
    printf("%c %s letter\n", c, isalpha(c) ? "is a" : "is not a");

    // i) Read a character into c from keyboard
    c = getchar();

    // j) Assign ptr to the first occurrence of s2 in s1
    ptr = strstr(s1, s2);

    // k) Check if c is a printable character
    printf("%c %s printing character\n", c, isprint(c) ? "is a" : "is not a");

    // l) Read three doubles from a string
    sscanf("1.27 10.3 9.432", "%lf %lf %lf", &d, &e, &f);

    // m) Copy s2 into s1
    strcpy(s1, s2);

    // n) Assign ptr to the first occurrence in s1 of any char from s2
    ptr = strpbrk(s1, s2);

    // o) Compare s1 and s2 and print result
    printf("Comparison result: %d\n", strcmp(s1, s2));

    // p) Assign ptr to the first occurrence of c in s1
    ptr = strchr(s1, c);

    // q) Use sprintf to store x, y, z into s1 with width 7
    sprintf(s1, "%7d%7d%7d", x, y, z);

    // r) Append 10 characters from s2 to s1
    strncat(s1, s2, 10);

    // s) Print the length of the string in s1
    printf("Length: %lu\n", strlen(s1));

    // t) Assign ptr to the first token in s2, using comma as delimiter
    ptr = strtok(s2, ",");

    return 0;
}
