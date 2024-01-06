#include <stdio.h>
#include <stdlib.h>

struct Rect* max(struct Rect* pa, struct Rect* pb);

int area(struct Rect r);

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;  // левая верхняя вершина
    struct Point rb;  // правая нижняя вершина
};

int main() {
    int lt_x1, lt_y1, rb_x1, rb_y1;
    int lt_x2, lt_y2, rb_x2, rb_y2;

    scanf("%d%d%d%d", &lt_x1, &lt_y1, &rb_x1, &rb_y1);
    scanf("%d%d%d%d", &lt_x2, &lt_y2, &rb_x2, &rb_y2);

    struct Rect a = {{lt_x1, lt_y1}, {rb_x1, rb_y1}};
    struct Rect b = {{lt_x2, lt_y2}, {rb_x2, rb_y2}};

    printf("%d %d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y, area(a));
    printf("%d %d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y, area(b));

    printf("%d\n", area(*(max(&a, &b))));

    return 0;
}

int area(struct Rect r) {
    int width, height;
    width = abs(r.rb.x - r.lt.x);
    height = abs(r.lt.y - r.rb.y);
    return width * height;
}

struct Rect* max(struct Rect* pa, struct Rect* pb) {
    int a_area = area(*pa);
    int b_area = area(*pb);
    if (a_area > b_area) {
        return pa;
    } else {
        return pb;
    }
}