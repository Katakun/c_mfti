#include <stdio.h>

int main() {
    int height;
    int tall = 0;
    int total = 0;
    while (1 == scanf("%d", &height)) {
        total++;
        if (height > 170) tall++;
    }
    printf("%d %d\n", total, tall);
    return 0;
}