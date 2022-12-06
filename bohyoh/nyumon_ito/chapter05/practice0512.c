#include <stdio.h>

int main(void)
{
    int i, j;
    int tensu[3][4][3] = 
    {
        {
            { 91, 63, 78 },
            { 67, 72, 46 },
            { 89, 34, 53 },
            { 32, 54, 34 }
        },
        {
            { 97, 67, 82 },
            { 73, 43, 46 },
            { 97, 56, 21 },
            { 85, 46, 35 }
        },
        {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        }
    };
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            tensu[2][i][j] = tensu[0][i][j] + tensu[1][i][j];
        }
        putchar('\n');
    }
    puts("1回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[0][i][j]);
        }
        putchar('\n');
    }
    puts("2回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[1][i][j]);
        }
        putchar('\n');
    }
    puts("合計点");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[2][i][j]);
        }
        putchar('\n');
    }

    return 0;
}