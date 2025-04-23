#include <stdio.h>

int null_pos(const char s[])
{
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}

void put_stringr(const char s[])
{
  for (int i = null_pos(s) - 1; i >= 0; i--) {
    putchar(s[i]);
  }
  putchar('\n');
} 

int main(void)
{
  char str[128];
  printf("文字列: "); scanf("%s", str);

  put_stringr(str);

  return 0;
}

