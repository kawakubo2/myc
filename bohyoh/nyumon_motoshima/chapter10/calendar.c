#include <stdio.h>
#include <stdlib.h>

int is_leap(int year)
{
  return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int get_last_day(int year, int month)
{
  int last_days[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  };
  return last_days[is_leap(year)][month];
}
/*
戻り値
0:日 1:月 2:火 3:水 4:木 5:金 6:土
*/
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

void increment_date(int *y, int *m, int *d)
{
  if (*m == 12) {
    if (*d == 31) {
      (*y)++;
      *m = 1;
      *d = 1;
    } else {
      (*d)++;
    }
  } else {
    if (*d == get_last_day(*y, *m)) {
      (*m)++;
      *d = 1;
    } else {
      (*d)++;
    }
  }
}

void decrement_date(int *y, int *m, int *d)
{
  if (*m == 1) {
    if (*d == 1) {
      (*y)--;
      *m = 12;
      *d = 31;
    } else {
      (*d)--;
    }
  } else {
    if (*d == 1) {
      (*m)--;
      *d = get_last_day(*y, *m);
    } else {
      (*d)--;
    }
  }
}

/* calendar */
void print_header(int y, int m)
{
  printf("       %d年%d月\n", y, m);
  char *wod[10] = {"日", "月", "火", "水", "木", "金", "土"};
  for (int i = 0; i < 7; i++) {
    printf(" %s", wod[i]);
  }
  putchar('\n');
}

void fill_space_first_week(int y, int m, int d)
{
  int index = get_day_of_week(y, m, d);
  for (int i = 0; i < index; i++) {
    printf("%s", "   ");
  }
}

void print_body(int y, int m)
{
  fill_space_first_week(y, m, 1);
  int prev = m;
  int d = 1;
  while (m == prev) {
    printf("%3d", d);
    if (get_day_of_week(y, m, d) == 6) {
      putchar('\n');
    }
    increment_date(&y, &m, &d);
  }
  putchar('\n');

}

void print_month(int y, int m)
{
  print_header(y, m);
  print_body(y, m);
}

int main(int argc, char *argv[])
{
   if (argc != 3) {
    puts("年月を半角空白区切りで入力してください。");
    puts("使用法:calendar <month> <year>");
    puts("使用例:calendar 8 2025");
    return 1;
   }

   int month = atoi(argv[1]);
   int year  = atoi(argv[2]);
   print_month(year, month);

  return 0;
}

