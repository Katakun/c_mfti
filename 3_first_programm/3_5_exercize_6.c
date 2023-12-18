#include <stdio.h>

int main() {
    int total_day;
    int first_monday;

    scanf("%d%d", &total_day, &first_monday);
    int total_monday = (total_day - first_monday) / 7 + 1;

    printf("%d", total_monday);
    return 0;
}
