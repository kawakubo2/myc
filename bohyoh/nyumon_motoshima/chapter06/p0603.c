#include <stdio.h>

int cube(int x)
{
  return x * x * x;
}

int main(void)
{
  int n;
  puts("入力した整数の3乗値を計算します。");
  printf("整数: "); scanf("%d", &n);

  printf("%dの3乗値は%d\n", n, cube(n));

  return 0;
}

