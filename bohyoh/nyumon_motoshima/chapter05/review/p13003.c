#include <stdio.h>

#define NUMBER 7

void print_array(int a[][NUMBER], int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    putchar('\n');
  }
} 


int main(void)
{
  int m[NUMBER][NUMBER];
  for (int i = 0; i < NUMBER; i++) {
    for (int j = 0; j < NUMBER; j++) {
      m[i][j] = i == j ? 1: 0;
    }
  }

  print_array(m, NUMBER);

  return 0;
}

