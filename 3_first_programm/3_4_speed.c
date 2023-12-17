#include <stdio.h>

int main() {
    int speed_km_per_hour;

    scanf("%d", &speed_km_per_hour);

    float speed_m_per_hour = speed_km_per_hour * 1000;
    float speer_m_per_min = speed_m_per_hour / 60;
    float speed_m_per_sec = speer_m_per_min / 60;

    printf("%f\n", speed_m_per_sec);
}