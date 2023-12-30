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
    printf("%d %d\n", a, b);

    if (b == 1) {
        printf("%d\n", a);
        return a;
    }

    int ost = b % 2;
    int res = rusMult(a * 2, b / 2);

    printf("%d %d %d ", res, a, ost);

    if (ost == 1) res = res + a;
    printf("%d\n", res);

    return res;
}