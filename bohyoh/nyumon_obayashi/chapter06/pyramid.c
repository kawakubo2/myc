#include <stdio.h>

void put_chars(int ch, int n)
{
    while (n-- > 0)
        putchar(ch);
}

int main(void)
{
    int i, dansu;
    puts("ピラミッドを作ります。");
    printf("段数を入力してください : ");
    scanf("%d", &dansu);

    for (i = 1; i <= dansu; i++) {
        put_chars('-', dansu - i);
        put_chars('*', i * 2 - 1);
        put_chars('-', dansu - i);
        putchar('\n');
    }

    return 0;
}

