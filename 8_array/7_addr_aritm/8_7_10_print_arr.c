#include <stdio.h>

// от адреса a печатаем n чисел
void print_arr(int* a, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
int main() {
  int b[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 10};
  print_arr(b, 10);     // печатаем весь массив
  print_arr(b, 7);      // печатаем первые 7 чисел
  print_arr(b + 3, 7);  // печатаем последние 7 чисел
  print_arr(b + 3, 4);  // печатаем от -4 до 7

  return 0;
}