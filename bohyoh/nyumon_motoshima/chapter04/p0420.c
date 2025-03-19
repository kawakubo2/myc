#include <stdio.h>

int main(void)
{
    // 列見出し
    printf("   │");
    for (int i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    putchar('\n');



    // 見出しと九九本体の区切り線
    printf("───┼");
    for (int i = 1; i <= 9; i++) {
        printf("───");
    }
    putchar('\n');


    for (int i = 1; i <= 9; i++) {
        printf(" %1d │", i); // 行見出し
        for (int j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }
        putchar('\n');
    }

    return 0;
}

