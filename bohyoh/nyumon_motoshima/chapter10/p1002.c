#include <stdio.h>

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

// void decrement_date(int *y, int *m, int *d)
// {
//   ;
// }

int main(void)
{
//  int year, month, day;
//  printf("日付(例1998-02-05) : ");
//  scanf("%d-%d-%d", &year, &month, &day);
  int year = 2024;
  int month = 12;
  int day = 31;

  printf("%d-%02d-%02d\n", year, month, day);
  for (int i = 0; i < 367; i++) {
    increment_date(&year, &month, &day);
    printf("%d-%02d-%02d\n", year, month, day);
  }

  // printf("月末は%d-%2d-%2d\n", year, month, get_last_day(year, month));

  return 0;
}

