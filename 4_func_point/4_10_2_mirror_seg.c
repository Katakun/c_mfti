#include <stdio.h>

void mirror(int *px, int *py) { *py = *py * -1; }

void mirror_seg(int *px1, int *py1, int *px2, int *py2) {
    mirror(px1, py1);
    mirror(px2, py2);
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    mirror_seg(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);
}