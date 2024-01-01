#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect1 {
    struct Point lt;
    struct Point rb;
};

int main() {
    struct Point p1 = {-7, 5};
    struct Point p2 = {5, -3};
    struct Rect1 b;
    b.lt = p1;
    b.rb = p2;
    printf("%d %d %d %d", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
}