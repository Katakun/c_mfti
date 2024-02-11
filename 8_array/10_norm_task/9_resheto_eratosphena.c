#include <stdio.h>
#include <string.h>

int main() {
  int N = 10;
  scanf("%d", &N);
  int prime[N];
  memset(prime, 0, sizeof(prime));

  for (int i = 0; i < N; i++) {
    printf("prime[%d] = %d\n", i, prime[i]);
  }

  return 0;
}