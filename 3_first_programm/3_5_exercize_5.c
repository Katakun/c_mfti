#include <stdio.h>

int main() {
    int rub;
    int kop;

    scanf("%d%d", &rub, &kop);

    int total = rub * 100 + kop;   // 123
    int n = total / 106;           // 1
    int rest = total - (n * 106);  // 123 - 1*100 -1*5 - 1*1

    printf("%d %d", n, rest);
}

/*
1 rub = 100 kop
23 kop =  23 kop

123
100 = 1
105
106
123 - 6 = 17

100
5
1

*/