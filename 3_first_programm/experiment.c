#include <stdio.h>

int main() {
    // объявить переменные
    int hours;
    int minutes;

    // прочитать входные данные
    scanf("%d", &hours);
    scanf("%d", &minutes);

    // вычислить
    int total_minutes = hours * 60 + minutes;
    int total_seconds = total_minutes * 60;

    // напечатать результат
    printf("%d\n", total_minutes);
    printf("%d\n", total_seconds);

    return 0;
}