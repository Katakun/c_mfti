#include <stdio.h>

int main() {
    int d, k;
    scanf("%d %d", &d, &k);
    int count = 0;
    int tmp = k;
    while (tmp > 0) {
        if (tmp % 10 == d) count++;
        tmp /= 10;
    }
    printf("%d %d %d\n", d, k, count);

    return 0;
}