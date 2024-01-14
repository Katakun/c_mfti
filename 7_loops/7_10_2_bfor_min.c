#include <stdio.h>

int main() {
    int n, x;
    int min = 2000000000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < min) min = x;
    }
    printf("%d\n", min);
    return 0;
}
