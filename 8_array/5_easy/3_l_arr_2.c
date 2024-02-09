#include <stdio.h>
#define N 1000

int main() {
  int a[N];
  int n;
  int i;
  int x;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("%d", &x);

  for (i = 0; i < n; i++) {
    if (x == a[i]) {
      printf("%d ", i);
      break;
    }
  }
}