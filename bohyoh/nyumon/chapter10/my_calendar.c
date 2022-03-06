#include <stdio.h>
#include <time.h>
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

int get_day_of_week(int year, int month, int day)
{
    struct tm time_in, *local;
    time_t t;

    /* 年月日を入力 */
    time_in.tm_year = year - 1900; /* 年 */
    time_in.tm_mon  = month - 1; /* 月 */
    time_in.tm_mday = day; /* 日 */

    /* 時分秒曜日を適当に入力 */
    time_in.tm_hour = 1; /* 時 (適当に入力)  */
    time_in.tm_min  = 0; /* 分 (適当に入力)  */
    time_in.tm_sec  = 0; /* 秒 (適当に入力)  */
    time_in.tm_wday = 0; /* 曜日 (適当に入力) */
    time_in.tm_yday = 0; /* 1月1日からの日数 (適当に入力) */

    /* mktime 関数で変換 */
    if ( (t = mktime(&time_in) ) == (time_t)(-1) ) {
        return -1;
    }
	/* 地方時に変換 */
    local = localtime(&t);

    return local->tm_wday;
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

int main(void)
{
	int init_year, year, month, day, count = 0;
	printf("カレンダーを表示します。年を整数で入力してください:");
	scanf("%d", &year);
	init_year = year;
	month = 1;
	day = 1;
	while (init_year == year) {
		char *wday_name = get_day_of_week_ja(get_day_of_week(year, month, day));
		printf("%4d年%2d月%2d日(%s)\n", year, month, day, wday_name);
		increment_date(&year, &month, &day);
		count++;
	}

	printf("%d件表示しました。\n", count);

	return 0;
}
