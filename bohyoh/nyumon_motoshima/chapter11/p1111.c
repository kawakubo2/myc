#include <stdio.h>

void del_digit(char *s)
{
  char *t = s;
  while(*s) {
    if (*s < '0' || *s > '9') {
      *t = *s;
      t++;
    }
    s++;
  }
  *t = '\0';
}

int main(void)
{
  char str[128];
  printf("文字列: ");
  scanf("%s", str);

  del_digit(str);

  printf("数字文字除去後: \"%s\"\n", str);

  return 0;
}

