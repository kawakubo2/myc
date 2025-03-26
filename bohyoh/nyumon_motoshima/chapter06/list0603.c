#include <stdio.h>

int sqr(int n)
{
  return n * n;
}

int diff(int a, int b)
{
  return a > b ? a - b: b - a;
}

int main(void)
{
  int x, y;

  puts("2つの整数を入力せよ");
  printf("整数x: "); scanf("%d", &x);
  printf("整数y: "); scanf("%d", &y);

  printf("xの2乗とyの2乗の差は%dです。\n", diff(sqr(x), sqr(y)));

  int diff2 = (x * x > y * y) ? x * x - y * y: y * y - x * x;
  printf("xの2乗とyの2乗の差は%dです。\n", diff2);


  return 0;
}

