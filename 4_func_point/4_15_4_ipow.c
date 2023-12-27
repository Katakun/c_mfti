#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int* depth) {
    (*depth)++;
    printf("n = %02d, depth = %d\n", n, *depth);
    if (n == 1) return a;
    if (n == 0) return 1;

    if (n % 2 == 0)
        return ipow(a * a, n / 2, depth);
    else
        return a * ipow(a, n - 1, depth);
}

int main() {
    unsigned int d;
    int a, n;
    // int d = 7;
    scanf("%d%d", &a, &n);
    printf("\nres = %llu, d = %d\n", ipow(a, n, &d), d);
    return 0;
}