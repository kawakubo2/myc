#include <stdio.h>
#include "chapter06.h"

#define NUMBER 5

int main(void)
{
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e, max_m;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("[%d] 英語: ", i + 1); scanf("%d", &eng[i]);
        printf("    数学: "); scanf("%d", &mat[i]);
    }

    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("英語の最高点=%d\n", max_e);
    printf("数学の最高点=%d\n", max_m);

    return 0;
}

