#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) 
{
    int i, j, k;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }

    }
}

void print_result(const int a[4][4])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", a[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int a[4][3] = {
        {1, 2, 1},
        {0, 1, 2},
        {1, 1, 0},
        {2, 0, 1},
    };
    int b[3][4] = {
        {1, 2, 1, 2},
        {1, 0, 1, 1},
        {2, 1, 1, 2},
    };
    int c[4][4] = {0};

    mat_mul(a, b, c);

    print_result(c);

}