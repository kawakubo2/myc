#include <stdio.h>

int main(void)
{
    puts("正の整数値を加算します(終了は-9999): ");

    int sum = 0;
    while(1) {
        int no;
        printf("整数: "); scanf("%d", &no);
        if (no == -9999) break;
        if (no <= 0) continue;
        sum += no;
    }

    printf("正の整数の合計は%dです。\n", sum);

    return 0;
}

