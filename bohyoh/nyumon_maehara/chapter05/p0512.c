#include <stdio.h>

#define FIRST 0
#define SECOND 1
#define SUM 2

void print_2d_array(int a[][3], int size2d, int size1d)
{
    for (int i = 0; i < size2d; i++) {
        for (int j = 0; j < size1d; j++) {
            printf("%4d", a[i][j]);
        }
        putchar('\n');
    }
} 

int main(void)
{
    int tensu[3][4][3] =
    {
        // 1回目のテスト
        {
            { 91, 63, 78 },
            { 67, 72, 46 },
            { 89, 34, 53 },
            { 32, 54, 34 },
        },
        // 2回目のテスト
        {
            { 97, 67, 82 },
            { 73, 43, 46 },
            { 97, 56, 21 },
            { 85, 46, 35 }
        },
        // 合計点
        {
            {  0,  0,  0 },
            {  0,  0,  0 },
            {  0,  0,  0 },
            {  0,  0,  0 },
        }
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            tensu[SUM][i][j] = tensu[FIRST][i][j] + tensu[SECOND][i][j];
        }
    }

    puts("1回目の点数");
    print_2d_array(tensu[FIRST], 4, 3);
    puts("2回目の点数");
    print_2d_array(tensu[SECOND], 4, 3);
    puts("合計点");
    print_2d_array(tensu[SUM], 4, 3);
    return 0;
}