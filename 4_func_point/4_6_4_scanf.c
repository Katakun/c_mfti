#include <stdio.h>

int main() {
    int g1, s1, k1;  // кошелек1
    int g2, s2, k2;  // кошелек2
    int g, s, k;     // кошелек результат

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    // тут надо написать вычисления
    g = g1 + g2;
    s = s1 + s2;
    k = k1 + k2;

    // кошелек результат = кошелек 1 + кошелек 2

    printf("%d %d %d\n", g, s, k);
    return 0;
}
