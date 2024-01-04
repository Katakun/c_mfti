#include <math.h>
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
    scanf("%hhu %hhu %hhu", &color.red, &color.green, &color.blue);
    return color;
}

void printRGB(Color color) { printf("%d %d %d\n", color.red, color.green, color.blue); }

void printHTML(Color color) { printf("%02X%02X%02X\n", color.red, color.green, color.blue); }

unsigned long long convertToHTML(Color color) {
    int red = color.red * pow(256, 2);
    int green = color.green * pow(256, 1);
    int blue = color.blue * pow(256, 0);
    long long html = red + green + blue;
    return html;
}

Color convertToRGB(unsigned long long html) {
    int blue = html % 256;
    int green = (html - blue) % 65536 / 256;
    int red = (html - blue - green) / 65536;
    Color color;
    color.red = red;
    color.green = green;
    color.blue = blue;
    return color;
}