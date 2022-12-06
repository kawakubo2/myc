#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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