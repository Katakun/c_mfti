#include <stdio.h>

int main() {
    int a = 2,                // явно инициализирована, число 2
        b;                    // неявно инициализирована, "мусор"
    printf("%d %d\n", a, b);  // 2 ???
    return 0;
}