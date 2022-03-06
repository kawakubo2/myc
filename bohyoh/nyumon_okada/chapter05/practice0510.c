#include <stdio.h>

#define NUMBER 6
#define NB_KAMOKU 2
#define KOKUGO 0
#define SUGAKU 1

void print_array(int nums[][NB_KAMOKU], int size)
{
    int i,  j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < NB_KAMOKU; j++) {
            printf("%d, ", nums[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int i, j;
    int score[NUMBER][NB_KAMOKU];
    int kokugo_sum = 0, sugaku_sum = 0;
    int kojin_sum;
    puts("6人分の国語と数学の点数を入力してください。");
    for (i = 0; i < NUMBER; i++) {
        printf("%d番目の生徒 国語 : ", (i + 1)); scanf("%d", &score[i][KOKUGO]);
        printf( "            数学 : "); scanf("%d", &score[i][SUGAKU]);
    }

    printf("国語  数学  合計 平均\n");
    for (i = 0; i < NUMBER; i++) {
        kojin_sum = 0;
        kokugo_sum += score[i][KOKUGO];
        sugaku_sum += score[i][SUGAKU];
        printf("%3d   %3d   ", score[i][KOKUGO], score[i][SUGAKU]);
        kojin_sum = score[i][KOKUGO] + score[i][SUGAKU];
        printf("%4d %4.1f\n", kojin_sum, (double)kojin_sum / NB_KAMOKU);
    }
    printf("%4d %4d\n", kokugo_sum, sugaku_sum);
    printf("%4.1f%4.1f\n", (double)kokugo_sum / NUMBER, (double)sugaku_sum / NUMBER);

    return 0;
}

