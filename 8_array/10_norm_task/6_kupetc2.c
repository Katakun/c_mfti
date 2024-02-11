#include <stdio.h>

int delim(int a[], int i, int j);
// Функция делит конфеты детей a[i] и a[j].
// Отдает школьнику (return) лишние конфеты.

int all_equal(int a[], int n);
// Проверяет, все ли числа в массиве a одинаковые.
// Возвращает 1 (все одинаковые) или 0 (не все)
// вы писали раньше такую задачу

int make_all_happy(int a[], int n);
// Дети делят конфеты, "лишние" конфеты возвращают

int main() {
    int a[100];  // ребенок i имеет a[i] конфет
    int n;       // всего детей

    scanf("%d", &n);  // читаем входные данные
    for (int i = 0; i < n; i++) scanf("%d", a + i);

    int schoolboy = make_all_happy(a, n);  // делим
    printf("%d %d\n", schoolboy, a[0]);    // печатаем ответ

    return 0;
}

int delim(int a[], int i, int j) {
    int sum = a[i] + a[j];
    a[i] = sum / 2;
    a[j] = sum / 2;
    return sum % 2;
}

int all_equal(int a[], int n) {
    int equal = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1]) {
            equal = 0;
            break;
        }
    }
    return equal;
}

int make_all_happy(int a[], int n) {
    int res = 0;
    int i = 0;
    while (!all_equal(a, n)) {
        res += delim(a, i, (i + 1) % n);
        i == n - 1 ? i = 0 : i++;
    }
    return res;
}