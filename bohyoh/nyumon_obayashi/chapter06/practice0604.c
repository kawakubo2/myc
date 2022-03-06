#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(x) * sqr(x);
}

int main(void)
{
    int n;
    printf("整数を入力してください : "); scanf("%d", &n);

    printf("%dの4乗値は%dです。\n", n, pow4(n));

    return 0;
}

