#include <stdio.h>

enum animal { Dog = 1, Mouse, Cat, Monkey, Invalid };

void dog(void)
{
  puts("ワンワン!!");
}
void cat(void)
{
  puts("ニャ～オ!!!");
}
void monkey(void)
{
  puts("キッキッ!!");
}
void mouse(void)
{
  puts("チュー!!");
}

enum animal select(void)
{
  int tmp;
  do {
    printf("%d…犬 %d…鼠 %d…猫 %d…猿 %d…終了: ", Dog, Mouse, Cat, Monkey, Invalid);
    scanf("%d", &tmp);
  } while (tmp < Dog || tmp > Invalid);
  return tmp;
}

int main(void)
{
  enum animal selected;
  do {
    switch(selected = select()) {
      case Dog: dog(); break;
      case Mouse: mouse(); break;
      case Cat: cat(); break;
      case Monkey: monkey(); break;
    }
  } while(selected != Invalid);

  return 0;
}

