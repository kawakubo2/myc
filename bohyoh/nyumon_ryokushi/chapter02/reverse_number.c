#include <stdio.h>

int main(void)
{
    int num, org;
    printf("符号なしの整数値を入力してください:");
    scanf("%d", &num);
    org = num;

    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("%dを逆順にした整数値は%d\n", org, reverse);

    return 0;
}

