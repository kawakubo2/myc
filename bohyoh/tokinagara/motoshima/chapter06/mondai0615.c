#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      c[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

void print_array2d(int a[4][4]) 
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", a[i][j]);
    }
    putchar('\n');
  }
}

int main(void)
{

  int a[4][3] = {
    {1, 2, 1},
    {0, 1, 0},
    {2, 2, 1},
    {1, 2, 1}
  };


  int b[3][4] = {
    {1, 2, 0, 1},
    {2, 1, 1, 1},
    {-1, 1, 0, 1},
  };

  int c[4][4];

  mat_mul(a, b, c);

  print_array2d(c);

  return 0;
}

