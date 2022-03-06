#include <stdio.h>

int sumup(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

int main(void)
{
    int i, n;
    puts("入力した正の整数までの1からの合計を求めます。");

    printf("整数n: "); scanf("%d", &n);

    printf("1～%dまでの合計は%dです。\n", n, sumup(n));

    return 0;
}

