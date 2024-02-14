#include <stdio.h>
#define ROWS 3
#define COLS 3

int sum_row(int arr[ROWS][COLS], int row) {
  int sum = 0;
  for (size_t i = 0; i < COLS; i++) {
    sum += arr[row][i];
  }
  return sum;
}

int sum_col(int arr[ROWS][COLS], int col) {
  int sum = 0;
  for (size_t i = 0; i < ROWS; i++) {
    sum += arr[i][col];
  }
  return sum;
}

int sum_diag(int arr[ROWS][COLS]) {
  int sum = 0;
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      if (i == j) {
        sum += arr[i][j];
      }
    }
  }
  return sum;
}

int sum_diag2(int arr[ROWS][COLS]) {
  int sum = 0;
  for (size_t i = 0; i < ROWS; i++) {
    int j = i - 2;
    if (j < 0) j *= -1;
    sum += arr[i][j];
  }
  return sum;
}

int main() {
  int square[ROWS][COLS];

  // читаем матрицу
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      scanf("%d", &square[i][j]);
    }
  }

  // вывод матрицы
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      printf("%d ", square[i][j]);
    }
    printf("\n");
  }

  printf("sum_diag2 = %d\n", sum_diag2(square));

  return 0;
}