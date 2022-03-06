#include <stdio.h>

int main(void)
{
    int i, j, count = 0;
    for (i = 1; i <= 99; i++) {
        for (j = 1; j <= 99; j++) {
            count++;
            if (i * j > 400) {
                break;
            }
            printf("%5d", i * j);
        }
        putchar('\n');
    }
    printf("回った回数; %d\n", count);

    return 0;
}

