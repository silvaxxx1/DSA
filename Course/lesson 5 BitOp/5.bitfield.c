#include <stdio.h>

// -------------------------------------------------------------
// Structure: bitCard
// Purpose  : Represents a playing card using bit fields to save memory
// -------------------------------------------------------------
struct bitCard {
    unsigned int face : 4;   // 4 bits to represent face value (0-12 for 13 card values)
                             // Needs only 4 bits since 2^4 = 16 > 13

    unsigned int suit : 2;   // 2 bits to represent suit (0-3 for Hearts, Diamonds, Clubs, Spades)
                             // Needs only 2 bits since 2^2 = 4

    unsigned int color : 1;  // 1 bit to represent color (0 = Red, 1 = Black)
                             // Needs only 1 bit since 2^1 = 2

    // Total bits = 4 + 2 + 1 = 7 bits
    // In practice, the structure may still take up a full byte or more,
    // depending on compiler alignment rules
};

int main() {
    // -------------------------------------------------------------
    // Declare and initialize a card instance
    // -------------------------------------------------------------
    struct bitCard card;

    // Assign values to the bit fields of the card
    card.face = 10;   // Value 10, typically represents Jack
    card.suit = 12;    // Suit 2, let's say Clubs
    card.color = 0;   // Color 1, representing Black

    // -------------------------------------------------------------
    // Print the card's properties
    // -------------------------------------------------------------
    printf("Card Details:\n");
    printf("Face: %u\n", card.face);    // Should print 10 (Jack)
    printf("Suit: %u\n", card.suit);    // Should print 2 (Clubs)
    printf("Color: %u\n", card.color);  // Should print 1 (Black)

    // -------------------------------------------------------------
    // Show how much memory the struct actually takes
    // This can vary based on compiler/platform due to padding/alignment
    // -------------------------------------------------------------
    printf("\nSize of bitCard structure: %zu bytes\n", sizeof(card));

    return 0;
}
