#include <stdio.h>

long factorial(int n)
{
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

long factorial2(int n) {
  int r = 1;
  for (int i = 1; i <= n; i++) {
    r *= i;
  }
  return r;
}

int main(void)
{
  int n;
  do {
    printf("正の整数: "); scanf("%d", &n);
  } while (n <= 0 || n > 20);

  printf("%dの階乗は%ldです。\n", n, factorial(n));
  printf("%dの階乗は%ldです。\n", n, factorial2(n));

  return 0;
}

