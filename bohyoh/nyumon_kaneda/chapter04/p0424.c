#include <stdio.h>

int main(void)
{
    int dansu;
    puts("ピラミッドを作ります。");
    printf("何段ですか: ");
    fscanf(stdin, "%d", &dansu);

    for (int i = 1; i <= dansu; i++) {
        // 空白
        for (int j = 1; j <= dansu - i; j++) {
            putchar('-');
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            putchar('*');
        }
        for (int j = 1; j <= dansu - i; j++) {
            putchar('-');
        }
        putchar('\n');
    }
    return 0;
}