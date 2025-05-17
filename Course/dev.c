#include <assert.h>
#include <stdio.h>

int main() {
    int value = 0;
    assert(value != 0);  // If false, program aborts with error
    printf("Value is non-zero: %d\n", value);
    return 0;
}
