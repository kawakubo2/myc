#include <stdio.h>

static int months[][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};
int is_leap_year(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int valid_date(int y, int m, int d)
{
    int end_of_month;
    if (y < 0) return 0;
    if (m < 1 || m > 12) return 0;
    end_of_month = months[is_leap_year(y)][m];
    if (d > end_of_month || d < 1) return 0;
    return 1;
}

void decrement_date(int *y, int *m, int *d)
{
    if (*d == 1) {
        if (*m == 1) {
            *y -= 1;
            *m = 12;
            *d = 31;
        } else {
            *m -= 1;
            *d = months[is_leap_year(*y)][*m];
        }
    } else {
        *d -= 1;
    }
}

void increment_date(int *y, int *m, int *d)
{
    int end_of_month = months[is_leap_year(*y)][*m];
    if (*d == end_of_month) {
        if (*m == 12) {
            *y += 1;
            *m = 1;
            *d = 1;
        } else {
            *m += 1;
            *d = 1;
        }
    } else {
        *d += 1;
    }
}

int main(void)
{
    puts("------< increment_dateテスト >------");
    int i, year = 2020, month = 1, day = 1;
    for (i = 1; i <= 731; i++) {
        printf("%4d年%2d月%2d日\n", year, month, day);
        increment_date(&year, &month, &day);
    }
    
    puts("------< decrement_dateテスト >------");
    year = 2021, month = 12, day = 31;
    for (i = 1; i <= 731; i++) {
        printf("%4d年%2d月%2d日\n", year, month, day);
        decrement_date(&year, &month, &day);
    }
    return 0;
}

