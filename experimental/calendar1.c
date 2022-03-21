#include <stdio.h>
#define NEXT 1
#define PREV 2
#define MONTHS 12
#define YMD 3

int month_ends[][MONTHS + 1] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};

int is_leap_year(int year) {
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int is_valid_date(int y, int m, int d)
{
    int n = is_leap_year(y);
    if (m > MONTHS || d > month_ends[n][m]) {
        printf("%d年%d月%d日は暦上存在しません。\n", y, m, d);
        return 0;
    }
    return 1;
}

int decrement_date(int *y, int *m, int *d)
{
    int n; // うるう年:1 うるう年でない:0
    int prev_month_end;
    if (!is_valid_date(*y, *m, *d)) {
        return 0;
    }
    n = is_leap_year(*y);
    if (*d == 1) {
        if (*m == 1) {
            (*y)--;
            *m = 12;
        } else {
            (*m)--;
        }
        *d = month_ends[n][*m];
    } else {
        (*d)--;
    }
    return 1;
}

int increment_date(int *y, int *m, int *d)
{
    int n; // うるう年:1 うるう年でない:0
    if (!is_valid_date(*y, *m, *d)) {
        return 0;
    }
    n = is_leap_year(*y);
    if (*d == month_ends[n][*m]) { // 月末判定
        if (*m == 12) {
            (*y)++;
            *m = 1;
        } else {
            (*m)++;
        }
        *d = 1;
    } else {
        (*d)++;
    }
    return 1;
}

void test(int days[][YMD], int size, int sw, char *desc1, char *desc2)
{
    printf("\n===< %s >===\n", desc1);
    printf("---< %s >---\n", desc2);
    int i, j, result, year, month, day;
    for (i = 0; i < size; i++) {
        year = days[i][0];
        month = days[i][1];
        day = days[i][2];
        printf("%d年%02d月%02d日 ---> ", year, month, day);
        if (sw == NEXT) {
            if (increment_date(&year, &month, &day)) {
                printf("%d年%02d月%02d日\n", year, month, day);
            } else {
                putchar('\n');
            }
        } else if (sw == PREV) {
            if (decrement_date(&year, &month, &day)) {
                printf("%d年%02d月%02d日\n", year, month, day);
            } else {
                putchar('\n');
            }
        }
    }

}

int get_day_of_week( int year, int month, int day )
{
    if( month < 3 ) {
        year--;
        month += 12;
    }
    return (year + year / 4 - year / 100 + year / 400 +\
		 (13 * month + 8) / 5 + day) % 7;
}

char *get_day_of_week_ja(int wday)
{
    char *wday_name;
    char *weekdays[] = {
            "日", "月", "火", "水", "木", "金", "土"
    };
    wday_name = (char *)weekdays[wday];
    // printf("wday=%d wday_name=%s\n", wday, wday_name);
    return wday_name;
}

void prmonth(int year, int month)
{
    int i, padding, init_month = month, day = 1;
    char *format;
    printf("     %d年%d月    \n", year, month);
    printf("日 月 火 水 木 金 土\n");
    int wday = get_day_of_week(year, month, day);
    for (padding = 0; padding < wday; padding++) {
    format = padding == 0 ? "%2s": "%3s";
        printf(format, " ");
    }
    while (init_month == month) {
        format = wday == 0 ? "%2d": "%3d";
        printf(format, day);
        if (wday == 6) {
            printf("\n");
        }
        increment_date(&year, &month, &day);
        wday = get_day_of_week(year, month, day);
    }
    putchar('\n');
}

int main(void)
{
    // printf("%s曜日\n", get_day_of_week_ja(6));
    int init_year, year, month, day, count = 0;
    printf("カレンダーを表示します。\n年と月を整数で入力してください:");
    scanf("%d %d", &year, &month);

    prmonth(year, month);

    return 0;
}

