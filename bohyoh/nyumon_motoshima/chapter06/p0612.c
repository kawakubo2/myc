#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int sum = 0;
      for (int k = 0; k < 3; k++) {
        sum += a[i][k] * b[k][j];
      }
      c[i][j] = sum;
    }
  }
}

int main(void)
{
  int x[4][3] = {
    { 1, 2, 1},
    { 2, 1, 1},
    { 1, 3, 1},
    { 2, 1, 3},
  };
  int y[3][4] = {
    { 3, 1, 2, 1 },
    { 2, 3, 2, 2 },
    { 1, 1, 2, 1 },
  };

  int z[4][4];
  mat_mul(x, y, z);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%3d", z[i][j]);
    }
    putchar('\n');
  }
  return 0;
}

