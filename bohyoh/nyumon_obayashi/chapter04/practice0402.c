#include <stdio.h>
#include "func1.h"

int main(void)
{
    int n1, n2, temp, sum;
    puts("2つの整数の間の合計を計算します。");
    printf("整数1 : "); scanf("%d", &n1);
    printf("整数2 : "); scanf("%d", &n2);

    swap(&n1, &n2);

    sum = 0;
    for (int i = n1; i <= n2; i++) {
        sum += i;
    }

    printf("%d以上%d以下の全整数の和は%dです。\n", n1, n2, sum);

    return 0;
}

