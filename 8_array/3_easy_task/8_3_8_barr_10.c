#include <stdio.h>
#define N 5

int main() {
  int a[N];  // коробка с ячейками
  int i;     // номер текущей ячейки

  // читаем N чисел в массив a
  for (i = 0; i < N; i++) scanf("%d", &a[i]);

  int sum = 0;  // для суммы (количество) всех шариков

  for (int i = 0; i < N; i++) sum += a[i];

  printf("%d\n", sum);  // печатаем сумму

  return 0;
}