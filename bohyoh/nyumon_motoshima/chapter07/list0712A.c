#include <stdio.h>

int main(void)
{
  for (int i = 0; i <= 100; i++) {
    printf("%.2f\n", (double)i / 100);
  }

  return 0;
}

