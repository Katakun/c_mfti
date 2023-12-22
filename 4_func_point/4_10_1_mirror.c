#include <stdio.h>

// зеркально отображает точку с координатами (x,y) относительно оси Y
void mirror(int *px, int *py) {
    *px = *px * -1;
    // *py = *py * -1;
}

int main() {
    int x;
    int y;
    scanf("%d%d", &x, &y);

    mirror(&x, &y);
    printf("%d %d", x, y);
}