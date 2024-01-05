#include <stdio.h>

int main() {
    int n, k_rice, k_veg;
    scanf("%d %d %d", &n, &k_rice, &k_veg);
    printf("%d %d %d\n", n, k_rice, k_veg);
    int price = k_rice + 2 * k_veg;
    printf("%d\n", price);
    printf(price <= n ? "YES\n" : "NO\n");
    return 0;
}