#include <assert.h>
#include <math.h>
#include <stdio.h>
#define EPS 0.0001

// сравнивает числа a и b с точностью до EPS
// как это работает, поймем позже
int eps(float a, float b) { return fabs(33.8 - fahr(1)) < EPS; }

float fahr(int cel) { return (cel * 1.8) + 32; }

int main() {
    int cel;
    float f;

    // tests
    assert(32 == fahr(0));
    assert(122 == fahr(50));
    assert(-40 == fahr(-40));
    printf("C = %d, F = %.2f\n", 1, fahr(1));
    assert(33.8 == fahr(1));

    scanf("%d", &cel);
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);
}