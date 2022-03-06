#include <stdio.h>

static int last_months[2][13] =
{
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};


int is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 100) || year % 400 == 0;
}

int get_last_day(int year, int month)
{
    return last_months[is_leap(year)][month];
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
            *d = get_last_day(*y, *m);
        }
    } else {
        (*d)--;
    }
}

void increment_date(int *y, int *m, int *d)
{
    if (*d == get_last_day(*y, *m)) {
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

int main(void)
{
    int i, year, month, date;
    printf("年月日を入力してください(例:2020-12-9) :");
    scanf("%d-%d-%d", &year, &month, &date);
    for (i = 0; i <= 367; i++) {
        printf("%4d-%2d-%2d\n", year, month, date);
        increment_date(&year, &month, &date);
    }
    return 0;
}

