
#include <stdio.h>

int main() {
    // binary: 00000000 00000000 00000000 00101010
    // decimal: 42                        
    // 1. bit (0-indexed)                  

    

    // 2. bit (0-indexed)                  
    unsigned int num = 42;
    // 5. bit (0-indexed)
    unsigned int mask = 1 << 5;

    if ((num & mask) == mask && (num & ~mask) == 0) {
        printf("5. bit is set!\n");
    } else {
        printf("5. bit is not set.\n");
    }

    return 0;
}
