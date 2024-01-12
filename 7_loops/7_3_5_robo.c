#include <stdio.h>

int main() {
    int s;  // До стены сантиметров
    int L;  // Первый шаг
    int k;  // Каждый шаг больше

    scanf("%d %d %d", &s, &L, &k);

    int dist = s;
    int steps = 0;
    while (dist >= L) {
        dist -= L;
        L += k;
        steps++;
    }
    printf("%d %d\n", steps, dist);
    return 0;
}