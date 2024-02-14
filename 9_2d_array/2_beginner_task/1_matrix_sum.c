#include <stdio.h>

#define ROWS 3
#define COLS 3

int sum_all(int a[ROWS][COLS]) {
  int sum = 0;
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}

int sum_row(int a[3][3], int irow) {
  int sum = 0;
  for (size_t i = 0; i < COLS; i++) {
    sum += a[irow][i];
  }
  return sum;
}

int main() {
  int matrix[ROWS][COLS];

  // чтение массива
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("%d\n", sum_row(matrix, 1));
}