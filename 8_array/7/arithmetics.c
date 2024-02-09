#include <stdio.h>

int main() {
  int a[5];
  int* p0;
  int* p3;

  p0 = &a[0];
  p3 = &a[3];

  printf("size of a =  %zu\n", sizeof(a));
  printf("size of p0 =  %zu\n", sizeof(p0));

  printf("p0 = %p p3 = %p \n", p0, p3);

  p0 = a;
  p3 = p0 + 3;
  printf("p0 = %p p3 = %p \n", p0, p3);

  return 0;
}