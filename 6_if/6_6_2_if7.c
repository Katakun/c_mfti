#include <stdio.h>

int main() {
    char col1, col2;
    int row1, row2;
    scanf("%c%d-%c%d", &col1, &row1, &col2, &row2);
    printf("%c%d-%c%d\n", col1, row1, col2, row2);
    if (col1 == col2 || row1 == row2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}