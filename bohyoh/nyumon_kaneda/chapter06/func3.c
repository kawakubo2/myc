#include <stdio.h>

int sumup(int n)
{
    if (n != 1) return n + sumup(n - 1);
    return 1;
}

int main(void)
{
    int n;
    printf("整数: "); fscanf(stdin, "%d", &n);
    printf("%d\n", sumup(n));

    return 0;
}