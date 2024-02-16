#include <stdio.h>
#include <string.h>

int main() {
  // что такое строка
  // char a[10] = {'a', 'b', '\0'};
  // char* a2 = "hello";

  // одинаковые массивы
  // char b1[6] = {'w', 'o', 'r', 'l', 'd', '\0'};
  // размер вычисляется автоматом
  // char b2[] = {'w', 'o', 'r', 'l', 'd', '\0'};
  // char b3[] = "world";

  // Массив или указатель?
  char s1[] = "world";  // массив из 6 символов
  // указывает на строковую константу"world" в read-onlyпамяти
  char* s2 = "world";                        // 1 указатель на char
  printf("sizeof(s1) = %lu\n", sizeof(s1));  // 6
  printf("sizeof(s2) = %lu\n", sizeof(s2));  // 8
  s1[0] = 'H';  // заменит первый символ в массиве
  // s2[0] = 'W';  // segmen. fault, нельзя писать в read only память

  // Не сравнивайте строки
  char b1[] = "world";
  char b2[] = "world";
  if (b1 == b2) {  // сравниваются адреса начала массивов
    printf("равны\n");
  } else {
    printf("НЕ равны\n");
  }
  if (0 == strcmp(b1, b2)) {
    printf("равны\n");
  } else {
    printf("НЕ равны\n");
  }

  // Равенство адресов и содержимого
  char s1[] = "world";  // путсь в s1 расположен начиная с адреса 100
  char* s2 = "world";  // пусть в s2 лежит число 200
  char* p = s1;        // в p лежит число 100
}