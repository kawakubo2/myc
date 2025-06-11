#include <stdio.h>

#define KOKUGO 0
#define SUGAKU 1
#define EIGO   2

int main(void)
{
    /*
    intの1次元配列には生徒1人分の成績が格納され、
    5人分配列を持った2次元配列がある。
    int score[][3] = {
        // 国語 数学 英語
        { 70, 58, 81 },
        { 85, 99, 67 },
        { 62, 73, 80 },
        { 90, 75, 98 },
        { 79, 83, 66 }
    };

    70  58  81  |  209  69.7
    */
    int score[][3] = {
        { 70, 58, 81 },
        { 85, 99, 67 },
        { 62, 73, 80 },
        { 90, 75, 98 },
        { 79, 83, 66 }
    };

    int snum = sizeof(score) / sizeof(score[0]); // 生徒数
    int knum = sizeof(score[0]) / sizeof(score[0][0]); // 科目数
    int class_sum = 0;
    int class_count = 0;
    int student_sum;
    int kamoku_sum[3] = {0};
    for (int i = 0; i < snum; i++) {
        student_sum = 0;
        for (int j = 0; j < knum; j++) {
            printf("%5d", score[i][j]);
            student_sum += score[i][j];
            kamoku_sum[j] += score[i][j];
            class_sum += score[i][j];
            class_count++;
        }
        printf(" | %4d %5.1f\n", student_sum, (double)student_sum / knum);
    }
    puts("----------------------------");
    for (int i = 0; i < knum; i++) {
        printf("%5d", kamoku_sum[i]);
    }
    printf(" | %4d %5.1f\n", class_sum, (double)class_sum / class_count);
    for (int i = 0; i < knum; i++) {
        printf("%5.1f", (double)kamoku_sum[i] / snum);
    }
    putchar('\n');

    return 0;
}