#include <stdio.h>

int main(void)
{
    int i, j, k;
    int tensu[][4][3] = {
        {
            {91, 63, 78}, 
            {67, 72, 46}, 
            {89, 34, 53}, 
            {32, 54, 34}
        },
        {
            {97, 67, 82}, 
            {73, 43, 46}, 
            {97, 56, 21}, 
            {85, 46, 35}
        },
        {
            { 0, 0, 0},
            { 0, 0, 0},
            { 0, 0, 0},
            { 0, 0, 0},
        }
    };

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            tensu[2][i][j] = tensu[0][i][j] + tensu[1][i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        if (i == 0 || i == 1) {
            printf("---< %d回目の点数 >---\n", i + 1);
        } else {
            printf("---< 1回目と2回目の合計点 >---\n");
        }
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                printf("%5d", tensu[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    } 
    return 0;
}