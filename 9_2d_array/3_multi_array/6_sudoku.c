#include <stdbool.h>
#include <stdio.h>

bool check_square_yes(int a[9][9], int row, int col) {
  bool result = true;
  int nums[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = row; i < row + 3; i++) {
    for (int j = col; j < col + 3; j++) {
      int index = a[i][j];
      if (nums[index] == 0) {
        nums[index] = 1;
      } else {
        result = false;
        break;
      }
    }
  }
  return result;
}

bool check_sudoku(int a[9][9]) {
  bool result = true;
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      if (!check_square_yes(a, i, j)) {
        result = false;
      }
    }
  }
  return result;
}

void scan_matrix(int n, int m, int arr[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
}

void print_matrix(int n, int m, int arr[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n = 9;
  int m = 9;
  int arr[n][m];
  scan_matrix(n, m, arr);
  print_matrix(n, m, arr);
  check_sudoku(arr) ? printf("YES\n") : printf("NO\n");
  return 0;
}