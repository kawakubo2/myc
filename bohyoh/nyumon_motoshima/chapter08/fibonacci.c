#include <stdio.h>
#include <time.h>

long fibonacci(int n)
{
  if (n == 0 || n == 1) return n;
  return fibonacci(n - 2) + fibonacci(n - 1);
}

long a[51] = {0};
long fibonacci2(int n)
{
  if (n == 0 || n == 1) return n;
  long f2, f1;
  if (a[n - 2] == 0) {
    f2 = fibonacci2(n - 2);
    a[n - 2] = f2;
  } else {
    f2 = a[n - 2];
  }
  if (a[n - 1] == 0) {
    f1 = fibonacci2(n - 1);
    a[n - 1] = f1;
  } else {
    f1 = a[n - 1];
  }
  return f2 + f1;
}

int main(void)
{
  clock_t start_time, end_time;
  int num;
  puts("フィボナッチ数を求める");
  printf("正の整数: ");
  scanf("%d", &num);

  start_time = (double)clock();
  long fib = fibonacci2(num);
  end_time = (double)clock();


  printf("%dのフィボナッチ数は%ldです。\n", num, fib);
  printf("処理時間: %ldマイクロ秒\n", end_time - start_time);

  return 0;
}

