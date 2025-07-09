#include <stdio.h>

int combination(int n, int r)
{
  if (n == r || r == 0) return 1;
  if (r == 1) return n;
  return combination(n - 1, r - 1) + combination(n - 1, r);
}
int main(void)
{
  puts("--- n個の要素からr個を取り出すときの組み合わせ数の計算 ---");
  int n, r;
  printf("要素数n: "); scanf("%d", &n);
  printf("取出す個数r: "); scanf("%d", &r);

  int c = combination(n, r);

  printf("%d個の中から%d個を取り出すときの組み合わせ数は%d通りあります。\n", n, r, c);

  return 0;
}

