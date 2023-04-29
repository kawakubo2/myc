#include <stdio.h>

#define KOKUGO 0
#define SUGAKU 1

#define NUMBER 6

int main(void)
{
    /*
    int score[NUMBER][2] =
    {
        { 10, 15 },
        { 20, 25 },
        { 30, 35 },
        { 40, 45 },
        { 50, 55 },
        { 60, 65 }
    };
    */

    int score[NUMBER][2];

    for (int i = 0; i < NUMBER; i++) {
        printf("国語 数学: ");
        fscanf(stdin, "%d%d", &score[i][KOKUGO], &score[i][SUGAKU]);
    }

    puts("国語 数学 合計 平均");
    puts("------------------");

    int kokugo_total = 0, sugaku_total = 0;
    for (int i = 0; i < NUMBER; i++) {
        int student_total = score[i][KOKUGO] + score[i][SUGAKU];
        kokugo_total += score[i][KOKUGO];
        sugaku_total += score[i][SUGAKU];
        printf("%4d %4d %4d %4.1f\n", score[i][KOKUGO], score[i][SUGAKU], student_total, (double)student_total / 2);       
    }
    printf("%4d %4d\n", kokugo_total, sugaku_total);
    printf("%4.1f %4.1f\n",  (double)kokugo_total / NUMBER, (double)sugaku_total / NUMBER);

    return 0;
}