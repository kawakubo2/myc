#include <stdio.h>

int max3(int a, int b, int c)
{
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main(void)
{
    int a, b, c;
    puts("三つの整数を入力せよ。");
    printf("整数a: "); fscanf(stdin, "%d", &a);
    printf("整数b: "); fscanf(stdin, "%d", &b);
    printf("整数c: "); fscanf(stdin, "%d", &c);

    printf("最大値は%dです。\n", max3(a, b, c));

    return 0;
}