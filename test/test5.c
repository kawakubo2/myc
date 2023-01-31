#include <stdio.h>

void test1(int *num)
{
  *num += 10;
  printf("num=%d\n", *num);
}

int main(void)
{
  int n = 3;
  test1(&n);
  printf("n=%d\n", n);

  return 0;
}


