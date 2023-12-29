#define MULT
#ifdef MULT

#include <stdio.h>

int rusMult(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusMult(a, b));

    return 0;
}

#endif

int rusMult(int a, int b) {
    printf("a: %d b: %d\n", a, b);
    if (b < 0) return;

    int rem = b % 2;
    if (rem == 1) {
        /* code */
    }
}