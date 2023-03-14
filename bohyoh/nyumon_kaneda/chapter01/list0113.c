#include <stdio.h>

int main(void)
{
    int n1, n2;
    puts("2つの整数を入力してください。");
    printf("整数n1: "); scanf("%d", &n1);
    printf("整数n2: "); scanf("%d", &n2);

    printf("それらの和は%dです。\n", n1 + n2);

    return 0;
}