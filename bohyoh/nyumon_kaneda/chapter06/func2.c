#include <stdio.h>

int my_pow(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x; // result = result * x;
    }
    return result;
}

int main(void)
{
    int x, n;
    puts("n乗値を計算します。");
    printf("整数: "); fscanf(stdin, "%d", &x);
    printf("何乗? "); fscanf(stdin, "%d", &n);
    printf("%dの%d乗は%dです。\n", x, n, my_pow(x, n));

    return 0;
}