#include <ctype.h>
#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);

    printf("%d ", d);

    char ch = getchar();
    ch = getchar();
    int count = 0;
    while (isdigit(ch)) {
        int x = ch;
        if (x - 48 == d) {
            count++;
        }
        putchar(ch);
        ch = getchar();
    }

    printf(" %d\n", count);

    return 0;
}