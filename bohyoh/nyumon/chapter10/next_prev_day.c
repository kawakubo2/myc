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

int main(void)
{
	int ok_next_days[MONTHS][YMD] = {
		{ 2019, 1, 31 },
		{ 2019, 2, 28 },
		{ 2019, 3, 31 },
		{ 2019, 4, 30 },
		{ 2019, 5, 31 },
		{ 2019, 6, 30 },
		{ 2019, 7, 31 },
		{ 2019, 8, 31 },		
		{ 2019, 9, 30 },
		{ 2019, 10, 31 },
		{ 2019, 11, 30 },
		{ 2019, 12, 31 },
	};
	test(ok_next_days, MONTHS, NEXT, "翌日テスト", "月末:うるう年ではない");
	int ok_leap_next_days[MONTHS][YMD] = {
		{ 2020, 1, 31 },
		{ 2020, 2, 29 },
		{ 2020, 3, 31 },
		{ 2020, 4, 30 },
		{ 2020, 5, 31 },
		{ 2020, 6, 30 },
		{ 2020, 7, 31 },
		{ 2020, 8, 31 },		
		{ 2020, 9, 30 },
		{ 2020, 10, 31 },
		{ 2020, 11, 30 },
		{ 2020, 12, 31 },
	};
	test(ok_leap_next_days, MONTHS, NEXT, "翌日テスト", "月末:うるう年");

	int ok_prev_days[MONTHS][YMD] = {
		{ 2019, 1, 1 },
		{ 2019, 2, 1 },
		{ 2019, 3, 1 },
		{ 2019, 4, 1 },
		{ 2019, 5, 1 },
		{ 2019, 6, 1 },
		{ 2019, 7, 1 },
		{ 2019, 8, 1 },		
		{ 2019, 9, 1 },
		{ 2019, 10, 1 },
		{ 2019, 11, 1 },
		{ 2019, 12, 1 },
	};
	test(ok_prev_days, MONTHS, PREV, "前日テスト", "月初:うるう年でない");

	int ok_leap_prev_days[MONTHS][YMD] = {
		{ 2020, 1, 1 },
		{ 2020, 2, 1 },
		{ 2020, 3, 1 },
		{ 2020, 4, 1 },
		{ 2020, 5, 1 },
		{ 2020, 6, 1 },
		{ 2020, 7, 1 },
		{ 2020, 8, 1 },		
		{ 2020, 9, 1 },
		{ 2020, 10, 1 },
		{ 2020, 11, 1 },
		{ 2020, 12, 1 },
	};
	test(ok_leap_prev_days, MONTHS, PREV, "前日テスト", "月初:うるう年");

	int ok_middle_next_days[][YMD] = {
		{ 2019, 2, 1 },
		{ 2019, 2, 2 },
		{ 2019, 2, 26 },
		{ 2019, 2, 27 },
	};
	test(ok_middle_next_days, 4, NEXT, "翌日テスト", "月中:うるう年ではない");

	int ok_leap_middle_next_days[][YMD] = {
		{ 2020, 2, 1 },
		{ 2020, 2, 2 },
		{ 2020, 2, 27 },
		{ 2020, 2, 28 },
	};
	test(ok_leap_middle_next_days, 4, NEXT, "翌日テスト", "月中:うるう年");

	int ok_middle_prev_days[][YMD] = {
		{ 2019, 2, 2 },
		{ 2019, 2, 3 },
		{ 2019, 2, 27 },
		{ 2019, 2, 28 },
	};
	test(ok_middle_prev_days, 4, PREV, "前日テスト", "月中:うるう年ではない");

	int ok_leap_middle_prev_days[][YMD] = {
		{ 2020, 2, 2 },
		{ 2020, 2, 3 },
		{ 2020, 2, 28 },
		{ 2020, 2, 29 },
	};
	test(ok_leap_middle_prev_days, 4, PREV, "前日テスト", "月中:うるう年");

	return 0;
}

