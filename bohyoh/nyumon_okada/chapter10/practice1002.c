#include <stdio.h>

static int last_days[2][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};

int leap_year(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

void increment_date(int *y, int *m, int *d)
{
    int last_day = last_days[leap_year(*y)][*m];
    if (*d == last_day) {
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
    int i;
    int year, month, day;
    printf("年月日を入力してください(例:2020-05-09) : ");
    scanf("%d-%d-%d", &year, &month, &day);

    for (i = 0; i < 368; i++) {
        increment_date(&year, &month, &day);
        printf("%d-%2d-%2d\n", year, month, day);
    }

    return 0;
}

