/*
все решил PHIND.com
*/

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void print_decimal(int numerator, int denominator) {
    int remainder = numerator % denominator;
    printf("0.");

    // Периодическая часть
    int period[denominator];
    for (int i = 0; i < denominator; i++) {
        period[i] = -1;
    }

    // Находим периодическую часть
    int index = 0;
    while (remainder != 0 && period[remainder] == -1) {
        period[remainder] = index++;
        remainder *= 10;
        printf("%d", remainder / denominator);
        remainder %= denominator;
    }

    // Печатаем периодическую часть
    if (remainder != 0) {
        printf("(");
        for (int i = period[remainder]; i < index; i++) {
            printf("%d", period[i]);
        }
        printf(")");
    }
}

int main() {
    int numerator, denominator;
    scanf("%d %d", &numerator, &denominator);

    // Упрощаем дробь
    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

    print_decimal(numerator, denominator);

    return 0;
}