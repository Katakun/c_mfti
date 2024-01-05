#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    if (age < 10) {
        printf("0\n");
    } else if (10 <= age && age <= 12) {
        printf("3\n");
    } else if (13 <= age && age <= 15) {
        printf("5\n");
    } else {
        printf("10\n");
    }
    return 0;
}