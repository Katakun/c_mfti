#include <stdio.h>
#define N 10

int main() {
  int a[N];
  for (int i = 0; i < N; i++) scanf("%d", &a[i]);
  int k, n;
  scanf("%d %d", &k, &n);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (k <= i && i < n) {
      sum += a[i];
    }
  }
  printf("%d\n", sum);
  return 0;
}