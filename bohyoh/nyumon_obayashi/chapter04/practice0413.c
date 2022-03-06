#include <stdio.h>

int main(void)
{
    int i, num, sum = 0;
    printf("正の整数を入力してください : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        sum += i;
    }

    printf("1～%dの和は%dです。\n", num, sum);

    return 0;
}

