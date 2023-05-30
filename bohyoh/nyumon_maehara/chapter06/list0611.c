#include <stdio.h>

#define NUMBER 5

int max_of(int v[], int n)
{
    int max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}
int main(void)
{
    int eng[NUMBER];
    int mat[NUMBER];

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (int i = 0; i < NUMBER; i++) {
        printf("[%d] 英語: ", i + 1); fscanf(stdin, "%d", &eng[i]);
        printf("    数学: "); fscanf(stdin, "%d", &mat[i]);
    }
    int max_eng = max_of(eng, NUMBER);
    int max_mat = max_of(mat, NUMBER);

    printf("英語の最高点=%d\n", max_eng);
    printf("数学の最高点=%d\n", max_mat);

    return 0;
}