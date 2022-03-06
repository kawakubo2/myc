#include <stdio.h>

int sumup(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int n;
    printf("整数を入力してください : ");
    scanf("%d", &n);

    printf("1～%dまでの総和は%dです。\n", n, sumup(n));

    return 0;
}

