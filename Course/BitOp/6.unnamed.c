#include <stdio.h>

struct NoPadding {
    unsigned int a : 4;
    unsigned int b : 4;
    unsigned int c : 8;
    unsigned int d : 8;
};

struct WithPadding {
    unsigned int a : 4;
    unsigned int   : 4;  // force alignment
    unsigned int b : 4;
    unsigned int c : 8;
    unsigned int d : 8;
};

int main() {
    printf("Size without padding: %zu bytes\n", sizeof(struct NoPadding));
    printf("Size with padding   : %zu bytes\n", sizeof(struct WithPadding));
    return 0;
}
