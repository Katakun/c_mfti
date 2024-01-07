#include <stdio.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;  // левая верхняя вершина
    struct Point rb;  // правая нижняя вершина
};

struct Rect intersection(struct Rect a, struct Rect b);

int is_crossed(struct Rect a, struct Rect b);

int min(int a, int b);

int max(int a, int b);

int main() {
    int lt_x1, lt_y1, rb_x1, rb_y1;
    int lt_x2, lt_y2, rb_x2, rb_y2;

    scanf("%d%d%d%d", &lt_x1, &lt_y1, &rb_x1, &rb_y1);
    scanf("%d%d%d%d", &lt_x2, &lt_y2, &rb_x2, &rb_y2);

    struct Rect a = {{lt_x1, lt_y1}, {rb_x1, rb_y1}};
    struct Rect b = {{lt_x2, lt_y2}, {rb_x2, rb_y2}};

    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y);

    return 0;
}

int is_crossed(struct Rect a, struct Rect b) {
    int res = 1;
    if (a.lt.x > b.rb.x || a.rb.x < b.lt.x || a.lt.y < b.rb.y || a.rb.y > b.lt.y) {
        res = 0;
    }
    return res;
}

struct Rect intersection(struct Rect a, struct Rect b) {
    int lt_x = max(a.lt.x, b.lt.x);
    int lt_y = min(a.lt.y, b.lt.y);

    int rb_x = min(a.rb.x, b.rb.x);
    int rb_y = max(a.rb.y, b.rb.y);
    struct Rect r = {{lt_x, lt_y}, {rb_x, rb_y}};
    return r;
}

int min(int a, int b) {
    int res = b;
    if (a < b) res = a;
    return res;
}

int max(int a, int b) {
    int res = b;
    if (a > b) res = a;
    return res;
}