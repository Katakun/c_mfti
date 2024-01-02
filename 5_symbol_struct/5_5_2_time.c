#include <stdio.h>

// Объявляем новый тип данных struct Time:
struct Time {
    int h;  // часы
    int m;  // минуты
};

void print_time(struct Time t);  // печать hh:mm

int time2min(struct Time t);                      // h, m -> mm
struct Time min2time(int mm);                     // mm -> h, m
struct Time add(struct Time t1, struct Time t2);  // t1 + t2

int main() {
    struct Time t1 = {22, 55};
    struct Time dt = {2, 7};
    struct Time t2, expected_res = {1, 2};

    print_time(t1);
    print_time(dt);

    t2 = add(t1, dt);
    print_time(t2);

    return 0;
}

// печать hh:mm
void print_time(struct Time t) { printf("%02d:%02d\n", t.h, t.m); }

// h, m -> mm
int time2min(struct Time t) {
    int res;
    res = t.h * 60 + t.m;
    return res;
}

// mm -> h, m
struct Time min2time(int mm) {
    struct Time res;
    res.m = mm % 60;
    res.h = mm / 60 % 24;
    return res;
}

// t1 + t2
struct Time add(struct Time t1, struct Time t2) {
    int mmres = time2min(t1) + time2min(t2);
    struct Time res = min2time(mmres);
    return res;
}