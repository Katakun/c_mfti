#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
    int height, width;

    height = ylt - yrb;
    width = xrb - xlt;

    *pxc = xrb - width / 2;
    *pyc = ylt - height / 2;
}

int main() {
    int xlt, ylt, xrb, yrb;
    int pxc;
    int pyc;

    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);

    center(xlt, ylt, xrb, yrb, &pxc, &pyc);
    printf("%d %d\n", pxc, pyc);
    return 0;
}