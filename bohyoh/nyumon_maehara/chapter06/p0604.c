#include <stdio.h>

int sqr(int n)
{
    return n * n;
}
int pow4(int n)
{
    return sqr(n) * sqr(n);
}
int main(void)
{
    int x;
    printf("整数値: "); fscanf(stdin, "%d", &x);
    printf("%dの4乗値は%dです。\n", x, pow4(x));

    return 0;
}