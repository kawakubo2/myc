#include <stdio.h>

int max2(int a, int b)
{
    return a > b ? a: b;
}
int main(void)
{
    int n1, n2;
    puts("2つの整数を入力せよ。");
    printf("整数1: "); fscanf(stdin, "%d", &n1);
    printf("整数2: "); fscanf(stdin, "%d", &n2);

    printf("大きい方の値は%dです。\n", max2(n1, n2));

    return 0;
}