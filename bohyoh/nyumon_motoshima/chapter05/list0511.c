#include <stdio.h>

#define NUMBER 5

int main(void)
{
  int tensu[NUMBER];
  int max, min;
  int sum = 0, count = 0;

  printf("%d人の点数を入力せよ。\n", NUMBER);
  for (int i = 0; i < NUMBER; i++) {
    printf("%2d番: ", i + 1); scanf("%d", &tensu[i]);
  }

  max = min = tensu[0];
  for (int i = 0; i < NUMBER; i++) {
    sum += tensu[i];
    count++;
    if (tensu[i] > max) max = tensu[i];
    if (tensu[i] < min) min = tensu[i];
  }

  printf("合計: %d\n", sum);
  printf("平均: %.1f\n", (double)sum / count);
  printf("最大: %d\n", max);
  printf("最小: %d\n", min);
  printf("件数: %d\n", count);

  return 0;
}

