#include <stdio.h>

static int last_days[][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int is_leap_year(int year) 
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int day_of_week(int year, int month, int day)
{
    return (day + (26 * (month + 1) / 10) + year + (year / 4) - 2 * (year / 100) + year / 400) % 7;
}

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
    if (last_days[is_leap_year(*year)][*month] == *day) {
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
    puts("increment_dateテスト");
    int year = 2023;
    int month = 12;
    int day = 31;
    for (int i = 0; i < 367; i++) {
        increment_date(&year, &month, &day);
        printf("%4d-%02d-%02d\n", year, month, day);
    }

    puts("\n\ndecrement_dateテスト");
    year = 2025;
    month = 1;
    day = 1;
    for (int i = 0; i < 367; i++) {
        decrement_date(&year, &month, &day);
        printf("%4d-%02d-%02d\n", year, month, day);
    }
    return 0;
}

