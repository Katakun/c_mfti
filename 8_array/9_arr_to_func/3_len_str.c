#include <stdio.h>

int my_strlen1(char str[]);
int my_strlen2(char str[]);

int main() {
    char s[10] = {'a', 'b', 'c', '\0'};      // то же самое s[10] = "abc"
    printf("length = %d\n", my_strlen1(s));  // length = 3
    return 0;
}

int my_strlen1(char str[]) {
    int n;
    for (n = 0; str[n] != '\0'; n++) {
        ;
    }
    return n;
}

int my_strlen2(char str[]) {
    char *p;
    for (p = str; *p != '\0'; p++) {
        ;
    }
    return p - str;
}