#include <stdio.h>

int main(void)
{
    int i, j;
    int tensu[][2] = {{72, 68}, {92, 87}, {58, 93}, {77, 85}, {90, 80}, {82, 63}};
    int kokugo = 0;
    int sugaku = 0;
    puts(" 国語  数学");
    printf("-----------\n");
    for (i = 0; i < 6; i++) {
        int kojin = 0;
        for (j = 0; j < 2; j++) {
            printf("%5d", tensu[i][j]);
            kojin += tensu[i][j];
            if (j == 0)
                kokugo += tensu[0][j];
            else if (j == 1)
                sugaku += tensu[1][j];
        }
        printf(" | %4d | %4.1f\n", kojin, (double)kojin / 2);
    }
    printf("-----------\n");
    printf("%5d%5d\n", kokugo, sugaku);
    printf("%5.1f%5.1f\n", (double)kokugo / 6, (double)sugaku / 6);

    return 0;
}