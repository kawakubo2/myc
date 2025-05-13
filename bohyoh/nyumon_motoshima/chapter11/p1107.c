#include <stdio.h>

void put_string(const char *s)
{
  while(*s) {
    putchar(*s);
    s++;
  }
}

int main(void)
{
  char str[128];
  printf("文字列: ");
  scanf("%s", str);
  put_string(str);
  putchar('\n');

  return 0;
}

