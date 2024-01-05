#include <stdio.h>

int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    printf("%d:%d\n", a, b);
    int score = 0;
    if (a > b) {
        score = 2;
    } else if (a == b) {
        score = 1;
    }
    printf("%d\n", score);

    return 0;
}