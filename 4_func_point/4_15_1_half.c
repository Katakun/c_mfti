#include <stdio.h>

int delim_konfety(int a) {
    if (a == 1) {
        return 1;
    }
    return 1 + delim_konfety(a - a / 2);
}

// int delim_konfety(int a) {
//     int count = 0;
//     while (a > 1) {
//         a = a - (a / 2);
//         count++;
//     }
//     return count + 1;
// }

int main() {
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("%d\n", detey);

    return 0;
}