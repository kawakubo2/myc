#include <stdio.h>

#define NUMBER 100

int isTerminated(char s[128])
{
  for (int i = 0; i < 5; i++) {
    if (s[i] != '$') return 0;
  }
  if (s[5] == '\0') return 1;
  return 0;
}


int main(void)
{
  char s[NUMBER][128];

  puts("--- 文字列の入力 ---");
  for (int i = 0; i < NUMBER; i++) {
    printf("s[%d]: ", i);
    scanf("%s", s[i]);
    if (isTerminated(s[i])) break;
  }

  puts("--- 文字列の表示 ---");
  for (int i = 0; i < NUMBER; i++) {
    if (isTerminated(s[i])) break;
    printf("s[%d] = \"%s\"\n", i, s[i]);
  }

  return 0;
}

