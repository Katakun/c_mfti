#include <stdio.h>

// void inc(int x) { x = x + 1; }

// int main() {
//     int a = 5;
//     inc(a);
//     inc(a);
//     printf("%d\n", a);  // 5

//     return 0;
// }

void inc(int* px) { *px = *px + 1; }

int main() {
    int a = 5;
    inc(&a);
    inc(&a);
    printf("%d\n", a);  // 7

    return 0;
}
