#include <stdio.h>

int gcd(int x, int y)
{
    int temp;
    if (x < y) { temp = x; x = y; y = temp; }
    if (x % y == 0) return y;
    return gcd(y, x % y);
}

int main(void)
{
    int n, m;
    puts("2つの整数の最大公約数を求めます。");
    printf("整数n : "); scanf("%d", &n);
    printf("整数m : "); scanf("%d", &m);

    printf("%dと%dの最大公約数は%dです。\n", n, m, gcd(n, m));

    return 0;
}

