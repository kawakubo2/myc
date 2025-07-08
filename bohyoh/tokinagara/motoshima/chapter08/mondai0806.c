#include <stdio.h>

enum gender { Male = 1, Female, END_GENDER };
enum season { Spring = 1, Summer, LateSummer, Autumn, Winter, END_SEASON };

void print_gender(enum gender gender)
{
  switch(gender) {
    case Male   : printf("男"); break;
    case Female : printf("女"); break;
    // case Other  : printf("その他"); break;
  }
}

void print_season(enum season season)
{
  switch(season) {
    case Spring : printf("春"); break;
    case Summer : printf("夏"); break;
    case LateSummer : printf("晩夏"); break;
    case Autumn : printf("秋"); break;
    case Winter : printf("冬"); break;
  }
}

void print_gender_menu(void)
{
  for (int i = Male; i < END_GENDER; i++) {
    printf("%d---", i);
    print_gender(i);
    putchar(' ');
  }
  printf(": ");
}

void print_season_menu(void)
{
  for (int i = Spring; i < END_SEASON; i++) {
    printf("%d---", i);
    print_season(i);
    putchar(' ');
  }
  printf(": ");
}

enum gender select_gender(void)
{
  int tmp;
  do {
    print_gender_menu();
    scanf("%d", &tmp);
  } while (tmp < Male || tmp >= END_GENDER);
}

enum season select_season(void)
{
  int tmp;
  do {
    print_season_menu();
    scanf("%d", &tmp);
  } while (tmp < Spring || tmp >= END_SEASON);
}

int main(void)
{
  enum gender your_gender;
  enum season your_season;

  printf("あなたの性別: "); your_gender = select_gender();
  printf("生まれた季節: "); your_season = select_season();

  printf("あなたの性別は"); print_gender(your_gender);
  printf("で、"); print_season(your_season);
  printf("に生まれたのですね。\n");

  return 0;
}

