#include <stdio.h>
#include <stdlib.h>

void print2darray(const int score[4][3], char *desc)
{
    printf("---< %s >---\n", desc);
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", score[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int i, j, k;
    int tensu[][4][3] = 
    {
        { { 91, 63, 78 }, { 67, 72, 46 }, { 89, 34, 53 }, { 32, 54, 34 } },
        { { 97, 67, 82 }, { 73, 43, 46 }, { 97, 56, 21 }, { 85, 46, 35 } },
        { { 56, 77, 62 }, { 77, 82, 72 }, { 47, 78, 47 }, { 80, 68, 65 } },
        { {0}, {0}, {0}                                                  } 
    };

    int size = sizeof(tensu) / sizeof(tensu[0]);


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < size - 1; k++) {
                tensu[size - 1][i][j] += tensu[k][i][j];
            }
        }
    }

    char s[size][64];
    char *str[size];
    for (i = 0; i < size - 1; i++) {
        sprintf(s[i], "%d回目の点数", i + 1);
        str[i] = s[i];
    }
    str[size - 1] = "合計";

    for (i = 0; i < size; i++) {
        print2darray(tensu[i], str[i]);
    }

    return 0;
}

