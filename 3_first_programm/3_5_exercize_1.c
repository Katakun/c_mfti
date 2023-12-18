#include <stdio.h>

int main() {
    int legs;
    scanf("%d", &legs);

    int tables = legs / 4;
    printf("%d\n", tables);

    return 0;
}