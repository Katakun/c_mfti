#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2) {
    int width = *x2 - *x1;
    int height = *y1 - *y2;
    int d = (width - height) / 2;
    *x1 = *x1 + d;
    *x2 = *x2 - d;
    *y1 = *y1 + d;
    *y2 = *y2 - d;
}

int main() {
    int xlt, ylt, xrb, yrb;

    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);

    rotateC(&xlt, &ylt, &xrb, &yrb);

    printf("%d %d %d %d\n", xlt, ylt, xrb, yrb);
    return 0;
}