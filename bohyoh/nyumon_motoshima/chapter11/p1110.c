#include <ctype.h>
#include <stdio.h>

void str_toupper(char *s)
{
  while(*s) {
    *s = toupper(*s);
    s++;
  }
}

void str_lower(char *s)
{
  while(*s) {
    *s = tolower(*s);
    s++;
  }
}

int main(void)
{
  char str[128];
  printf("文字列: ");
  scanf("%s", str);

  str_toupper(str);
  printf("大文字: %s\n", str);

  str_lower(str);
  printf("小文字: %s\n", str);

  return 0;
}

