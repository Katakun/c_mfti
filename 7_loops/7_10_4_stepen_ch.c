#include <math.h>
#include <stdio.h>

int main() {
    unsigned long long number;  // n - число
    int power;                  // k - степень
    scanf("%llu %d", &number, &power);

    int i = 2;
    int result = 1;
    while (number > 1 && i < 1000) {
        if (number % (int)pow(i, power) == 0) {
            number = number / pow(i, power);
            printf("%d %llu\n", i, number);
            result *= i;
            i = 2;
        } else {
            i++;
        }
    }
    printf("%d\n", number == 1 ? result : -1);
    return 0;
}