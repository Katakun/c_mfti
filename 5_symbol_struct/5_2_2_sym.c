#include <stdio.h>

int main() {
    // читаем ASCII-коды
    int decimal = getchar();  // ASCII-код символа '4' 52
    int one = getchar();      // ASCII-код символа '7' 55

    // какие цифры в них закодированы?
    decimal = decimal - '0';  // 52 - 48 = 4
    one = one - '0';          // 55 - 48 = 7

    // получаем из цифр двухзначное число
    int res = decimal * 10 + one;  // 47
}