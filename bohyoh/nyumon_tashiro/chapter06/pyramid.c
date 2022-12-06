#include <stdio.h>
#include "print_util.h"

int main(void)
{
    int i, dansu;
    printf("ピラミッドの段数を入力してください: "); fscanf(stdin, "%d", &dansu);
    for (i = 1; i <= dansu; i++) {
        put_chars('-', dansu - i);
        put_chars('*', i * 2 - 1);
        put_chars('-', dansu - i);
        putchar('\n');
    }
    return 0;
}