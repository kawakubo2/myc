#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

int diff(int a, int b)
{
    return a > b ? a - b: b - a;
}

int main(void)
{
    int x, y;
    puts("二つの整数を入力してください");
    printf("整数x: "); fscanf(stdin, "%d", &x);
    printf("整数y: "); fscanf(stdin, "%d", &y);

    printf("xの2乗とyの2乗の差は%dです。\n", diff(sqr(x), sqr(y)));

    return 0;
}