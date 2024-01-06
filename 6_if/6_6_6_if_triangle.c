#include <stdio.h>

int triangle_len_type(int a, int b, int c);

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", triangle_len_type(a, b, c));
    return 0;
}

int triangle_len_type(int a, int b, int c) {
    int result = 0;
    if (a == b && b == c) {
        result = 2;
    } else if (a == b || b == c || c == a) {
        result = 1;
    }
    if (a >= b + c || b >= a + c || c >= a + b) {
        result = -1;
    }

    return result;
}