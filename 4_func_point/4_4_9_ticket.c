#include <stdio.h>

void print_revers(int x);

int main() {
    int x;
    scanf("%d", &x);
    print_revers(x);
}

void print_revers(int x) {
    while (x > 0) {
        int remain = x % 10;
        x = x / 10;
        printf("%d", remain);
    }
}