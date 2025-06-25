#include <stdio.h>

int save_previous(int n)
{
  static int prev;
  int temp = prev;
  prev = n;
  return temp;
}

int main(void)
{
  puts("整数値を入力してください。1つ前に入力した値が表示されます。999で終了します。");

  int n;
  while (1) {
    printf("整数: "); scanf("%d", &n);
    printf("前に入力した値: %d\n", save_previous(n));
    if (n == 999) break;
  }

  return 0;
}

