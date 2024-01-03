#include <stdio.h>

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
    printLine(t);

    return 0;
}