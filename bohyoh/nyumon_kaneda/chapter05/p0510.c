#include <stdio.h>

int main(void)
{
    int a[4][3] =
    {
        {1, 0, 2},
        {-1, 1, 1},
        {0, 1, 2},
        {1, 1, 2},
    };
    int b[3][4] = 
    {
        {1, 2, 1, 1},
        {1, 1, 1, 2},
        {-1, 0, 1, 1}
    };
    int c[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d", c[i][j]);
        }
        putchar('\n');
    }
}