#include <stdio.h>

int main() {
    printf("<%5s>\n", "abc");  // <  abc>
    // printf("<%05s>\n", "abc");
    printf("<%-5s>\n", "abc");       // <abc  >
    printf("<%5s>\n", "abcdefgh");   // <abcdefgh>
    printf("<%.5s>\n", "abcdefgh");  // <abcde>
    printf("<%.5s>\n", "abc");       // <abc>

    printf("%0*.*f\n", 10, 5, 1.23456789);
}
