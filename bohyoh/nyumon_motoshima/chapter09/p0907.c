#include <stdio.h>

void put_stringn(const char s[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%s", s);
  }
  putchar('\n');
}

int main(void)
{
  char str[128];
  int n;
  printf("文字列: "); scanf("%s", str);
  getchar();

  printf("繰り返し回数: "); scanf("%d", &n);

  put_stringn(str, n);

  return 0;
}

