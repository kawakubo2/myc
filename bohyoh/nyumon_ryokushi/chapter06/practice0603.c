#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main(void)
{
    int n;
    puts("整数の3乗値を求めます。");
    printf("整数n: "); scanf("%d", &n);

    printf("整数nの3乗は%dです。\n", cube(n));

    return 0;
}

