#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;  // координаты левой верхней вершины
    struct Point rb;  // координаты правой нижней вершины
};

int area(struct Rect a);

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    struct Point lt = {x1, y1};
    struct Point rb = {x2, y2};
    struct Rect r = {lt, rb};

    printf("%d %d %d %d %d\n", r.lt.x, r.lt.y, r.rb.x, r.rb.y, area(r));
}

int area(struct Rect a) {
    int width = a.rb.x - a.lt.x;
    int height = a.lt.y - a.rb.y;
    int s = width * height;
    return s;
}