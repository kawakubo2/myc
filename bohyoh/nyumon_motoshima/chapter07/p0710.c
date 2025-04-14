#include <stdio.h>

int main(void)
{
  float i = 0.0;
  int j = 0;

  while (j <= 100) {
    printf("x= %f x = %f\n", i, j / 100.0);
    i += 0.01;
    j++;
  }


  return 0;
}

