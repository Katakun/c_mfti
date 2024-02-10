#include <stdio.h>

// void foo10(int a[10]) { printf("foo10 : %zu\n", sizeof(a)); }
// void foo(int a[]) { printf("foo   : %zu\n", sizeof(a)); }
// void foop(int a[10]) { printf("foop  : %zu\n", sizeof(a)); }

int main() {
    int a[10];
    printf("main  : %zu\n", sizeof(a));      // main  : 40
    printf("int*  : %zu\n", sizeof(int *));  // int * : 8

    // foo10(a);  // foo10 : 8
    // foo(a);   // foo   : 8
    // foop(a);  // foop  : 8
    return 0;
}