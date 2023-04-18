#include <stdio.h>
#include <stdlib.h>

int long_cmpr(const long *a, const long *b)
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
    int i, nx;
    long ky;
    long *x;
    long *p;
    puts("bearch関数による探索");
    printf("要素数: "); fscanf(stdin, "%d", &nx);
    x = calloc(nx, sizeof(long));

    printf("降順に入力してください。\n");
    printf("x[0]: "); fscanf(stdin, "%ld", &x[0]);
    for (i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i); fscanf(stdin, "%ld", &x[i]);
        } while (x[i] > x[i - 1]);
    }
    printf("探す値: "); fscanf(stdin, "%ld", &ky);
    p = bsearch(&ky,
                x,
                nx,
                sizeof(long),
                (int (*)(const void *, const void *))long_cmpr
    );
    if (p == NULL) {
        puts("探索に失敗しました。");
    } else {
        printf("%ldはx[%d]にあります。\n", ky, (int)(p - x));
    }
    free(x);

    return 0;
}
