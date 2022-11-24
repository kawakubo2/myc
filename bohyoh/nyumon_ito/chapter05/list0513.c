#include <stdio.h>
void print_tensu(int n, int m, const int tensu[n][m])
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%4d", tensu[i][j]);
        }
        putchar('\n');
    }
}
int main(void)
{
    int i, j;
    int tensu1[4][3] = 
    {
        { 91, 63, 78 },
        { 67, 72, 46 },
        { 89, 34, 53 },
        { 32, 54, 34 }
    };
    int tensu2[4][3] = 
    {
        { 97, 67, 82 },
        { 73, 43, 46 },
        { 97, 56, 21 },
        { 85, 46, 35 }
    };
    int sum[4][3];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = tensu1[i][j] + tensu2[i][j];
        }
        putchar('\n');
    }
    puts("1回目の点数");
    print_tensu(4, 3, tensu1);
    puts("2回目の点数");
    print_tensu(4, 3, tensu2);
    puts("合計点");
    print_tensu(4, 3, sum);

    return 0;
}