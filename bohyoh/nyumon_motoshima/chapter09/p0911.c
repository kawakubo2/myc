#include <stdio.h>

#define NUMBER 100

int is_terminated(const char s[])
{
  for (int i = 0; i < 5; i++) {
    if (s[i] != '$') return 0;
  }
  if (s[5] == '\0') return 1;
  return 0;
}

void put_strary(const char s[][128], int n)
{
  for (int i = 0; i < n; i++) {
    if (is_terminated(s[i])) break;
    printf("s[%d] = \"%s\"\n", i, s[i]);
  }
}

int main(void)
{
  char cs[NUMBER][128];

  puts("--- 文字列の配列の入力 ---");
  for (int i = 0; i < NUMBER; i++) {
    printf("s[%d]: ", i); scanf("%s", cs[i]);
    if (is_terminated(cs[i])) break;
  }

  puts("--- 文字列の配列の表示 ---");
  put_strary(cs, NUMBER);

  return 0;
}

