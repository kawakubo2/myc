#include <stdio.h>

int main(void)
{
    int sum = 0;
    int cnt = 0;
    int retry;
    do {
        int t;
        printf("整数値を入力してください: ");
        fscanf(stdin, "%d", &t);

        sum += t; // sum = sum + t
        cnt += 1; // cnt = cnt + 1  ---> cnt++;

        printf("まだ?<Yes---0 / No---9>: ");
        fscanf(stdin, "%d", &retry);
    } while (retry == 0);

    printf("合計は%dで平均は%.2fです。\n", sum, (double)sum / cnt);
    return 0;
}