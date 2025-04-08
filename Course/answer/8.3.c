#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[50] = "jack", s2[50] = "jill", s3[50];

    // a) Prints: "Jack"
    printf("%c%s\n", toupper(s1[0]), &s1[1]);

    // b) Copies s2 into s3 and prints: "jill"
    printf("%s\n", strcpy(s3, s2));

    // c) Builds sentence: "jack and jill"
    printf("%s\n", strcat(strcat(strcpy(s3, s1), " and "), s2));

    // d) Prints total length of s1 and s2: 4 + 4 = 8
    printf("%zu\n", strlen(s1) + strlen(s2));  // Correct format: %zu for size_t

    // e) s3 = "jack and jill" => length = 13 (includes space)
    printf("%zu\n", strlen(s3));

    return 0;
}
