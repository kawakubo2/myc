#include <stdio.h>
#include <stdlib.h>

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

void print_year_month(int year, int month)
{
    printf("      %d年%d月        \n", year, month);
}

void print_youbi(char *youbi[], int size, int first_day_of_week)
{
    int d = first_day_of_week;
    for (int i = 0; i < size; i++) {
        printf("%s ", youbi[d]);
        d = (d + 1) % size;
    }
    printf("\n");
}

void print_day(int year, int month, int size, int first_day_of_week)
{
    int last_day_of_week = (first_day_of_week - 1 + size) % size;
    int d = get_day_of_week(year, month, 1);
    int padding = (d - first_day_of_week + size) % size;
    for (int i = 0; i < padding; i++) {
        printf("   ");
    }
    int last_day = last_days[is_leap_year(year)][month];
    int day = 1;
    for (int i = 1; i <= last_day; i++) {
        printf("%2d ", day);
        if (get_day_of_week(year, month, day) == last_day_of_week) {
            printf("\n");
        }
        increment_date(&year, &month, &day);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int year, month, first_week_of_day = 0;
    if (argc != 3 && argc != 4) {
        puts("使用法) calendar 年 月 [開始曜日 0:日 1:月 2:火 3:水 4:木 5:金 6:土]");
        puts("例) calendar 2024 11 1 (開始曜日を省略した場合日曜に始まり)");
        return -1;
    }
    year = atoi(argv[1]);
    month = atoi(argv[2]);
    if (argc == 4) {
        first_week_of_day = atoi(argv[3]);
    }

    // 見出し
    print_year_month(year, month);
    char *youbi[] = { "日", "月", "火", "水", "木", "金", "土" };
    print_youbi(youbi, 7, first_week_of_day);
    // 日付
    print_day(year, month, 7, first_week_of_day);

    return 0;
}