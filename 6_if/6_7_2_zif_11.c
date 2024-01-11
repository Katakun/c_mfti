#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = -1;
    // т % 4 == 0 => win
    // rem = 11 - (4 * 2)
    int rem = n - (4 * (n / 4));
    switch (rem) {
        case 0:
            k = 3;
            break;
        case 1:
            k = -1;
            break;
        case 2:
            k = 1;
            break;
        case 3:
            k = 2;
            break;
    }
    printf("%d\n", k);
    return 0;
}