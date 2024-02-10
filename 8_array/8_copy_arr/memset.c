#include <stdio.h>
#include <string.h>

int main() {
    int a[5] = {1, 1, 1, 1, 1};
    int b[5];

    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // заполняет каждый байт массива b 1. (16843009)
    memset(b, 1, sizeof(b));
    for (size_t i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}