#include <stdio.h>

static int last_days[][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

// char wod[][3] = {"", "Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};
char *dow[] = {"日", "月", "火", "水", "木", "金", "土"};

int is_leap_year(int year) 
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

/*
TODO 曜日が正常に表示されない。年をまたぐと同じ曜日になる。
int day_of_week(int year, int month, int day)
{
    // return (365 * year + year / 4 - year / 100 + year / 400 + 306 * (month + 1) / 10 + day - 428) % 7;
    return (year + year / 4 - year / 100 + year / 400 + (month * 13 + 8) / 5 + day) % 7;
}
*/

void decrement_date(int *year, int *month, int *day)
{
    if (*day == 1) {
        if (*month == 1) {
            *year -= 1;
            *month = 12;
            *day = 31;
        } else {
            *month -= 1;
            *day = last_days[is_leap_year(*year)][*month];
        }
    } else {
        *day -= 1;
    }
}

void increment_date(int *year, int *month, int *day)
{
    if (*day == last_days[is_leap_year(*year)][*month]) {
        if (*month == 12) {
            *year += 1;
            *month = 1;
            *day = 1;
        } else {
            *month += 1;
            *day = 1;
        }
    } else {
        *day += 1;
    }
}

int main(void)
{
    puts("---< increment_dateテスト >---");
    int year = 2020;
    int month = 12;
    int day = 30;
    for (int i = 0; i < 368; i++) {
        increment_date(&year, &month, &day);
        printf("%4d-%02d-%02d\n", year, month, day);
    }

    puts("\n\n---< decrement_dateテスト >---");
    year = 2025;
    month = 1;
    day = 2;
    for (int i = 0; i < 368; i++) {
        decrement_date(&year, &month, &day);
        printf("%4d-%02d-%02d\n", year, month, day);
    }

    return 0;
}

