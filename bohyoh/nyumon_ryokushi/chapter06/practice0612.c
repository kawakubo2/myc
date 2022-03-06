#include <stdio.h>

// 行列の積を計算するプログラム
// 問題を簡単にするために3行2列と2行3列だけを扱う

void mat_mul(const int a[3][2], const int b[2][3], int c[3][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
//            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
            for (k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_array(const int n[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", n[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int x[3][2] = {
        { 1, 5 },
        { 3, 2 },
        { 5, 1 }
    };

    int y[2][3] = {
        { 2, 2, 1 },
        { 5, 1, 3 }
    };

    int z[3][3] = { {0}, {0}, {0} };

    mat_mul(x, y, z);

    print_array(z);
}

