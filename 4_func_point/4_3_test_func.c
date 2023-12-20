#include <stdio.h>

float fahr(int cel) {
    float res;
    res = (cel * 1.8) + 32;
    return res;
}

float celsius(int fahr) {
    float res;
    res = (fahr - 32) / (9.0 / 5.0);
    return res;
}

int main() {
    int cel;
    float f;

    // test
    cel = 0;
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);  // 0 32

    // test
    cel = 1;
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);  // 1 33.8

    // test
    cel = -40;
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);  // -40 -40

    // для произвольного числа
    scanf("%d", &cel);
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);

    return 0;
}