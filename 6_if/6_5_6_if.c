#include <stdio.h>

int main() {
    int a1, b1, a2, b2;
    scanf("%d:%d", &a1, &b1);
    scanf("%d:%d", &a2, &b2);
    int a_sum = a1 + a2;
    int b_sum = b1 + b2;
    printf("%d:%d\n", a_sum, b_sum);
    int score = 0;
    if (a_sum > b_sum) {
        score = 2;
    } else if (a_sum == b_sum) {
        score = 1;
    }
    
    printf("%d\n", score);
    return 0;
}