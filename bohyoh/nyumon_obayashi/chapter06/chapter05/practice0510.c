#include <stdio.h>

int main(void)
{
    int i, j, k;
    int a[4][3] = { { 1, 2, 1 }, { 2, 1, 0 }, { 3, 2, 1 }, {2, 1, 1 } };
    int b[3][4] = { { 2, 3, 1, 3 }, { 1, 1, 2, 3 }, { 2, 0, 1, 1 } };
    int c[4][4] = {0};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d", c[i][j]);
        }
        putchar('\n');
    }

    return 0;
}    

