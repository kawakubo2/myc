#include <stdio.h>

int str_chnum(const char s[], int c)
{
  int i = 0;
  int count = 0;
  while (s[i]) {
    if (s[i++] == c) {
      count++;
    }
  }
  return count;
}

int main(void)
{
  char str[128];
  char c;
  int count = 0;
  printf("文字列: "); scanf("%s", str);

  getchar();
  printf("検索文字: "); c = getchar();

  if ((count = str_chnum(str, c)) > 0) {
    printf("\"%s\"の中に\'%c\'は%d個あります。\n", str, c, count);
  } else {
    printf("\"%s\"の中に\'%c\'は存在しません。\n", str, c);
  }

  return 0;
}

