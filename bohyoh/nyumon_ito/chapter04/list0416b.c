#include <stdio.h>

int main(void)
{
    int i, j, seki;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            seki = i * j;
            if (seki % 10 == 4 || seki / 10 == 4) {
                printf("   ");
                continue;
            }
            printf("%3d", seki);
        }
        putchar('\n');
    }
}