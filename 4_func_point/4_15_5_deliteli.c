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
#endif

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0) return;
    if (n == 1)
        printf("%u ", last);
    else
        printf("%u^%u ", last, n);
}

void simpleFactors(unsigned int a, unsigned int last, unsigned int n) {
    printf("a: %3d last: %d n: %d\n", a, last, n);

    // точка возврата
    if (a == 1) {
        return;
    }

    // если число делится на делитель
    if (a % last == 0) {
        a = a / last;
        n = n + 1;
        simpleFactors(a, last, n);

        // печатаем делитель после возврати из рекурсии
        if (a % last != 0) printFactor(last, n);
    }
    // если не делится, то увеличиваем делитель и обнуляем степень
    else {
        last = last + 1;
        n = 0;
        simpleFactors(a, last, n);
    }
}
