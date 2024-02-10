#include <stdio.h>
#include <string.h>

int main() {
  //           0  1  2  3  4  5  6  7  8  9
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  memmove(&a[0], &a[5], sizeof(int) * 5);
  for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  //             123456
  char str[6] = "ABCDEF";
  printf("The string: %s\n", str);

  memmove(str, str + 3, sizeof(char) * 3);
  printf("The string: %s\n", str);

  return 0;
}