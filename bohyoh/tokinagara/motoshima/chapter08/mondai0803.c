#include <stdio.h>

#define swap(type, a, b) do { type t = a; a = b; b = t; } while(0)
// #define swap(type, a, b) { type t = a; a = b; b = t; }

int main(void)
{
  int a, b;
  printf("整数a: "); scanf("%d", &a);
  printf("整数b: "); scanf("%d", &b);
  printf("a = %d, b = %d\n", a, b);
  puts("--- 整数のswap ---");
  swap(int, a, b);
  printf("a = %d, b = %d\n", a, b);

  double x, y;
  printf("小数x: "); scanf("%lf", &x);
  printf("小数y: "); scanf("%lf", &y);
  printf("x = %f, y = %f\n", x, y);
  puts("--- 小数のswap ----");
  swap(double, x, y);
  printf("x = %f, y = %f\n", x, y);

  return 0;
}

