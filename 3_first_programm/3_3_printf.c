#include <stdio.h>

int main() {
    int min;
    int sec;

    min = 2 * 60 + 20;
    sec = min * 60;
    printf("Время в пути в минутах %d минут\n", min);
    printf("Время в пути в секундах %d секунд\n", sec);

    return 0;
}