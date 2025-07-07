#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void)
{
  int x, y;
  printf("整数x: "); scanf("%d", &x);
  printf("整数y: "); scanf("%d", &y);

  int d = diff(x, y);

  printf("%dと%dの差は%dです。\n", x, y, d);

  return 0;
}

