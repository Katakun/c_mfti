#include <stdio.h>

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

// считать RGB-формат с консоли
Color getColor();

// перевод из RGB-формата в число
unsigned long long convertToHTML(Color);

// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long);

// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue:
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
void printRGB(Color);

// печать цвета в HTML-формате и \n в конце.
// Примеры: FFA902 0AA3FF
void printHTML(Color);

int main() {
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}

Color getColor() {
    Color color;
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    scanf("%u %u %u", &color.red, &color.green, &color.blue);
    return color;
}

void printRGB(Color color) { printf("%d %d %d", color.red, color.green, color.blue); }

unsigned long long convertToHTML(Color) {}