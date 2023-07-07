#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    for (int i = n; i > 0; i--) {
        result *= i; // result = result * i
    }
    return result;
}

int main(void)
{
    int n;
    puts("階乗を求めます。");
    printf("正数を入力してください: ");
    fscanf(stdin, "%d", &n);

    printf("%dの階乗は%dです。\n", n, factorial(n));

    return 0;
}