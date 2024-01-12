#include <stdio.h>

int main() {
    int s;  // До стены
    int L;  // Первый шаг
    int k;  // Шаг уменьшается на к
    scanf("%d %d %d", &s, &L, &k);

    int dist = s;
    int steps = 0;
    while (L > 0 && dist - L >= 0) {
        dist -= L;
        L -= k;
        steps++;
    }
    printf("%d %d\n", steps, dist);
    return 0;
}