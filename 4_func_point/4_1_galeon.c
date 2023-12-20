#include <stdio.h>

int main() {
    /*
    1 galeon  = 17 sikl
    1 sikl = 29 knut
    */
    int g1, s1, k1;  // кошелек 1
    int g2, s2, k2;  // кошелек 2
    int g, s, k;     // кошелек результат

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    int total_g = g1 + g2;
    int total_s = s1 + s2;
    int total_k = k1 + k2;

    int all_total_k = total_k + total_s * 29 + total_g * 17 * 29;

    g = all_total_k / (29 * 17);
    s = all_total_k % (29 * 17) / 29;
    k = all_total_k % (29 * 17) % 29;

    printf("%d %d %d", g, s, k);

    return 0;
}