#include <stdio.h>

void foo1(int a[3][4]) {
    printf("%s: %zu %zu %lu\n", __FUNCTION__, sizeof(a), sizeof(a[0]), sizeof(a[1][2]));
    printf("%s: %d\n", __FUNCTION__, a[1][2]);
}
void foo2(int a[][4]) {
    printf("%s: %zu %zu %lu\n", __FUNCTION__, sizeof(a), sizeof(a[0]), sizeof(a[1][2]));
    printf("%s: %d\n", __FUNCTION__, a[1][2]);
}
void foo3(int (*a)[4]) {
    printf("%s: %zu %zu %lu\n", __FUNCTION__, sizeof(a), sizeof(a[0]), sizeof(a[1][2]));
    printf("%s: %d\n", __FUNCTION__, a[1][2]);
}

int main() {
    int a[3][4] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};

    printf("int:  %zu\n", sizeof(int));
    printf("int*: %zu\n", sizeof(int*));
    printf("%s: %zu %zu %lu\n", __FUNCTION__, sizeof(a), sizeof(a[0]), sizeof(a[1][2]));
    printf("%s: %d\n", __FUNCTION__, a[1][2]);

    foo1(a);
    foo2(a);
    foo3(a);

    return 0;
}