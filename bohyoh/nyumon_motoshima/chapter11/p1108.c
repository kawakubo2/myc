#include <stdio.h>

int str_chnum(const char *s, int c)
{
  int count = 0;
  while (*s) {
    if (*s == c) count++;
    s++;
  }
  return count;

}
int main(void)
{
  char str[128];
  char c;
  printf("文字列: "); scanf("%s", str);
  getchar();
  printf("文字: "); c = getchar();

  int count = str_chnum(str, c);
  if (count > 0) {
    printf("%sの中に%cは%d個存在します。\n", str, c, count);
  } else {
    printf("%sの中に%cは存在しません。\n", str, c);
  }

  return 0;
}

