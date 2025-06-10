#include <stdio.h>

#define HEIGHT 3
#define WIDTH 4

void copy_array2d(int a[][WIDTH], const int b[][WIDTH], int height)
{
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < WIDTH; j++) {
      a[i][j] = b[i][j];
    }
  }
}

void print_array2d(int a[][WIDTH], int height)
{
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < WIDTH; j++) {
      printf("%d ", a[i][j]);
    }
    putchar('\n');
  }
} 


int main(void)
{
  int a[HEIGHT][WIDTH];
  int b[HEIGHT][WIDTH] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  print_array2d(b, HEIGHT);
  puts("Bの要素をAにコピー");
  copy_array2d(a, b, HEIGHT);
  print_array2d(a, HEIGHT);

  return 0;
}

