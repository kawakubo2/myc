#include <stdio.h>

int main(void)
{
    int i, j;
    printf("   |");
    // 列の数字
    for (i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    printf("\n");
    // 罫線
    printf("---+");
    for (i = 1; i <= 9; i++) {
        printf("---");
    }
    printf("\n");
    for (i = 1; i <= 9; i++) {
        printf(" %1d |", i);
        for (j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }

}