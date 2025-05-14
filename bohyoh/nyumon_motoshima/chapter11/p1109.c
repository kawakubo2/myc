#include <stdio.h>
char *str_chr(char *s, int c)
{
  char *result = NULL;
  while(*s) {
    if (*s == c) {
      result = s;
      break;
    }
    s++;
  }
  return result;
}

int main(void)
{
  char str[128];
  printf("文字列: ");
  scanf("%s", str);
  getchar();
  printf("検索文字: ");
  char c = getchar();
  char *a = str_chr(str, c);

  if (a != NULL) {
    printf("%s\n", a);
  } else {
    printf("\'%c\'は\"%s\"には存在しません。\n", c, str);
  }

  return 0;
}

