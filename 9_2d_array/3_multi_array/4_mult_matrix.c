#include <stdio.h>

void number_mult(int k, int rows, int cols, int a[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", a[i][j] * k);
    }
    printf("\n");
  }
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int k;
  scanf("%d", &k);
  number_mult(k, n, m, arr);

  return 0;
}