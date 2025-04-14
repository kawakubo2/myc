#include <stdio.h>

int main(void)
{
  float i = 0.0;
  int j = 0;

  float sum_float = 0.0;
  int sum_int = 0;
  

  while (j <= 100) {
    printf("x= %.8f x = %.8f\n", i, j / 100.0);
    sum_float += i;
    sum_int += j;
    i += 0.01;
    j++;
  }

  printf("合計: %f\n", sum_float);
  printf("合計: %f\n", sum_int / 100.0);

  return 0;
}

