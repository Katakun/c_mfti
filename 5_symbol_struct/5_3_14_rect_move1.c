#include <stdio.h>

struct Rect {
    int x;       // х координата левой верхней вершины
    int y;       // y координата левой верхней вершины
    int width;   // ширина
    int height;  // высота
};

void move(struct Rect* p, int dx);

int main() {
    int x, y, width, height, dx;
    scanf("%d %d %d %d", &x, &y, &width, &height);
    scanf("%d", &dx);
    struct Rect r = {x, y, width, height};

    printf("%d %d %d %d + %d = ", r.x, r.y, r.width, r.height, dx);
    move(&r, dx);
    printf("%d %d %d %d\n", r.x, r.y, r.width, r.height);
    return 0;
}

void move(struct Rect* p, int dx) { p->x = p->x + dx; }