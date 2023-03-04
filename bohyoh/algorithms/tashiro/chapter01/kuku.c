#include <stdio.h>

int main(void)
{
    int i, j, count = 0;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            count++;
            if (i * j > 30) goto loopend;
            printf("%3d", i * j);
        }
        putchar('\n');
    }
loopend:
    printf("回数=%d\n", count);
    return 0;
}