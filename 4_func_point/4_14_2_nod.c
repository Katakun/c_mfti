#include <stdio.h>

int nod(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return nod(b, a % b);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));
    return 0;
}
