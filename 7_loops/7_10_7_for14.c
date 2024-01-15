#include <stdio.h>

int main() {
    char ch;
    int stack = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '(')
            stack++;
        else if (ch == ')')
            stack--;
        if (stack < 0) {
            break;
        }
    }
    printf("%s\n", stack == 0 ? "YES" : "NO");

    return 0;
}