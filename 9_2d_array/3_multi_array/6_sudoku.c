#include <stdio.h>

int check_square(int a[9][9], int i0, int j0);

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
  return 0;
}