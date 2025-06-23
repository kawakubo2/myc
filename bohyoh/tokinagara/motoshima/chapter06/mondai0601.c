#include <stdio.h>

int min2(int a, int b)
{
    return a < b ? a : b;
}

int main(void)
{
    int a, b;
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);
    int m = min2(a, b);
    printf("小さい値: %d\n", m);

    return 0;
}