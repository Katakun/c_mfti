#include <stdio.h>

int main() {
  int c, c0 = 0, c1 = 0, c2 = 0, c3 = 0;

  // читаем и считаем шары
  while (1 == scanf("%d", &c)) {
    switch (c) {
      case 0:
        c0++;
        break;
      case 1:
        c1++;
        break;
      case 2:
        c2++;
        break;
      case 3:
        c3++;
        break;
      default:
        printf("Error: unknown color %d\n", c);
    }
  }
  printf("0 %d\n", c0);
  printf("1 %d\n", c1);
  printf("2 %d\n", c2);
  printf("3 %d\n", c3);
}