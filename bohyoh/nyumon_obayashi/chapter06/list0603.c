#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数1 : "); scanf("%d", &n1);
    printf("整数2 : "); scanf("%d", &n2);

    printf("%dの2乗と%dの2乗の差は%dです。\n", n1, n2, diff(sqr(n1), sqr(n2)));

    return 0;
}

