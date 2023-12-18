#include <stdio.h>

int main() {
    float side_a;
    float side_b;

    scanf("%f%f", &side_a, &side_b);
    float square = side_a * side_b;

    printf("%f", square);
    return 0;
}