#include <stdio.h>

int main() {
    int x;
    printf("sizeof(x) = %zd\n", sizeof x);           // 4 в моей системе и на repl.it
    printf("sizeof(1 + 2) = %zd\n", sizeof(1 + 2));  // 4 в моей системе и на repl.it
    printf("sizeof 3.5 = %zd\n", sizeof 3.5);        // 8 в моей системе и на repl.it
    printf("sizeof(char) = %zd\n\n", sizeof(char));  // 1 всегда

    int a[5];  // массив из 5 int
    int *pa;   // указатель на int
    pa = &a[0];
    pa = a;

    printf("sizeof(a) = %zd\n", sizeof(a));      // 20 = 5 * 4(int)
    printf("sizeof(pa) = %zd\n\n", sizeof(pa));  // размер адреса

    int *p0;
    int *p3;
    p0 = &a[0];  // указывает на a[0]
    p3 = &a[3];  // указывает на a[3]
    // p3 = p0 + 3;                       // указывает на a[3]
    printf("p0=%p p3=%p \n", p0, p3);  // адреса

    return 0;
}