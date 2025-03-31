#include <stdio.h>

int sqr(int n)
{
  return n * n;
}

int pow4(int n)
{
  return sqr(n) * sqr(n);
}

int main(void)
{
  int n;
  printf("整数: "); scanf("%d", &n);
  printf("%dの4乗は%d\n", n, pow4(n));

  return 0;
}

