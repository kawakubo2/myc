#include <stdio.h>

void null_string(char s[])
{
  s[0] = '\0';
}

int main(void)
{
  char s[128];
  printf("文字列: "); scanf("%s", s);
  puts("--- 入力した文字列 ---");
  printf("%s\n", s);

  puts("--- null_stringを実行した後の文字列 ---");
  null_string(s);
  printf("%s\n", s);
  return 0;
}

