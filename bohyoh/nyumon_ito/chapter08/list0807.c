#include <stdio.h>

int factorial(int n)
{
    if (n > 0) return n * factorial(n - 1);
    return 1;
}

int main(void)
{
    int num;
    printf("整数を入力してください: ");
    scanf("%d", &num);
    printf("%dの階乗は%dです。\n", num, factorial(num));

    puts("階乗の計算は再帰関数を使わなくとも解ける");
    int i, total = 1;
    for (i = 1; i <= num; i++) {
        total *= i;
    }
    printf("%dの階乗は%dです。\n", num, total);

    return 0;
}