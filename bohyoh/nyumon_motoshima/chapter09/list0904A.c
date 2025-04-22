#include <stdio.h>

int main(void)
{
  char lastname[48];
  char firstname[48];

  int year;
  int month;
  int day;

  printf("名前: "); scanf("%s %s", lastname, firstname);
  printf("生年月日(2000-04-21): "); scanf("%d-%d-%d", &year, &month, &day);

  printf("こんにちは、%s %sさん！！\n", lastname, firstname);
  printf("%s%sさんの生年月日は%d年%d月%d日です。\n", lastname, firstname, year, month, day);

  return 0;
}

