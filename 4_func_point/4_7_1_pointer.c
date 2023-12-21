#include <stdio.h>

int main() {
    int x = 123;
    int* p = &x;
    int** pp = &p;

    printf("x = %d\n", x);
    printf("p = %p\n", p);
    printf("pp = %p\n", pp);
}