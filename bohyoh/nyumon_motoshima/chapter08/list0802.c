#include <stdio.h>

#define sqr(x) ((x) * (x))

int square(int n) {
  return n * n;
}

int main(void)
{
  int n;
  double x;
  printf("整数: "); scanf("%d", &n);
  printf("その数の2乗は%dです。\n", square(n++));
//  printf("その数の2乗は%dです。\n", sqr(n++));
  
  printf("実数: "); scanf("%lf", &x);
  printf("その数の2乗は%lfです。\n", sqr(x));

  return 0;
}

