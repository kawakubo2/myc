#include <stdio.h>

int gcd(int x, int y)
{
    int temp;
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }
    while(x % y != 0) {
        temp = x;
        x = y;
        y = temp % y;
    }
    return y;
}

int main(void)
{
    int x, y;
    puts("2つの整数の最大公約数を求めます");
    printf("整数x : "); scanf("%d", &x);
    printf("整数y : "); scanf("%d", &y);

    printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x, y));

    return 0;
}

