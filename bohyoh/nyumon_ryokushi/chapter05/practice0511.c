#include <stdio.h>

#define KOKUGO 0
#define SUGAKU 1

int main(void)
{
    int i, j;
    int score[6][2] = {
                        { 72, 82 },
                        { 58, 91 },
                        { 85, 78 },
                        { 99, 70 },
                        { 50, 80 },
                        { 72, 88 }
    };

    int kokugo_sum = 0;
    double kokugo_avg;
    int sugaku_sum = 0;
    double sugaku_avg;
    for (i = 0; i < 6; i++) {
        int kojin_sum = 0;
        for (j = 0; j < 2; j++) {
            printf("%5d", score[i][j]);
            kojin_sum += score[i][j];
            if (j == KOKUGO) kokugo_sum += score[i][j];
            if (j == SUGAKU) sugaku_sum += score[i][j];
        }
        printf(" |%4d |%5.1f\n", kojin_sum, (double)kojin_sum / 2);
    }
    printf("-----------------------\n");
    printf("%5d%5d%s\n", kokugo_sum, sugaku_sum, "<---科目別合計");
    printf("%5.1f%5.1f%s\n", (double)kokugo_sum / 6, (double)sugaku_sum / 6, "<---科目別平均");

    return 0;
}

