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
    int n1, n2, n3;
    puts("三つの整数を入力してください");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);
    printf("整数3: "); fscanf(stdin, "%d", &n3);

    printf("最大値は%dです。\n", max3(n1, n2, n3));

    return 0;
}