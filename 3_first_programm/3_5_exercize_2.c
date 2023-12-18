#include <stdio.h>

int main() {
    int round;
    int total;

    scanf("%d%d", &round, &total);
    int round_count = total / round;
    int remind = total % round;

    printf("%d %d", round_count, remind);
}