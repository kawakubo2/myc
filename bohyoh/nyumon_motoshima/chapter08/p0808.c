#include <stdio.h>

int gcd(int a, int b)
{
  if (a < b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
  int c = a % b;
  if (c == 0) {
    return b;
  }
  return gcd(b, c);
}


int main(void)
{
  int x, y;
  puts("2つの正の整数の最大公約数を求める");
  printf("x: "); scanf("%d", &x);
  printf("y: "); scanf("%d", &y);

  printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x, y));

  return 0;
}

