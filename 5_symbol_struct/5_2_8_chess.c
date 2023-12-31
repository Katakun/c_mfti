#include <stdio.h>

void moove(int row, int col) { printf("%c%c\n", col, row + 1); }

int main() {
    int col = getchar();
    int row = getchar();
    moove(row, col);
}