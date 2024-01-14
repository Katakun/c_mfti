#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int reversed = 0;
    int tmp = n;
    while (tmp > 0) {
        reversed *= 10;
        int ost = tmp % 10;
        reversed += ost;
        tmp /= 10;
    }
    printf("%s\n", n == reversed ? "YES" : "NO");
    return 0;
}