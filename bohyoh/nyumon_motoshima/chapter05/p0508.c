#include <stdio.h>

#define NUMBER 120

int main(void)
{
  /*
  int num;
  int tensu[NUMBER];
  int bunpu[11] = {0};

  printf("人数: ");
  do {
    scanf("%d", &num);
    if (num < 0 || num > NUMBER) {
      printf("1～%dで入力せよ: ", NUMBER);
    }
  } while (num < 0 || num > NUMBER);

  printf("%d人の点数を入力せよ。\n", num);

  for (int i = 0; i < num; i++) {
    printf("%3d番: ", i + 1);
    do {
      scanf("%d", &tensu[i]);
      if (tensu[i] < 0 || tensu[i] > 100) {
        printf("1～100で入力せよ。: ");
      }
    } while (tensu[i] < 0 || tensu[i] > 100);
    bunpu[tensu[i] / 10]++;
  }
  */

  int bunpu[] = {0, 2, 0, 2, 2, 1, 3, 1, 2, 1, 1};
  puts("\n---分布フラフ---");
  int max = bunpu[0];
  for (int i = 0; i <= 10; i++) {
    if (bunpu[i] > max) {
      max = bunpu[i];
    }
  }

  for (int i = max; i >= 1; i--) {
    for (int j = 0; j <= 10; j++) {
      if (bunpu[j] >= i) {
        printf("  *");
      } else {
        printf("   ");
      }
    }
    putchar('\n');
  }

  for (int i = 0; i <= 10; i++) {
    printf("---");
  }
  printf("-\n");
  for (int i = 0; i <= 9; i++) {
    printf("%3d", i * 10);
  }
  puts(" 100");

  return 0;
}

