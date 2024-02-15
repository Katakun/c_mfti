#include <stdio.h>

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

void sum_matrix(int n, int m, int arr1[][m], int arr2[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr1[n][m];
  int arr2[n][m];

  scan_matrix(n, m, arr1);
  scan_matrix(n, m, arr2);
  sum_matrix(n, m, arr1, arr2);
  return 0;
}