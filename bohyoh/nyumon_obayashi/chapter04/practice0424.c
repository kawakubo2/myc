#include <stdio.h>

int main(void)
{
    int i, j, dansu;
    puts("ピラミッドを作ります。");
    printf("何段ですか : ");
    scanf("%d", &dansu);

    for (i = 1; i <= dansu; i++) {
        for (j = 1; j <= dansu - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i * 2 - 1; j++) {
            putchar('*');
        }
        for (j = 1; j <= dansu - i; j++) {
            putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}

