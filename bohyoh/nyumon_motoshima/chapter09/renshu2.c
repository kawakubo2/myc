#include <stdio.h>

int mytoupper(char c)
{
  int distance = 'a' - 'A';
  if (c >= 'a' && c <= 'z') {
    return c - distance;
  }
}

int mytolower(char c)
{
  int distance = 'a' - 'A';
  if (c >= 'A' && c <= 'Z') {
    return c + distance;
  }
}

void str_toupper(char s[])
{
  int i = 0;
  while(s[i]) {
    s[i] = mytoupper(s[i]);
    i++;
  }
}

void str_tolower(char s[])
{
  int i = 0;
  while(s[i]) {
    s[i] = mytolower(s[i]);
    i++;
  }
}

int main(void)
{
  char str[128];

  printf("文字列: "); scanf("%s", str);

  str_toupper(str);
  printf("大文字: %s\n", str);

  str_tolower(str);
  printf("大文字: %s\n", str);
  
  return 0;
}

