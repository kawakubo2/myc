#include <stdio.h>

int main(void)
{
    int i, j;
    int counter = 0;
    for (i = 1; i <= 99; i++) {
        for (j = 1; j <= 99; j++) {
            counter++;
            if (i * j > 300) break;
            printf("%4d", i * j);
        }
        putchar('\n');
    }
    printf("%d回\n", counter);

    return 0;
}