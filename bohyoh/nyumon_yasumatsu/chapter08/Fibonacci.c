#include <stdio.h>

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int num;
    printf("フィボナッチ数を求めます。\n");
    printf("正の整数を入力してください: ");
    scanf("%d", &num);

    printf("%dのフィボナッチ数は%dです。\n", num, fib(num));

    return 0;
}

