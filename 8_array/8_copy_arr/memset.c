#include <stdio.h>
#include <string.h>

int main() {
  int a[] = {3, 7, -12, 4};
  int b[10] = {1};

  memset(b, 0, sizeof(b));  // заполняет массив b нулями

  return 0;
}