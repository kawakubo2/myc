#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}
int main(void)
{
    int n;
    puts("3乗値を求めます。");
    printf("整数: "); fscanf(stdin, "%d", &n);
    printf("%dの3乗値は%dです。\n", n, cube(n));

    return 0;
}