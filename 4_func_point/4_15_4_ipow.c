#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int* depth) {
    if (n == 1) return a;
    if (n == 0) return 1;

    // a = a * a;

    if (n % 2 == 0) {
        n = n / 2;
        return ipow(a, n, depth) * ipow(a, n, depth);
    } else {
        n = n - 1;
        return a * ipow(a, n, depth);
    }

    (*depth)++;
}

int main() {
    int a, n;
    unsigned int d = 7;
    scanf("%d%d", &a, &n);
    printf("res = %llu, d = %d\n", ipow(a, n, &d), d);
    return 0;
}