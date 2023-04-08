#include <stdio.h>

// pyramid.c
void put_chars(int num, int c)
{
    while(num-- > 0) {
        putchar(c);
    }
}

int main(void)
{
    int dansu;
    puts("ピラミッドを作成します");
    printf("段数を入力してください: ");
    fscanf(stdin, "%d", &dansu);

    for (int i = 1; i <= dansu; i++) {
        put_chars(dansu - i, '-');
        put_chars(i * 2 - 1, '*');
        put_chars(dansu - i, '-');
        putchar('\n');
    }

    return 0;
}