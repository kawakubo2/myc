#ifndef MY_SCAN_H
#define MY_SCAN_H
#include <stdio.h>
int scan_pint()
{
    int tmp;
    do {
        printf("正の整数を入力してください。");
        scanf("%d", &tmp);
        if (tmp <= 0)
            puts("正でない数を入力しないでください。");
    } while (tmp <= 0);
    return tmp;
}
int scan_range(int min, int max)
{
    if (min > max) {
        printf("第1引数が第2引数以下になるよう入力してください。\n");
    }
    int tmp;
    do {
        printf("%d～%dの整数を入力してください。\n", min, max);
        scanf("%d", &tmp);
    } while (tmp < min || tmp > max);
    return tmp;
}
#endif