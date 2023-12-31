#define DEL
#ifdef DEL

#include <stdio.h>

int rusDel(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusDel(a, b));

    return 0;
}

#endif

int rusDel(int a, int b) {
    int mult = 1;
    int rem = 1;

    if (a % 2 == 0) {
        a = a / 2;
        mult = 2;
        rem = 0;
    } else {
        a = a - b;
    }

    if (a == 0) {
        printf("1\n");
        return 1;
    }

    printf("%d %d %d\n", a, mult, rem);

    int res = rusDel(a, b);

    printf("%d * %d + %d = %d\n", res, mult, rem, res * mult + rem);

    res = res * mult + rem;

    return res;
}