#include <stdio.h>
typedef enum {
FICTION = 10,
SCIENCE = 11,
HISTORY = 20
} Genre;
void printGenre(Genre g) {
switch (g) {
case FICTION: printf("FICTION %d\n", FICTION); break;
case SCIENCE: printf("SCIENCE %d\n", SCIENCE); break;
case HISTORY: printf("HISTORY %d\n", HISTORY); break;
default: printf("Unknown\n");
}
}
int main() {
printGenre(FICTION+1);
printGenre(SCIENCE);
printGenre(HISTORY + 3);
return 0;
}