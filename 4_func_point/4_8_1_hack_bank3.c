#include <stdio.h>

void hack_bank1(int g) {
    g = g + 100;  // изменили копию кошелька, бесполезно
}

int hack_bank2(int g) {
    g = g + 200;
    return g;  // вернули измененное значение
}

void hack_bank3(int *pg) {
    // по указателю меняем значение
    *pg = *pg + 300;  // или *pg += 300
}

int main() {
    int g1 = 1;
    int g2 = 2;
    int g3 = 3;

    hack_bank1(g1);
    printf("g1 = %d\n", g1);  // 1, богаче не стали

    g2 = hack_bank2(g2);
    printf("g2 = %d\n", g2);  // 202, успех

    hack_bank3(&g3);
    printf("g3 = %d\n", g3);  // 303, успех

    return 0;
}
