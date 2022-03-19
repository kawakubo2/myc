#include <stdio.h>

int main(void)
{
    int i, j, dansu;
    puts("ピラミッドを作ります。");
    printf("段数: "); scanf("%d", &dansu);
    if (dansu < 1) return 1;
    for (i = 1; i <= dansu; i++) {
        for (j = 1; j <= dansu - i; j++) {
            putchar('-');
        }
        for (j = 1; j <= i * 2 - 1; j++) {
            putchar('*');
        }
        for (j = 1; j <= dansu - i; j++) {
            putchar('-');
        }
        putchar('\n');
    }
    return 0;
}