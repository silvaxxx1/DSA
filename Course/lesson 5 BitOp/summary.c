// Week 5: Bitwise Operations, Bit Fields, Enums, and Secure C Programming
#include <stdio.h>
#include <limits.h> // For CHAR_BIT
#include <string.h> // For safe string ops

// --- 10.9 Bitwise Operators ---
void bitwise_operations() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    printf("\n[Bitwise Operators]\n");
    printf("a & b = %d\n", a & b);         // 0001
    printf("a | b = %d\n", a | b);         // 0111
    printf("a ^ b = %d\n", a ^ b);         // 0110
    printf("~a = %d\n", ~a);               // one's complement
    printf("a << 1 = %d\n", a << 1);        // 1010
    printf("a >> 1 = %d\n", a >> 1);        // 0010

    int c = 6;
    c &= 3;
    printf("c &= 3: %d\n", c);
    c |= 2;
    printf("c |= 2: %d\n", c);
    c ^= 1;
    printf("c ^= 1: %d\n", c);
    c <<= 1;
    printf("c <<= 1: %d\n", c);
    c >>= 2;
    printf("c >>= 2: %d\n", c);
}

// --- 10.9.1 Displaying an Unsigned Integer’s Bits ---
void displayBits(unsigned int value) {
    unsigned int mask = 1 << (CHAR_BIT * sizeof(unsigned int) - 1);
    for (int i = 0; i < CHAR_BIT * sizeof(unsigned int); ++i) {
        putchar(value & mask ? '1' : '0');
        value <<= 1;
        if ((i + 1) % 8 == 0) putchar(' ');
    }
    putchar('\n');
}

void show_binary_demo() {
    printf("\n[Displaying Bits]\n");
    unsigned int num = 123;
    printf("Binary of %u: ", num);
    displayBits(num);
}

// --- 10.10.1 Defining Bit Fields ---
struct BitCard {
    unsigned int face : 4;  // 0–15
    unsigned int suit : 2;  // 0–3
    unsigned int color : 1; // 0–1
};

void bitfield_card_demo() {
    struct BitCard card = {11, 2, 1};
    printf("\n[Bit Fields - Card]\n");
    printf("Face: %u, Suit: %u, Color: %u\n", card.face, card.suit, card.color);
}

// --- 10.10.3 Unnamed Bit Fields ---
struct Example {
    unsigned int a : 13;
    unsigned int : 19;  // Padding
    unsigned int b : 4;
};

struct AlignedExample {
    unsigned int a : 13;
    unsigned int : 0;   // New storage unit
    unsigned int b : 4;
};

void unnamed_bitfield_demo() {
    struct Example ex = {4095, 7};
    printf("\n[Unnamed Bit Fields]\n");
    printf("a = %u, b = %u\n", ex.a, ex.b);
}

// --- 10.11 Enumeration Constants ---
enum Months { JAN = 1, FEB, MAR, APR, MAY };
enum Status { OK = 0, WARNING = 1, ERROR = 1 }; // duplicate values

void enum_demo() {
    enum Months m = MAR;
    enum Status s = ERROR;
    printf("\n[Enumerations]\n");
    printf("Month: %d, Status: %d\n", m, s);
}

// --- 10.12 Anonymous Structures and Unions ---
struct Employee {
    int id;
    struct {
        char city[20];
        char country[20];
    }; // anonymous struct
};

struct Data {
    int type; // 0 = int, 1 = float
    union {
        int i;
        float f;
    }; // anonymous union
};

void anonymous_demo() {
    printf("\n[Anonymous Struct/Union]\n");
    struct Employee e = {101, "Ankara", "Türkiye"};
    printf("ID: %d, City: %s, Country: %s\n", e.id, e.city, e.country);

    struct Data d;
    d.type = 1;
    d.f = 3.14f;
    if (d.type == 0) printf("Integer: %d\n", d.i);
    else printf("Float: %.2f\n", d.f);
}

// --- 10.13 Secure C Programming ---
void secure_demo() {
    printf("\n[Secure Programming]\n");
    char name[10];
    printf("Enter your name (max 9 chars): ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline
    printf("Hello, %s\n", name);

    int arr[5];
    for (int i = 0; i < 5; ++i) arr[i] = i * 10;

    enum { ON, OFF } state = ON;
    if (state != ON && state != OFF) {
        printf("Invalid state!\n");
    }
}

int main() {
    bitwise_operations();
    show_binary_demo();
    bitfield_card_demo();
    unnamed_bitfield_demo();
    enum_demo();
    anonymous_demo();
    secure_demo();
    return 0;
}
