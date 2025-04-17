#include <stdio.h>
#include <string.h>

/*
--------------------------------------------------------------------------------------
 C MEMORY FUNCTIONS REFERENCE (from <string.h>)
--------------------------------------------------------------------------------------

1. void *memcpy(void *dest, const void *src, size_t n)
   → Copies 'n' bytes from 'src' to 'dest'. ⚠️ Do not use if memory overlaps.

2. void *memmove(void *dest, const void *src, size_t n)
   → Safe version of memcpy. Handles overlapping memory regions correctly.

3. int memcmp(const void *s1, const void *s2, size_t n)
   → Compares first 'n' bytes of 's1' and 's2'. Returns 0 if equal.

4. void *memchr(const void *str, int c, size_t n)
   → Searches for first occurrence of byte 'c' in first 'n' bytes of 'str'.

5. void *memset(void *str, int c, size_t n)
   → Sets first 'n' bytes of memory block 'str' to byte value 'c'.

--------------------------------------------------------------------------------------
*/

int main() {
    // 1. memcpy – copy bytes
    char src1[] = "Hello, memcpy!";
    char dest1[20];
    memcpy(dest1, src1, strlen(src1) + 1); // +1 to include null terminator
    printf("memcpy: dest1 = \"%s\"\n", dest1);

    // 2. memmove – safe copy with overlap
    char overlap[] = "123456789";
    // Let's move part of the array into overlapping area
    memmove(overlap + 2, overlap, 5); // move "12345" to start at index 2
    printf("memmove: overlap = \"%s\"\n", overlap);
    // Note: content becomes "121234589"

    // 3. memcmp – compare memory blocks
    char a[] = "Apple";
    char b[] = "Appla";
    int result = memcmp(a, b, 5);
    if (result == 0)
        printf("memcmp: Blocks are equal.\n");
    else if (result < 0)
        printf("memcmp: Block 'a' is less than 'b'.\n");
    else
        printf("memcmp: Block 'a' is greater than 'b'.\n");

    // 4. memchr – search for a byte
    char memData[] = "Find the byte!";
    char *found = memchr(memData, 'b', strlen(memData));
    if (found)
        printf("memchr: Found 'b' at: \"%s\"\n", found);
    else
        printf("memchr: 'b' not found.\n");

    // 5. memset – fill memory with a value
    char buffer[10];
    memset(buffer, '*', sizeof(buffer));
    printf("memset: buffer = ");
    for (int i = 0; i < 10; i++) {
        putchar(buffer[i]);
    }
    printf("\n");

    return 0;
}
