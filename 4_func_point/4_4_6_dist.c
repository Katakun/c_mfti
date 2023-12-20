#include <math.h>
#include <stdio.h>

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
    int x1, y1, x2, y2, x3, y3;  // координаты точек
    // float len;                   // длина

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);  // прочитали числа

    float s = area(x1, y1, x2, y2, x3, y3);  // вызываем функцию dist
    printf("%.3f\n", s);                     // напечатать длину
    return 0;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a = dist(x1, y1, x2, y2);
    float b = dist(x2, y2, x3, y3);
    float c = dist(x3, y3, x1, y1);
    float p = (a + b + c) / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

float dist(int x1, int y1, int x2, int y2) {
    float a = fabs((double)x1 - x2);
    float b = fabs((double)y1 - y2);
    float c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}