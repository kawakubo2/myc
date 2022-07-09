#include <stdio.h>
#include "put_chars.h"

int main(void)
{
    int i, dansu;
    puts("ピラミッドを作ります。");
    do {
        printf("段数: "); scanf("%d", &dansu);
    } while (dansu <= 0);

    for(i = 1; i <= dansu; i++) {
        put_chars('-', dansu - i);
        put_chars('*', i * 2 - 1);
        put_chars('-', dansu - i);
        putchar('\n');
    }
    return 0;
}