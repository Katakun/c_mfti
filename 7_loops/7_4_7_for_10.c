#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int res = 0;
    while (num > 0) {
        res *= 10;
        int ost = num % 10;
        res += ost;
        num /= 10;
    }

    printf("%d\n", res);

    return 0;
}