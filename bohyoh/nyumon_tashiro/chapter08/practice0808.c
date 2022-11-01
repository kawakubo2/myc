#include <stdio.h>

int gcd(int x, int y)
{
    if (y > x) {
        int temp = x;
        x = y;
        y = temp;
    }
    int mod = x % y;
    if (mod == 0) return y;
    return gcd(y, mod);
}

int main(void)
{
    int n1, n2;
    puts("最大公約数を求めます");
    printf("整数1: "); scanf("%d", &n1);
    printf("整数2: "); scanf("%d", &n2);
    
    printf("%dと%dの最大公約数は%dです。\n", n1, n2, gcd(n1, n2));

    return 0;
}