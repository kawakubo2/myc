#include <stdio.h>

static int last_days[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int is_leap_year(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int get_day_of_week(int y, int m, int d) {
    return (365 * y + y / 4 - y / 100 + y / 400 + 306 * (m + 1) / 10 + d - 428) % 7;
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
    int year, month, day;
    printf("年: "); fscanf(stdin, "%d", &year);
    printf("月: "); fscanf(stdin, "%d", &month);
    printf("日: "); fscanf(stdin, "%d", &day);

    printf("%d\n", get_day_of_week(year, month, day));

    return 0;
}