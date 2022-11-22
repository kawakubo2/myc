#include <stdio.h>

static int last_days[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int is_leap_year(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

void decrement_date(int *y, int *m, int *d)
{
    if (*d == 1) {
        if (*m == 1) {
            (*y)--;
            *m = 12;
            *d = 31;
        } else {
            int leap_year = is_leap_year(*y);
            (*m)--;
            *d = last_days[leap_year][*m];
        }
    } else {
        (*d)--;
    }
}
void increment_date(int *y, int *m, int *d)
{
    int last_day = last_days[is_leap_year(*y)][*m];
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
    puts("--- increment_dateテスト ---");
    int y = 2019, m = 12, d = 31;
    for (int i = 0; i <= 367; i++) {
        printf("%d-%d-%d\n", y, m, d);
        increment_date(&y, &m, &d);
    }
    puts("--- decrement_dateテスト ---");
    y = 2023, m = 1, d = 1;
    for (int i = 0; i <= 367; i++) {
        printf("%d-%d-%d\n", y, m, d);
        decrement_date(&y, &m, &d);
    }

    return 0;
}