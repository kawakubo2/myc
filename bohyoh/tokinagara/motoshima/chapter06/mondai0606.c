#include <stdio.h>

int scan_int(void)
{
  int temp;
  printf("整数値: ");
  scanf("%d", &temp);
  return temp;
}

int avg_of(int a, int b)
{
  return (a + b) / 2;
}

int main(void)
{
  puts("2つの整数値の平均を小数点を切り捨てて求めます。");

  int x, y;
  x = scan_int();
  y = scan_int();

  int z = avg_of(x, y);

  printf("平均: %d\n", z);

  return 0;
}

