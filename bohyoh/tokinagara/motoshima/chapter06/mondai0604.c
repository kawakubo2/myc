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
  puts("入力した整数の2乗値と4条値を求めます");
  int n;
  printf("整数: "); scanf("%d", &n);

  printf("%dの2乗値は%d, 4乗値は%dです。\n", n, sqr(n), pow4(n));
  return 0;
}

