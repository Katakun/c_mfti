#include <stdio.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;  // левая верхняя вершина
    struct Point rb;  // правая нижняя вершина
};

int is_crossed(struct Rect a, struct Rect b);

int main() {
    int lt_x1, lt_y1, rb_x1, rb_y1;
    int lt_x2, lt_y2, rb_x2, rb_y2;

    scanf("%d%d%d%d", &lt_x1, &lt_y1, &rb_x1, &rb_y1);
    scanf("%d%d%d%d", &lt_x2, &lt_y2, &rb_x2, &rb_y2);

    struct Rect a = {{lt_x1, lt_y1}, {rb_x1, rb_y1}};
    struct Rect b = {{lt_x2, lt_y2}, {rb_x2, rb_y2}};

    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
    printf("%d\n", is_crossed(a, b));

    return 0;
}

int is_crossed(struct Rect a, struct Rect b) {
    int res = 0;
    if (a.rb.x > b.lt.x && a.rb.x < b.) {
        res = 1;
    }

    return res;
}