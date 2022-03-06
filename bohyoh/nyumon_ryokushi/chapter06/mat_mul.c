#include <stdio.h>

// 行列の積を計算するプログラム
// 問題を簡単にするためにN行X列とX行M列の計算を行う
#define N 5
#define M 4
#define X 3

void mat_mul(const int a[N][X], const int b[X][M], int c[N][M])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < X; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_array(const int n[N][M])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%3d", n[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int x[N][X] = {
        { 2, 3, 1 },
        { 1, 4, 2 },
        { 2, 1, 3 },
        { 0, 5, 1 },
        { 2, 1, 2 }
    };

    int y[X][M] = {
        { 3, 1, 2, 1 },
        { 2, 4, 2, 5 },
        { 1, 0, 3, 4 }
    };

    int z[N][M] = { {0}, {0}, {0}, {0} };


    mat_mul(x, y, z);

    print_array(z);

    return 0;
}

