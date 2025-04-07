#include <stdio.h>

int main(void)
{
  int max = 2147483647;
  printf("インクリメント前: %d\n", max);
  max++;
  printf("インクリメント後: %d\n", max);

  printf("%d\n", 100000 * 100000);

  return 0;
}

