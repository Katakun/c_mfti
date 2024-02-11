#include <stdio.h>
#include <string.h>

void print_arr(char *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] != 45)
      printf("%d ", arr[i]);
    else
      printf("%c ", arr[i]);
  }
  printf("\n");
}

void print_res(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] != 0) printf("%d ", arr[i]);
  }
  printf("\n");
}

void scan_arr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
}

int main() {
  int N = 10;
  scanf("%d", &N);
  int prime[N];
  scan_arr(prime, N);

  // вычеркиваем 2
  for (int i = 0; i < N; i++) {
    if (prime[i] % 2 == 0) prime[i] = 0;
  }

  // вычеркиваем 3
  for (int i = 0; i < N; i++) {
    if (prime[i] % 3 == 0) prime[i] = 0;
  }

  // вычеркиваем 5
  for (int i = 0; i < N; i++) {
    if (prime[i] % 3 == 0) prime[i] = 0;
  }

  print_res(prime, N);
  return 0;
}