#include <stdio.h>

#define NUMBER 3

int str_length(const char s[])
{
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}

void rev_strings(char s[][128], int n)
{
  for (int i = 0; i < n; i++) {
    int len = str_length(s[i]);
    for (int j = 0; j < len / 2; j++) {
      char tmp = s[i][j];
      s[i][j] = s[i][len - 1 - j];
      s[i][len - 1 - j] = tmp;
    }
  }
}

int main(void)
{
  char str_ary[NUMBER][128];
  for (int i = 0; i < NUMBER; i++) {
    printf("文字列: ");
    scanf("%s", str_ary[i]);
  }
  puts("----------------");

  rev_strings(str_ary, NUMBER);
  for (int i = 0; i < NUMBER; i++) {
    printf("反転後: %s\n", str_ary[i]);
  }

  return 0;
}

