#include <stdio.h>

int factorial(int n)
{
  if (n > 0) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}


int main(void)
{
  int num;
  printf("整数: ");
  scanf("%d", &num);
  printf("%dの階乗は%dです。\n", num, factorial(num));

  return 0;
}

