#include <stdio.h>

int main(void)
{
    int tensu1[4][3] = 
    {
        {91, 63, 78},
        {67, 72, 46},
        {89, 34, 53},
        {32, 54, 34}
    };
    int tensu2[4][3] = 
    {
        {97, 67, 82},
        {73, 43, 46},
        {97, 56, 21},
        {85, 46, 35}
    };

    int i, j;
    puts("1回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu1[i][j]);
        }
        putchar('\n');
    }    
    puts("2回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu2[i][j]);
        }
        putchar('\n');
    }    
    puts("合計点");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu1[i][j] + tensu2[i][j]);
        }
        putchar('\n');
    }

    return 0;
}