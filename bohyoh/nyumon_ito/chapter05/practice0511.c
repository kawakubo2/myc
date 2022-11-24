#include <stdio.h>

int main(void)
{
    int i, j;
    int kokugoTotal = 0;
    int sugakuTotal = 0;
    int studentTotal = 0;
    int score[6][2] = {
        {70, 60},
        {40, 50},
        {60, 70},
        {50, 40},
        {50, 50},
        {32, 93}
    };
    puts(" 国語 数学  合計 平均 ");
    for (i = 0; i < 6; i++) {
        studentTotal = score[i][0] + score[i][1];
        kokugoTotal += score[i][0];
        sugakuTotal += score[i][1];
        printf("%4d %4d", score[i][0], score[i][1]);
        printf("%6d %5.1f", studentTotal, (double)studentTotal / 2);   
        putchar('\n');
    }
    printf("%4d %4d <--- 合計\n", kokugoTotal, sugakuTotal);
    printf("%4.1f %4.1f <--- 平均\n", (double)kokugoTotal / 6, (double)sugakuTotal / 6);
    return 0;
}