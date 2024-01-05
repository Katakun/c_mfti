#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int n_table = n / 4;
    printf("%d\n", n_table < k ? n_table : k);
    return 0;
}