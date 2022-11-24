#include <stdio.h>

int main(void)
{
  char s[] = "123";
  int num = 0;
  for (int i = 0; i < 3; i++) {
    num = num * 10 + (s[i] - '0');
  }
  printf("%d\n", num * 10);

  return 0;
}
