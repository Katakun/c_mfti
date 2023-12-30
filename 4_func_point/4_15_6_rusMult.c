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

    if (b == 1) return a;

    int ost = b % 2;
    b = b / 2;
    a = a * 2;
    int res = rusMult(a, b);
    printf("%d %d %d %d\n", res, a / 2, ost, res + a / 2);
    if (ost == 1) {
        res = res + a / 2;
    }
    return res;
}