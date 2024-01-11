#include <stdio.h>

int main() {
    int L;  // сколько отряд прошел в первый день
    int k;  // на сколько больше пройдет завтра,
    int s;  // сколько нужно всего пройти

    scanf("%d %d %d", &L, &k, &s);
    int days = 0;
    while (s > 0) {
        days++;
        s -= L;
        L += k;
    }
    printf("%d\n", days);
    return 0;
}