#include <stdio.h>
#include "my_scan.h"

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力してください: ");
    num = scan_range(1, NUMBER);
    printf("%d人の点数を入力してください。\n", num);
    for (i = 0; i < num; i++) {
        printf("%2d番: ", i + 1);
        tensu[i] = scan_range(0, 100);
        bunpu[tensu[i] / 10]++;
    }
    puts("\n---分布グラフ---");
    printf("      100 : ");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');
    for (i = 9; i >= 0; i--) {
        printf("%3d ～%3d : ", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}