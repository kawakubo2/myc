#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1;
outer:
    if (i > 9) goto exit1;
        j = 1;
inner:
        if (j <= 9) {
            printf("%3d*%3d=%3d,", i, j, i*j);
            j++;
            goto inner;
        } else {
            i++;
            putchar('\n');
            goto outer;
        }
exit1:
        return 0;
}

