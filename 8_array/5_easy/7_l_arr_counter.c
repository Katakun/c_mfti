#include <stdio.h>
#define N 1000

int main() {
  int n, i;
  int a[N];
  int c0 = 0;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;
  int c5 = 0;
  int c6 = 0;
  int c7 = 0;
  int c8 = 0;
  int c9 = 0;

  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  for (i = 0; i < n; i++) {
    switch (a[i]) {
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
      case 4:
        c4++;
        break;
      case 5:
        c5++;
        break;
      case 6:
        c6++;
        break;
      case 7:
        c7++;
        break;
      case 8:
        c8++;
        break;
      case 9:
        c9++;
        break;
      default:
        break;
    }
  }
  printf("%d %d\n", 0, c0);
  printf("%d %d\n", 1, c1);
  printf("%d %d\n", 2, c2);
  printf("%d %d\n", 3, c3);
  printf("%d %d\n", 4, c4);
  printf("%d %d\n", 5, c5);
  printf("%d %d\n", 6, c6);
  printf("%d %d\n", 7, c7);
  printf("%d %d\n", 8, c8);
  printf("%d %d\n", 9, c9);
  return 0;
}