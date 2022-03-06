#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    int i, j, k;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_array(int asize, int bsize, int array[asize][bsize])
{
    int i, j;
    for (i = 0; i < asize; i++) {
        for (j = 0; j < bsize; j++) {
            printf("%d ", array[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}

int main(void)
{
    int a[][3] = { { 1, 2, 1 }, { 0, 1, 1 }, { 2, 0, 1 }, { 2, 2, 1 } };
    int b[][4] = { { 2, 0, 1, 1 }, { 1, 1, 2, 0 }, { 0, 1, 1, 2 } };

    puts("--- 行列A ---");
    print_array(4, 3, a);
    puts("--- 行列B ---");
    print_array(3, 4, b);

    int c[4][4] = {0};

    mat_mul(a, b, c);

    print_array(4, 4, c);

    return 0;
}

