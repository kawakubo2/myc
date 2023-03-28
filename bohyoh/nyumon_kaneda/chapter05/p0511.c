#include <stdio.h>

int main(void)
{
    int score[6][2];
    int kokugo_total = 0, sugaku_total = 0;
    puts("6人分の国語と数学の点数を入力してください");
    for (int i = 0; i < 6; i++) {
        printf("===%d番目の学生===\n", i + 1);
        printf("国語: "); fscanf(stdin, "%d", &score[i][0]);
        printf("数学: "); fscanf(stdin, "%d", &score[i][1]);
    }
    printf(" 国語 数学 合計 平均\n");
    for (int i = 0; i < 6; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            printf("%4d", score[i][j]);
            sum += score[i][j];
            if (j == 0) {
                kokugo_total += score[i][0];
            } else {
                sugaku_total += score[i][1];
            }
        }
        printf("  %4d ", sum);
        printf("%4.1f\n", (double)sum / 2);
    }
    printf("国語 合計: %3d  平均: %4.1f\n", kokugo_total, (double)kokugo_total / 6);
    printf("数学 合計: %3d  平均: %4.1f\n", sugaku_total, (double)sugaku_total / 6);

    return 0;
}