#include <stdio.h>

int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int total;
    int n;
    printf("正数: "); fscanf(stdin, "%d", &n);
    total = factorial(n);
    printf("%dの会場は%d\n", n, total);

    return 0;
}