#include <stdio.h>

void mat_add(int a[4][4][3])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            a[2][i][j] = a[0][i][j] + a[1][i][j];
        }
    }
}

void mat_print(const int m[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", m[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int tensu[4][4][3] = {
        {
            {91, 63, 78},
            {67, 72, 46},
            {89, 34, 53},
            {32, 54, 34}
        },
        {
            {97, 67, 82},
            {73, 43, 46},
            {97, 56, 21},
            {85, 46, 35}
        },
        {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
        }
    };
    mat_add(tensu);
    puts("1回目の点数"); mat_print(tensu[0]);
    puts("2回目の点数"); mat_print(tensu[1]);
    puts("合計点"); mat_print(tensu[2]);

    return 0;
}