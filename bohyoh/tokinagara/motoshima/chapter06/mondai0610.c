#include <stdio.h>

#define NUMBER 5

int min_of(int a[], int n)
{
  int min = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] < min) min = a[i];
  }
  return min;
}


int main(void)
{
  int eng[NUMBER];
  int math[NUMBER];
  printf("%d名分のテストの成績\n", NUMBER);
  for (int i = 0; i < NUMBER; i++) {
    printf("英語%d: ", i + 1);
    scanf("%d", &eng[i]);
    printf("数学%d: ", i + 1);
    scanf("%d", &math[i]);
  }

  int m = min_of(eng, NUMBER);
  printf("英語最小値: %d\n", m);

  m = min_of(math, NUMBER);
  printf("数学最小値: %d\n", m);

  return 0;
}

