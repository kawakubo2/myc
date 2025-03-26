#include <stdio.h>

// 関数定義
void print_array(int a[4][3])
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%4d", a[i][j]);
    }
    putchar('\n');
  }
}

int main(void)
{
  int tensu[3][4][3] = 
  {
    {
      {91, 63, 78},
      {67, 72, 46},
      {89, 34, 53},
      {32, 54, 34},
    },
    {
      {97, 67, 82},
      {73, 43, 46},
      {97, 56, 21},
      {85, 46, 35},
    },
    {
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0},
    }
  };

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 2; k++) {
        tensu[2][i][j] += tensu[k][i][j];
      }
    }
  }

  puts("1回目の点数");
  print_array(tensu[0]);

  puts("2回目の点数");
  print_array(tensu[1]);

  puts("合計点");
  print_array(tensu[2]);

  return 0;
}

