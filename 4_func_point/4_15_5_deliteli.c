#define DELITEL
#include <stdio.h>

#ifdef DELITEL

void simpleFactors(unsigned int a, unsigned int last, unsigned int n);
void printFactor(unsigned int last, unsigned int n);

int main() {
    unsigned int a;
    scanf("%u", &a);
    simpleFactors(a, 2, 0);

    return 0;
}

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0) return;
    if (n == 1)
        printf("%u ", last);
    else
        printf("%u^%u ", last, n);
}

#endif

void simpleFactors(unsigned int a, unsigned int last, unsigned int n) {
    // printf("a = %2d, last = %d, n = %d\n", a, last, n);

    if (a == 0) return;
    if (a == 1) {
        printFactor(last, n);
        return;
    }

    if (a % last == 0) {
        a = a / last;
        n = n + 1;
        simpleFactors(a, last, n);
    } else {
        printFactor(last, n);
        last = last + 1;
        n = 0;
        simpleFactors(a, last, n);
    }
}
