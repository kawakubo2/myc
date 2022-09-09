#include <stdio.h>

int sumup(int n)
{
  if (n == 1) return 1;
  return n + sumup(n - 1);
}

int main(void)
{
  int n = 10;
  printf("1～%dまでの合計: %d\n", n, sumup(n));

  return 0;
}
