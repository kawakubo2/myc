#include <stdio.h>

#define NUMBER 120

int main(void)
{
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

  puts("\n---分布フラフ---");
  printf("      100: ");
  for (int i = 0; i < bunpu[10]; i++) {
    putchar('*');
  }
  putchar('\n');

  for (int i = 9; i >= 0; i--) {
    printf("%3d ～%3d: ", i * 10, i * 10 + 9);
    for (int j = 0; j < bunpu[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}

