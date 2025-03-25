#include <stdio.h>

int main(void)
{
  int score[6][2] = {
    { 52, 73 },
    { 40, 55 },
    { 78, 68 },
    { 97, 70 },
    { 82, 69 },
    { 95, 89 },
  };

  int sum_nat = 0;
  int sum_math = 0; 

  puts("国語 数学 合計  平均");
  puts("--------------------");
  for (int i = 0; i < 6; i++) {
    printf("%4d", score[i][0]);
    sum_nat += score[i][0];
    printf(" %4d", score[i][1]);
    sum_math += score[i][1];
    printf(" %4d", score[i][0] + score[i][1]);
    printf(" %5.1f", (double)(score[i][0] + score[i][1]) / 2);
    putchar('\n');
  }
  puts("--------------------");
  printf("%4d", sum_nat);
  printf(" %4d", sum_math);
  printf(" [科目合計]");
  putchar('\n');
  printf("%4.1f", (double)sum_nat / 6);
  printf(" %4.1f", (double)sum_math / 6);
  printf(" [科目平均]");
  putchar('\n');

  return 0;
}

