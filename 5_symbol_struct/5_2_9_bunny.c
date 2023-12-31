#include <stdio.h>

int main() {
    char letter, digit;
    scanf("%c%c", &letter, &digit);
    int number = digit - '0';

    printf("%c%d ", letter - 1, number);
    printf("%c%d ", letter, number + 1);
    printf("%c%d ", letter + 1, number);
    printf("%c%d\n", letter, number - 1);
}