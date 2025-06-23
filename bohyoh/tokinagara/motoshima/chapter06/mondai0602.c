#include <stdio.h>

int min3(int a, int b, int c)
{
  int min = a;
  if (b < min) min = b;
  if (c < min) min = c;
  return min;
}

int main(void)
{
  puts("整数a, b, cの最小値を求める");
  int a, b, c;
  printf("整数a: "); scanf("%d", &a);
  printf("整数b: "); scanf("%d", &b);
  printf("整数c: "); scanf("%d", &c);
  int m = min3(a, b, c);

  printf("最小値: %d\n", m);

  return 0;
}

