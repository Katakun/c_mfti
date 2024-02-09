#include <stdio.h>
#define N 1000

int main() {
  int n, i;
  int a1[N];
  int a2[N];
  scanf("%d", &n);

  for (i = 0; i < n; i++) scanf("%d", &a1[i]);
  for (i = 0; i < n; i++) scanf("%d", &a2[i]);
  for (i = 0; i < n; i++) printf("%d ", a1[i] + a2[i]);

  return 0;
}