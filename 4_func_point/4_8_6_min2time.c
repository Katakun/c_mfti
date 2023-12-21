#include <stdio.h>

void min2time(int mm, int* ph, int* pm);

int main() {
    int mm, h, m;
    scanf("%d", &mm);

    // напишите вызов функции min2time
    min2time(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}

void min2time(int mm, int* ph, int* pm) {
    int total_hour = mm / 60;
    int hour = total_hour % 24;
    int min = mm % 60;
    *ph = hour;
    *pm = min;
}