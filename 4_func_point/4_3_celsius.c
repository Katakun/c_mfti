#include <stdio.h>

float fahr(int cel) {
    float res;
    res = (cel * 1.8) + 32;
    return res;
}

// F = C ⋅ 9/5 + 32
float celsius(int fahr) {
    float res;
    res = (fahr - 32) / (9.0 / 5.0);
    return res;
}

int main() {
    int f;
    float cel;

    // scanf("%d", &cel);
    // f = fahr(cel);
    // printf("%.2f\n", f);

    scanf("%d", &f);
    cel = celsius(f);
    printf("%.4f\n", cel);

    return 0;
}
