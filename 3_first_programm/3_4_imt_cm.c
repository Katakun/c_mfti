#include <stdio.h>

int main() {
    float m;
    int hsm;

    scanf("%f%d", &m, &hsm);
    float h = (float)hsm / 100;

    float imt = m / (h * h);

    printf("%f\n", imt);

    return 0;
}