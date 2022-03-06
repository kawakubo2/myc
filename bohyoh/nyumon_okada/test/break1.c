#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j =  1;  j <= 9; j++) {
            if (i * j > 30) goto abc;
            printf("%d*%d=%2d,",i, j, i * j);
        }
        putchar('\n');
    }
abc:
    return 0;
}

