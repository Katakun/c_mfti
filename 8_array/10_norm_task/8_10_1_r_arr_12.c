#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int rub_5000 = 0;
    int rub_1000 = 0;
    int rub_500 = 0;
    int rub_100 = 0;
    int rub_50 = 0;
    int rub_10 = 0;
    int rub_5 = 0;
    int rub_2 = 0;
    int rub_1 = 0;

    while (x >= 5000) {
        rub_5000++;
        x -= 5000;
    }
    while (x >= 1000) {
        rub_1000++;
        x -= 1000;
    }
    while (x >= 500) {
        rub_500++;
        x -= 500;
    }
    while (x >= 100) {
        rub_100++;
        x -= 100;
    }
    while (x >= 50) {
        rub_50++;
        x -= 50;
    }
    while (x >= 10) {
        rub_10++;
        x -= 10;
    }
    while (x >= 5) {
        rub_5++;
        x -= 5;
    }
    while (x >= 2) {
        rub_2++;
        x -= 2;
    }
    while (x >= 1) {
        rub_1++;
        x -= 1;
    }

    printf("5000 %d\n", rub_5000);
    printf("1000 %d\n", rub_1000);
    printf("500 %d\n", rub_500);
    printf("100 %d\n", rub_100);
    printf("50 %d\n", rub_50);
    printf("10 %d\n", rub_10);
    printf("5 %d\n", rub_5);
    printf("2 %d\n", rub_2);
    printf("1 %d\n", rub_1);

    return 0;
}