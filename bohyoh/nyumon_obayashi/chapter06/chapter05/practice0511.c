#include <stdio.h>

int main(void)
{
    int i, j;
    int kojin_sum;
    int kamoku_sum[2] = {0};
    int tensu[6][2] =
    {
        { 20, 35 },
        { 30, 45 },
        { 40, 55 },
        { 50, 65 },
        { 60, 75 },
        { 70, 85 }
    };

    puts(" 国語 数学");
    for (i = 0; i < 6; i++) {
        kojin_sum = 0;
        for (j = 0; j < 2; j++) {
            printf("%5d", tensu[i][j]);
            kojin_sum += tensu[i][j];
            kamoku_sum[j] += tensu[i][j];
            
        }
        printf("%4d %4.1f\n", kojin_sum, (double)kojin_sum / 2);
    }
    printf("%5d%5d <= 合計\n", kamoku_sum[0], kamoku_sum[1]);
    printf("%5.1f%5.1f <= 平均\n", (double)kamoku_sum[0] / 6, (double)kamoku_sum[1] / 6);

    return 0;
}


