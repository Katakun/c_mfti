#include <stdio.h>

int main() {
    int rounds_first;
    float koef_second_runner;
    scanf("%d%f", &rounds_first, &koef_second_runner);

    float rounds_second = rounds_first * koef_second_runner;
    int meet = rounds_first - rounds_second;
    printf("%d", meet);
}