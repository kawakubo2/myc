#include <stdio.h>

int main(void)
{
    int i, j;
    
    // 一番上の罫線
    printf("┌───┬");
    for (i = 1; i <= 8; i++) {
        printf("───┬");
    }
    printf("───┐\n");


    // jの見出し
    printf("│   │");
    for (i = 1; i <= 9; i++) {
        printf("%3d│", i);
    }
    putchar('\n');

    // jの見出しと段の間の罫線
    printf("├───┼");
    for (i = 1; i <= 8; i++) {
        printf("───┤");
    }
    printf("───┤\n");
    
    for (i = 1; i <= 9; i++) {
        printf("│%3d│", i);
        for (j = 1; j <= 9; j++) {
            printf("%3d│", i * j);
        }
        putchar('\n');

        if (i <= 8) {
            // 段と段の間の罫線
            printf("├───┼");
            for (j = 1; j <= 8; j++) {
                printf("───┤");
            }
            printf("───┤\n");
        }
    }
    // 一番下の罫線
    printf("└───┴");
    for (i = 1; i <= 8; i++) {
        printf("───┴");
    }
    printf("───┘\n");

    return 0;
}

