#include <stdio.h>

void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void sort3(int *n1, int *n2, int *n3)
{
  if (*n1 > *n2) swap(n1, n2);
  if (*n2 > *n3) swap(n2, n3);
  if (*n1 > *n2) swap(n1, n2);
}

int main(void)
{
  int a, b, c;

  puts("3つの整数: ");
  printf("整数A: "); scanf("%d", &a);
  printf("整数B: "); scanf("%d", &b);
  printf("整数C: "); scanf("%d", &c);

  sort3(&a, &b, &c);

  puts("昇順にソートしました。");
  printf("整数Aは%dです。\n", a);
  printf("整数Bは%dです。\n", b);
  printf("整数Cは%dです。\n", c);

  return 0;
}

