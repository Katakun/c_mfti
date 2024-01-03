#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;    // начало отрезка
    Point b;    // конец отрезка
    float len;  // длина отрезка
} Line;

float distance(Point a, Point b);  // расстояние между точками
void scanLine(Line* t);
void printLine(Line t);
void rotRLine(Line* t);

int main() {
    Line t;

    scanLine(&t);
    // тут должен быть вызов функции rotRLine
    rotRLine(&t);
    printLine(t);

    return 0;
}

void scanLine(Line* t) {
    scanf("%d %d %d %d", &t->a.x, &t->a.y, &t->b.x, &t->b.y);
    t->len = distance(t->a, t->b);
}

void printLine(Line t) { printf("%d %d %d %d %.3f\n", t.a.x, t.a.y, t.b.x, t.b.y, t.len); }

float distance(Point a, Point b) {
    int x_side = abs(a.x - b.x);
    int y_side = abs(a.y - b.y);
    float distance = sqrt(pow(x_side, 2) + pow(y_side, 2));
    return distance;
}

void rotRLine(Line* t) {
    int tmp = t->a.x;
    t->a.x = t->a.y;
    t->a.y = tmp * -1;
    tmp = t->b.x;
    t->b.x = t->b.y;
    t->b.y = tmp * -1;
}