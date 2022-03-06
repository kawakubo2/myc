#include <stdio.h>

#define STUDENT 4
#define KAMOKU  3
#define FIRST 0
#define SECOND 1
#define SUM 2


void print_score(const int a[3][STUDENT][KAMOKU], int top_index, char *desc)
{
    printf("%s\n", desc);
    int i, j;
    for (i = 0; i < STUDENT; i++) {
        for (j = 0; j < KAMOKU; j++) {
            printf("%4d", a[top_index][i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int i, j, k;

    int score[3][STUDENT][KAMOKU] = {
         { { 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 } },
         { { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } },
         { {  0,  0,  0 }, {  0,  0,  0 }, {  0,  0,  0 }, {  0,  0,  0 } }
    };

    for (i = 0; i < STUDENT; i++) {
        for (j = 0; j < KAMOKU; j++) {
            score[SUM][i][j] = score[FIRST][i][j] + score[SECOND][i][j];
        }
    }

    print_score(score, FIRST,"1回目の点数");
    print_score(score, SECOND,"2回目の点数");
    print_score(score, SUM, "合計点");

    return 0;
}

