#include <stdio.h>
#define N 1000

int main() {
  int a[N];
  int i, n, k;
  int res = -1;

  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("%d", &k);
  for (i = 0; i < n; i++) {
    if (k == a[i]) {
      res = i;
      break;
    }
  }
  printf("%d\n", res);
  return 0;
}