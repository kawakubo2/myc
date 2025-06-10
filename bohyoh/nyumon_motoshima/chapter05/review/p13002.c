#include <stdio.h>

int main(void)
{
  int a[2][2] = {2, 2};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
  return 0;
}

