#include <stdio.h>
#define AX 5
#define AY 4
#define BX 4
#define BY 3
int main(void)
{
    int i, j, k;
    if (AY != BX) return -1;
    int a[AX][AY] = { 
                        { 1, 2, 1, 0 }, 
                        { 2, 1, 0, 1 }, 
                        { 3, 2, 1, 1 }, 
                        { 2, 1, 1 ,2 }, 
                        { 0, 0, 1, 1 }
                    };
    int b[BX][BY] = { 
                        { 2, 3, 1 }, 
                        { 1, 1, 2 }, 
                        { 2, 0, 1 }, 
                        { 0, 1, 1 }
                    };
    int c[AX][BY] = {0};

    for (i = 0; i < AX; i++) {
        for (j = 0; j < BY; j++) {
            for (k = 0; k < AY; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < AX; i++) {
        for (j = 0; j < BY; j++) {
            printf("%3d", c[i][j]);
        }
        putchar('\n');
    }

    return 0;
}    

