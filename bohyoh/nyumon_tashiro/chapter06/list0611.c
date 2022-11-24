#include <stdio.h>

#define NUMBER 5

int max_of(int v[], int n)
{
    int i;
    int max = v[0];
    for (i = 0; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main(void)
{
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e, max_m;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("[%d] 英語: ", i + 1); fscanf(stdin, "%d", &eng[i]);
        printf("    数学: ");         fscanf(stdin, "%d", &mat[i]);
    }

    int size = sizeof(eng) / sizeof(eng[0]);
    printf("size=%d\n", size);

    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("英語の最高点=%d\n", max_e);
    printf("数学の最高点=%d\n", max_m);

    return 0;
}