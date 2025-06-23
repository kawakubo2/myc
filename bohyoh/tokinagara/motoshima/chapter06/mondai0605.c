#include <stdio.h>

int sumup1(int n) {
  int answer = 0;
  for (int i = 1; i <= n; i++) {
    answer += i;
  }
  return answer;
}

int sumup2(int n)
{
  if (n == 1) return 1;
  return n + sumup2(n - 1);
}

int main(void)
{
  puts("1から正の整数までの合計を求めます");

  int n = 0;
  while(1) {
    printf("正の整数: "); scanf("%d", &n);
    if (n > 0) {
      break;
    }
  }

  int answer1 = sumup1(n);
  printf("合計: %d\n", answer1);

  int answer2 = sumup2(n);
  printf("合計: %d\n", answer2);

  return 0;
}

