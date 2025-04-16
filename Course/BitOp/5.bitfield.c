#include <stdio.h>

// Define a struct with bit fields
struct bitCard {
    unsigned int face : 4;  // Face of the card (0-12, requiring 4 bits)
    unsigned int suit : 2;  // Suit of the card (0-3, requiring 2 bits)
    unsigned int color : 1; // Color of the card (0 = Red, 1 = Black, requiring 1 bit)
};

int main() {
    // Create an instance of bitCard to represent a specific card
    struct bitCard card;

    // Assign values to the bit fields
    card.face = 10;   // Face value 10 (Jack)
    card.suit = 2;    // Suit value 2 (Clubs)
    card.color = 1;   // Color value 1 (Black)

    // Print the details of the card
    printf("Card Details:\n");
    printf("Face: %u\n", card.face);    // Should print 10 (Jack)
    printf("Suit: %u\n", card.suit);    // Should print 2 (Clubs)
    printf("Color: %u\n", card.color);  // Should print 1 (Black)

    // Display the size of the bitCard structure in bytes
    printf("\nSize of bitCard structure: %zu bytes\n", sizeof(card));

    return 0;
}
