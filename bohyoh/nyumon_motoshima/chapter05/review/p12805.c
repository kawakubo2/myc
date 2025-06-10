#include <stdio.h>

#define NUMBER 20 
#define MY_MIN 0
#define MY_MAX 100

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}

void print_array2d(int a[][NUMBER], int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < NUMBER; j++) {
      printf("%d ", a[i][j]);
    }
    putchar('\n');
  }
}

void print_aster(int n)
{
  for (int i = 0; i < n; i++) {
    putchar('*');
  }
  putchar('\n');
}

int main(void)
{
  int point[NUMBER] = {
    60, 70, 80, 59, 69,
    55, 65, 75, 85, 100,
    62, 71, 72, 75, 82,
    88, 90, 95, 98, 99 
  };

  // printf("%d～%dの値を入力してください。\n", MY_MIN, MY_MAX);
  // for (int i = 0; i < NUMBER; i++) {
  //   while (1) {
  //     printf("point[%d]: ", i);
  //     scanf("%d", &point[i]);
  //     if (point[i] >= MY_MIN && point[i] <= MY_MAX) {
  //       break;
  //     }
  //     puts("範囲外です。");
  //   }
  // }

  print_array(point, NUMBER);

  int count[4] = {0};
  int idx[4][NUMBER];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < NUMBER; j++) {
      idx[i][j] = -1;
    }
  }
  print_array2d(idx, 4);

  for (int i = 0; i < NUMBER; i++) {
    int grade = 0;
    if (point[i] >= 80) {
      grade = 3;
    } else if (point[i] >= 70) {
      grade = 2;
    } else if (point[i] >= 60) {
      grade = 1;
    }
    idx[grade][count[grade]] = i;
    count[grade]++;
  }

  char g[] = {'D', 'C', 'B', 'A'};
  for (int i = 0; i < 4; i++) {
    printf("%c: ", g[i]); print_aster(count[i]);
  }

  for (int i = 0; i < 4; i++) {
    printf("%c: ", g[i]);
    for (int j = 0; j < NUMBER; j++) {
      if (idx[i][j] == -1) break;
      printf("%d ", idx[i][j]);
    }
    putchar('\n');
  }

  return 0;
}

