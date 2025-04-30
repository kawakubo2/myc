#include <stdio.h>

void adjust_point(int *p)
{
  if (*p < 0)   *p = 0;
  if (*p > 100) *p = 100;
}
int main(void)
{
  // int n;

  // printf("整数: "); scanf("%d", &n);

  int nums[]     = {-10, 0, 30, 100, 200};
  int expected[] = {0, 0, 30, 100, 100};

  for (int i = 0; i < 5; i++) {
    puts("------------------------------");
    printf("調整前: %4d\n", nums[i]);
    adjust_point(&nums[i]);
    printf("検出値: %4d ", nums[i]);
    printf("期待値: %4d ", expected[i]);
    printf(" %s\n", nums[i] == expected[i] ? "〇": "×");
  }

  return 0;
}

