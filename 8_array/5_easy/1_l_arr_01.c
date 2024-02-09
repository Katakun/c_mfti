#include <stdio.h>
#define N 1000
int main() {
  int a[N];  // массив для N чисел
  int i;     // номер текущей ячейки
  int n;     // сколько чисел дано

  scanf("%d", &n);
  // читаем n чисел в массив a
  for (i = 0; i < n; i++) scanf("%d", &a[i]);

  // печатаем числа
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
  // печатаем числа еще раз
  for (i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
  return 0;
}