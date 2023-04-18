#include <stdio.h>
#include <stdlib.h>

int int_cmpr(const int *a, const int *b)
{
    if (*a < *b) {
        return 1;
    } else if (*a > *b ) {
        return -1;
    } else {
        return 0;
    }
}

int main(void)
{
    int i, nx, ky;
    int *x;
    int *p;
    puts("bearch関数による探索");
    printf("要素数: "); fscanf(stdin, "%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("降順に入力してください。\n");
    printf("x[0]: "); fscanf(stdin, "%d", &x[0]);
    for (i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i); fscanf(stdin, "%d", &x[i]);
        } while (x[i] > x[i - 1]);
    }
    printf("探す値: "); fscanf(stdin, "%d", &ky);
    p = bsearch(&ky,
                x,
                nx,
                sizeof(int),
                (int (*)(const void *, const void *))int_cmpr
    );
    if (p == NULL) {
        puts("探索に失敗しました。");
    } else {
        printf("%dはx[%d]にあります。\n", ky, (int)(p - x));
    }
    free(x);

    return 0;
}
