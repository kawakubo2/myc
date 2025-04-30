#include <stdio.h>

void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(void)
{
  int a, b;
  puts("2つ整数を入れ替えます。");
  printf("整数A: "); scanf("%d", &a);
  printf("整数B: "); scanf("%d", &b);

  swap(&a, &b);
  puts("入れ替え後");
  printf("A = %d B = %d\n", a, b);

  return 0;
}

