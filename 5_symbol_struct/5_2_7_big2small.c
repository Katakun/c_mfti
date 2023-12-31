#include <stdio.h>

void big2small(char letter) {
    char res = letter + ('a' - 'A');
    printf("%c\n", res);
}

int main() {
    char letter;
    scanf("%c", &letter);
    big2small(letter);
}