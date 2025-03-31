#include <stdio.h>

// 再帰関数
int sumup2(int n)
{
  if (n == 1) return 1;
  return n + sumup2(n - 1);
}

int sumup(int n)
{
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result += i;
  }
  return result;
}

int main(void)
{
  int n;
  puts("1～nまでの合計を求めます。");
  printf("n: "); scanf("%d", &n);

  printf("1～%dまでの総和は%d\n", n, sumup(n));
  printf("1～%dまでの総和は%d\n", n, sumup2(n));

  return 0;
}

