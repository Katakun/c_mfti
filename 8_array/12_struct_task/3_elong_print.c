#include <math.h>
#include <stdio.h>
#define N 100

typedef struct {
  char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
  unsigned int n;  // наибольшая степень десяти
} Decimal;

void elong_print(Decimal n);

int main() {
  Decimal x = {{7, 4, 1}, 2};  // число 147
  // число 0 представим как 0 умножить на 10 в степени 0
  Decimal zero = {{0}, 0};

  elong_print(x);     // 147
  elong_print(zero);  // 0

  return 0;
}

void elong_print(Decimal elong) {
  for (int i = elong.n; i >= 0; i--) {
    printf("%d", elong.a[i]);
  }
  printf("\n");
}
