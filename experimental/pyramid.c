#include <stdio.h>

int main(void)
{
    int i, j;
    int dansu;

    printf("ピラミッドの段数を入力してください : ");
    scanf("%d", &dansu);

    for (i = 1; i <= dansu; i++) {
        for (j = 0; j < dansu - i; j++) {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++) {
            printf("*");
        }
        for (j = 0; j < dansu - i; j++) {
            printf(" ");
        }
        putchar('\n');
    }

    return 0;
}

