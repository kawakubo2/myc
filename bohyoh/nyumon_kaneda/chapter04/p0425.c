#include <stdio.h>

int main(void)
{
    int dansu;
    puts("ピラミッドを作ります。");
    printf("何段ですか: ");
    fscanf(stdin, "%d", &dansu);

    for (int i = 1; i <= dansu; i++) {
        // 空白
        for (int j = 1; j <= i - 1; j++) {
            putchar('-');
        }
        /*
            dansu * 2 - 1 ---> 一番上の段の個数
            (i - 1) * 2   ---> 二段目以降から2個ずつ減らす
        */
        for (int j = 1; j <= (dansu * 2 - 1) - ((i - 1) * 2); j++) {
            printf("%d", i % 10);
        }
        for (int j = 1; j <= i - 1; j++) {
            putchar('-');
        }
        putchar('\n');
    }
    return 0;
}