#include <stdio.h>

int main(void)
{
    int a, b;
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);

    printf("aの値はbの値の%f%%です。", (a * 100.0) / b);
    return 0;
}