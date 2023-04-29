#include <stdio.h>

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
    int tensu1[4][3] =
    {
        { 91, 63, 78 },
        { 67, 72, 46 },
        { 89, 34, 53 },
        { 32, 54, 34 },
    };
    int tensu2[4][3] =
    {
        { 97, 67, 82 },
        { 73, 43, 46 },
        { 97, 56, 21 },
        { 85, 46, 35 }
    };
    int sum[4][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = tensu1[i][j] + tensu2[i][j];
        }
    }

    puts("1回目の点数");
    print_2d_array(tensu1, 4, 3);
    puts("2回目の点数");
    print_2d_array(tensu2, 4, 3);
    puts("合計点");
    print_2d_array(sum, 4, 3);
    return 0;
}