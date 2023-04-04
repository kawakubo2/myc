#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main(void)
{
    int n;
    printf("整数: "); fscanf(stdin, "%d", &n);
    int ans = cube(n);
    printf("%dの3乗は%dです。\n", n, ans);

    return 0;
}