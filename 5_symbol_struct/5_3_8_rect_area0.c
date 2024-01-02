#include <stdio.h>

struct Rect {
    int x;       // х координата левой верхней вершины
    int y;       // y координата левой верхней вершины
    int width;   // ширина
    int height;  // высота
};

int area(struct Rect a);

int main() {
    int x, y, width, height;
    scanf("%d %d %d %d", &x, &y, &width, &height);
    struct Rect r = {x, y, width, height};
    printf("%d %d %d %d %d\n", r.x, r.y, r.width, r.height, area(r));
}

int area(struct Rect a) {
    int s = a.width * a.height;
    return s;
}