#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // открыть файл data.txt на чтение - поток fin
  FILE* fin = fopen("data.txt", "r");
  if (fin == NULL) {
    perror("data.txt");
    exit(errno);
  }

  // открыть файл out.txt на запись - поток fout
  FILE* fout = fopen("out.txt", "w");

  char c;
  while ((c = fgetc(fin)) != EOF) {
    putc(c, fout);
  }

  fclose(fin);  // закрываем открытые нами потоки
  fclose(fout);

  return 0;
}