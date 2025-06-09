#include <stdio.h>

#define NUMBER 10
#define MY_MIN 0
#define MY_MAX 100

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}

int main(void)
{
  int point[NUMBER];

  printf("%d～%dの値を入力してください。\n", MY_MIN, MY_MAX);
  for (int i = 0; i < NUMBER; i++) {
    while (1) {
      printf("point[%d]: ", i);
      scanf("%d", &point[i]);
      if (point[i] >= MY_MIN && point[i] <= MY_MAX) {
        break;
      }
      puts("範囲外です。");
    }
  }

  print_array(point, NUMBER);

  return 0;
}

