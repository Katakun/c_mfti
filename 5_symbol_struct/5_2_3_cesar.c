#include <stdio.h>

#define LEN ('z' - 'a' + 1)

// return letter, coded Cezard cipher with shift
int code(int letter, int shift) { return 'a' + (letter - 'a' + shift) % LEN; }

int main() {
    // read symbols
    char c1, c2, c3, c4;  // ASCII-code symbols
    int shift;

    // read symbols and shift
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
    scanf("%d", &shift);

    // code symbol
    c1 = code(c1, shift);
    c2 = code(c2, shift);
    c3 = code(c3, shift);
    c4 = code(c4, shift);

    // print symbols
    printf("%c%c%c%c\n", c1, c2, c3, c4);

    return 0;
}