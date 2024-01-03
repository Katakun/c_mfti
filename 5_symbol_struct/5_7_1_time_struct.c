#include <stdio.h>

typedef struct {
    int h;    // часы
    int min;  // минуты (от 0 до 59)
} TicTac;

// получает показание часов a и возвращает показание этих часов
// через min минут, .
TicTac after(TicTac a, int min);

// "переводит" вперед стрелки этих часов (me)
// на a.h часов и a.min минут
void forward(TicTac* me, TicTac a);

// "переводит" назад стрелки этих часов (me)
// на a.h часов и a.min минут
void backward(TicTac* me, TicTac a);

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b);

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a);

int time2min(TicTac time);

TicTac min2time(int min);

int main() {
    TicTac a, b, c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n", isEqualTime(a, b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}

// получает показание часов a и возвращает показание этих часов
// через min минут, .
TicTac after(TicTac a, int min) {
    int a_min = time2min(a);
    int res_min = a_min + min;
    return min2time(res_min);
}

// "переводит" вперед стрелки этих часов (me)
// на a.h часов и a.min минут
void forward(TicTac* me, TicTac a) {
    int me_min = time2min(*me);
    int a_min = time2min(a);
    int res_min = me_min + a_min;
    TicTac res = min2time(res_min);
    me->h = res.h;
    me->min = res.min;
}

// "переводит" назад стрелки этих часов (me)
// на a.h часов и a.min минут
void backward(TicTac* me, TicTac a) {
    int me_min = time2min(*me);
    int a_min = time2min(a);
    int res_min = me_min - a_min;
    if (res_min < 0) {
        res_min = res_min + 720;
    }

    TicTac res = min2time(res_min);
    me->h = res.h;
    me->min = res.min;
}

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b) {
    int res = 0;
    if (a.h == b.h && a.min == b.min) {
        res = 1;
    }
    return res;
}

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a) { printf("%02d:%02d\n", a.h, a.min); }

int time2min(TicTac time) {
    int minutes = time.h * 60 + time.min;
    return minutes;
}

TicTac min2time(int min) {
    TicTac res;
    res.h = min / 60 % 12;
    res.min = min % 60;
    return res;
}