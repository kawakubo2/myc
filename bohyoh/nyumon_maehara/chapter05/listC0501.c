#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int na;
    printf("要素数: ");
    fscanf(stdin, "%d", &na);

    int *a = calloc(na, sizeof(int));

    if (a == NULL) {
        puts("記憶域の確保に失敗しました。");
        return -1;
    }
    printf("%d個の整数を入力してください。\n", na);
    for (int i = 0; i < na; i++) {
        printf("a[%d]: ", i);
        fscanf(stdin, "%d", &a[i]);
    }
    printf("各要素の値は次の通りです。\n");
    for (int i = 0; i < na; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    free(a);

    return 0;
}