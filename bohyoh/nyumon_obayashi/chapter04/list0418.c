#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = -8; i <= 8; i++) {
        for (j = 1; j <= i * i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

