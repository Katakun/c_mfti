#include <stdio.h>
#define N 100

typedef struct {
  char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
  unsigned int n;  // наибольшая степень десяти
} Decimal;

void elong_print(Decimal n);
Decimal add(Decimal x, Decimal y);

int main() {
  Decimal x = {{0, 9, 8, 7, 6, 5, 4, 3, 2, 1}, 9};  // set number 1234567890
  Decimal y = {{5, 2, 3}, 2};                       // set number        325
  // Decimal x = {{9, 9}, 1};  // set number 1234567890
  // Decimal y = {{1}, 0};     // set number        325
  Decimal res;

  res = add(x, y);   // res = x+y = 1234567890+325 = 1234568215
  elong_print(res);  // print 1234568215
  return 0;
}

Decimal add(Decimal p1, Decimal p2) {
  unsigned int i;
  int x = 0;
  int e = 0;

  Decimal a, b, res;
  if (p1.n > p2.n) {
    a = p1, b = p2;
  } else {
    b = p1, a = p2;
  }
  for (i = 0; i <= a.n; i++) {
    // int eold = e;
    if (i <= b.n) {
      x = e + a.a[i] + b.a[i];
    } else {
      x = e + a.a[i];
    }
    res.a[i] = x % 10;
    e = x / 10;

    // res.n = i;
    // elong_print(res);
    // printf("i=%d a.n=%d b.n=%d eold=%d a=%d b=%d x=%2d res=%d e=%d\n", i,
    // a.n,
    //        b.n, eold, a.a[i], b.a[i], x, res.a[i], e);
  }
  if (e > 0) {
    res.a[i] = e;
    res.n = i;
  } else {
    res.n = i - 1;
  }
  return res;
}

Decimal add0(Decimal x1, Decimal y1) {
  Decimal sum = {{0}, 0};
  Decimal x = {{0}, 0};
  Decimal y = {{0}, 0};
  if (x1.n >= y1.n) {
    x = x1, y = y1;
  } else {
    x = y1, y = x1;
  }
  sum.n = x.n;
  char reminder = 0;
  for (unsigned int i = 0; i <= x.n; i++) {
    if (i <= y.n && (x.a[i] + y.a[i] + reminder) < 10) {
      sum.a[i] = x.a[i] + y.a[i] + reminder;
      reminder = 0;
    } else if (i <= y.n) {
      sum.a[i] = (x.a[i] + y.a[i] + reminder) - 10;
      reminder = 1;
    }
    if (i > y.n && x.a[i] + reminder < 10) {
      sum.a[i] = x.a[i] + reminder;
      reminder = 0;
    } else if (i > y.n && x.a[i] + reminder >= 10) {
      sum.a[i] = x.a[i] + reminder - 10;
      reminder = 1;
    }
  }
  if (reminder > 0) {
    sum.n += 1;
    sum.a[sum.n] += 1;
  }
  return sum;
}

void elong_print(Decimal elong) {
  for (int i = elong.n; i >= 0; i--) {
    printf("%d", elong.a[i]);
  }
  printf("\n");
}