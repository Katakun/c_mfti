#include <stdio.h>

int main() {
    char ch;
    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }

    return 0;
}