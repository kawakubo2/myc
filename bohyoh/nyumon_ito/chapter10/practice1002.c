#include <stdio.h>

int get_last_day(int month, int leap_year) {
    int last_days[][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };
    return last_days[leap_year][month];
}

int get_day_of_week(int year, int month, int day) {
    if (month < 3) {
        year--;
        month += 12;
    }
    return (year + year / 4 - year / 100 + year / 400 + \
        (13 * month + 8) / 5 + day) % 7;
}

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 100) || year % 400 == 0;
}

void decrement_date(int *y, int *m, int *d)
{
    if (*d == 1) {
        if (*m == 1) {
            (*y)--;
            *m = 12;
            *d = 31;
        } else {
            (*m)--;
            *d = get_last_day(*m, is_leap_year(*y));
        }
    } else {
        (*d)--;
    }
}

void increment_date(int *y, int *m, int *d)
{
    if (get_last_day(*m, is_leap_year(*y)) == *d) {
        if (*m == 12) {
            (*y)++;
            *m = 1;
            *d = 1;
        } else {
            (*m)++;
            *d = 1;
        }
    } else {
        (*d)++;
    }
}

void print_header(int year, int month) 
{
    printf("      %d年%02d月\n", year, month);
    printf(" 日 月 火 水 木 金 土\n");
}

void print_month(int year, int month) 
{
    int old_month = month;
    int i, day = 1;
    print_header(year, month);
    // 1日が日曜日ではない場合に空白で埋める
    int wd = get_day_of_week(year, month, 1);
    for (i = 0; i < wd; i++) {
        printf("   ");
    }
    int last_day = get_last_day(month, is_leap_year(year));
    while (old_month == month) {
        printf(" %2d", day);
        if (get_day_of_week(year, month, day) == 6) { // 6は土曜日
            putchar('\n');
        }
        increment_date(&year, &month, &day);
    }
    putchar('\n');
}

int main(void)
{
    int year, month;
    printf("年: "); scanf("%d", &year);
    printf("月: "); scanf("%d", &month);
    print_month(year, month);
    return 0;
}