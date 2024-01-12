#include <stdio.h>

int main() {
    int price, delta, money;
    scanf("%d %d %d", &price, &delta, &money);
    int wday = 0;
    int day = 0;
    while (money >= price) {
        money -= price;
        day++;
        wday++;
        if (wday == 7) {
            wday = 1;
            price += delta;
        }
    }
    printf("%d\n", day);
    return 0;
}