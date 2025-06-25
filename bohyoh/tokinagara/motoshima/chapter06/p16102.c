#include <stdio.h>

int sum_ary2D(const int a[][3], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)  {
    for (int j = 0; j < 3; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}

int main(void)
{
  int a1[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };
  int size1 = sizeof(a1) / sizeof(a1[0]);

  int a2[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12},
  };
  int size2 = sizeof(a2) / sizeof(a2[0]);


  int sum1 = sum_ary2D(a1, size1);
  int sum2 = sum_ary2D(a2, size2);

  printf("a1の合計: %d\n", sum1);
  printf("a2の合計: %d\n", sum2);

  return 0;
}

