#include <stdio.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;  // координаты левой верхней вершины
    struct Point rb;  // координаты правой нижней вершины
};

void move(struct Rect* p, int dx);

int main() {
    int x1, y1, x2, y2, dx;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d", &dx);

    struct Point lt = {x1, y1};
    struct Point rb = {x2, y2};
    struct Rect r = {lt, rb};

    printf("%d %d %d %d + %d = ", r.lt.x, r.lt.y, r.rb.x, r.rb.y, dx);
    move(&r, dx);
    printf("%d %d %d %d\n", r.lt.x, r.lt.y, r.rb.x, r.rb.y);
}

void move(struct Rect* p, int dx) {
    p->lt.x = p->lt.x + dx;
    p->rb.x = p->rb.x + dx;
}