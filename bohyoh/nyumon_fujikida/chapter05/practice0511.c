#include <stdio.h>

#define NB_STUDENT 6
#define NB_KAMOKU 2
#define KOKUGO 0
#define SUGAKU 1

int main(void)
{
    int i, j, student_sum;
    int kamoku_sum[NB_KAMOKU] = {0};

    int tensu[NB_STUDENT][NB_KAMOKU] = { { 2, 5 }, { 7, 6 }, { 11, 5 },\
        { 3, 8 }, { 8, 12 }, { 9, 3 } };
    
    printf("国語 数学 合計 平均\n");
    for (i = 0; i < NB_STUDENT; i++) {
        student_sum = 0;
        for (j = 0; j < NB_KAMOKU; j++) {
            printf("%4d", tensu[i][j]);
            if (j == KOKUGO) {
                kamoku_sum[KOKUGO] += tensu[i][j];
            } else if (j == SUGAKU) {
                kamoku_sum[SUGAKU] += tensu[i][j];
            }
            student_sum += tensu[i][j];
        }
        printf(" %4d %4.1f\n",  student_sum, (double)student_sum / NB_KAMOKU);
    }
    printf("-----------------\n");
    printf("%4d%4d <- 科目別合計\n", kamoku_sum[KOKUGO], kamoku_sum[SUGAKU]);
    printf("%4.1f%4.1f <- 科目別平均\n", (double)(kamoku_sum[KOKUGO]) / NB_STUDENT,\
                         (double)(kamoku_sum[SUGAKU]) / NB_STUDENT);

    return 0;
}
