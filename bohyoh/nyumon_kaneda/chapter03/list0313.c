#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    puts("三つの整数を入力せよ。");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
  

    int max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    printf("最大値は%dです。\n", max);
    return 0;
}