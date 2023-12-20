#include <stdio.h>

float foo(float x) {
    float res;
    res = x * x + 2 * x + 3;
    return res;
}

int main() {
    float z;
    z = foo(0);
    printf("f(%f) = %f\n", 0., z);

    z = foo(1);
    printf("f(%f) = %f\n", 1., z);

    float a;
    scanf("%f", &a);
    z = foo(a);
    printf("f(%f) = %f\n", a, z);

    return 0;
}