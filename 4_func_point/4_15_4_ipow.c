#define POW

#include <stdio.h>
#ifdef POW

long long int ipow(long long int a, unsigned int n, unsigned int* depth);

int main() {
    unsigned int d = 7;
    int a, n;
    scanf("%d%d", &a, &n);
    long long result = ipow(a, n, &d);
    printf("result = %llu, d = %d\n", result, d);
    return 0;
}
#endif

long long int ipow(long long int a, unsigned int n, unsigned int* depth) {
    if (n == 1) {
        *depth = 1;
        return a;
    }
    if (n == 0) {
        *depth = 1;
        return 1;
    }

    long long res = 0;
    if (n % 2 == 0) {
        res = ipow(a * a, n / 2, depth);
        *depth = *depth + 1;
        return res;
    } else {
        res = a * ipow(a, n - 1, depth);
        *depth = *depth + 1;
        return res;
    }
}
