#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n + 1][n + 1];
  memset(arr, 0, sizeof(arr));
  arr[0][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      if (j > 0) {
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      } else {
        arr[i][j] = 1;
      }
    }
  }

  printf("\nOne line:\n");
  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[n][i]);
  }

  printf("\n\nTriangle of Pascale:\n");
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}