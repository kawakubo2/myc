#include <stdio.h>

int sumup(int n)
{
  if (n == 1) return 1;
  return n + sumup(n - 1);
}

int sumup2(int n) 
{
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int sumup3(int n)
{
  int sum = 0;
  while (n >= 1) {
    sum += n;
    n--;
  }
  return sum;
}

int main(void)
{
  int n;
  
  do {
    printf("正の整数: "); scanf("%d", &n);
  } while (n <= 0);

  printf("1～%dまでの合計: %d\n", n, sumup(n));
  printf("1～%dまでの合計: %d\n", n, sumup2(n));
  printf("1～%dまでの合計: %d\n", n, sumup3(n));

  return 0;
}

