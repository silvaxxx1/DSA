#include <stdio.h>

// Define a structure representing a playing card using bit fields
struct Card {
    unsigned int face  : 4;  // 4 bits can represent 0–15 (enough for 13 card faces: Ace–King)
    unsigned int suit  : 2;  // 2 bits can represent 0–3 (4 suits: Hearts, Diamonds, Clubs, Spades)
    unsigned int color : 1;  // 1 bit can represent 0 or 1 (Red or Black)
};

int main() {
    // Create and initialize a card
    // face = 11 (e.g., Jack), suit = 2 (e.g., Clubs), color = 1 (Black)
    struct Card card = {11, 2, 1};

    // Print each field separately
    printf("Face: %u, Suit: %u, Color: %u\n", card.face, card.suit, card.color);
    return 0;
}
