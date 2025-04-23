#include <stdio.h>

int str_char(const char s[], int c)
{
  int pos = 0;
  while (s[pos]) {
    if (s[pos] == c) return pos;
    pos++;
  }
  return -1;
}

int main(void)
{
  char str[128];
  char c;
  int pos;
  printf("文字列: "); scanf("%s", str);

  getchar();
  printf("検索文字: "); c = getchar();

  if ((pos = str_char(str, c)) != -1) {
    printf("文字列\"%s\"の中に\'%c\'は%d番目にあります。\n", str, c, pos);
  } else {
    printf("文字列\"%s\"の中に\'%c\'は存在しません。。\n", str, c);
  }

  return 0;
}

