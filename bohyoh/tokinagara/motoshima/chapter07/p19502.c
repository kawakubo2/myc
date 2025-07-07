#include <stdio.h>
#include <math.h>

int main(void)
{
  for (int i = 0; i <= 100; i++) {
    printf("%4.2f %4.2f\n", i / 100.0, sqrt(i / 100.0));
  }
  return 0;
}

