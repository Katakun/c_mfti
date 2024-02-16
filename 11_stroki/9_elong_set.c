#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

typedef struct {
  char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
  unsigned int n;  // наибольшая степень десяти
} Decimal;

void elong_set(Decimal* res, const char str[]) {
  res->n = 0;
  memset(res->a, 0, sizeof(res->a));
  int n = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    res->a[i] = str[i];
    n++;
  }
  res->n = n;
}

void elong_print(Decimal elong) {
  for (int i = elong.n; i >= 0; i--) {
    printf("%d", elong.a[i]);
  }
  printf("\n");
}

int main() {
  Decimal res;
  // elong_set(&res, "12345678901234567890");  // res = 12345678901234567890
  elong_set(&res, "12345");

  elong_print(res);  // print 12345678901234567890

  return 0;
}