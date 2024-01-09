#include <stdio.h>

typedef struct {
    int yy;   // год
    char mm;  // месяц
    char dd;  // день
} Data;

typedef struct {
    int yy;       // год
    char season;  // время года (зима - 0, весна - 1, лето - 2, осень - 3)
    int day;      // день от начала текущего времени года
} Season;

// получает параметры даты с консоли (три целых числа через тире:
// YYYY-MM-DD)
// Например, 2020-12-13
Data getData();

// Печатает дату в формате: YYYY-MM-DD завершая переносом строки (\n)
void printData(Data);

// конвертирует дату в формат Season и возвращает это значение
// зима с 1 декабря по конец февраля, весна - с 1 марта по 31 мая,
// лето - с 1 июня по 31 августа, осень - с 1 сентября по 30 ноября
Season convToSeas(Data);

//  печать времени года в формате: YYYY-SS-DD (SS - номер времени года,
// DD - день от начала времени года, завершая переносом строки
void printSeas(Season);

int main() {
    Data dat;
    Season seas;
    dat = getData();
    printData(dat);
    seas = convToSeas(dat);
    printSeas(seas);

    return 0;
}

Data getData() {
    int yy;
    char mm, dd;
    scanf("%d-%d-%d", &yy, &mm, &dd);
    Data data = {yy, mm, dd};
    return data;
}

void printData(Data data) { printf("%d-%d-%d", data.yy, data.mm, data.dd); }

Season convToSeas(Data data) {
    Season season;
    season.yy = data.yy;

    if (data.mm < 3) {
        season.season = 0;  // зима
    } else if (data.mm < 6) {
        season.season = 1;  // весна
    } else if (data.mm < 9) {
        season.season = 2;  // лето
    } else if (data.mm < 12) {
        season.season = 3;  // осень
    }

    if (season.season == 0) {
        if (data.mm == 12) {
            season.day = data.dd;
        } else if (data.mm == 0) {
            season.day = 31 + data.dd;
        } else if (data.mm == 1) {
            season.day = 31 + 31 + data.dd;
        }
    }

    if (season.season == 1) {
        if (data.mm == 3) {
            season.day = data.dd;
        } else if (data.mm == 4) {
            season.day = 31 + data.dd;
        } else if (data.mm == 5) {
            season.day = 31 + 30 + data.dd;
        }
    }

    if (season.season == 2) {
        if (data.mm == 6) {
            season.day = data.dd;
        } else if (data.mm == 7) {
            season.day = 30 + data.dd;
        } else if (data.mm == 8) {
            season.day = 30 + 31 + data.dd;
        }
    }

    if (season.season == 3) {
        if (data.mm == 9) {
            season.day = data.dd;
        } else if (data.mm == 10) {
            season.day = 30 + data.dd;
        } else if (data.mm == 11) {
            season.day = 30 + 31 + data.dd;
        }
    }

    return season;
}

void printSeas(Season s) { printf("%04d-%02d-%02d/n", s.yy, s.season, s.day); }