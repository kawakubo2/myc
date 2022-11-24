#include <stdio.h>

int main(void);

int main(void)
{
    int x, y;

    x = 15;
    y = 32;

    printf("%f\n", (x + (double)y) / 2);

    return 0;
}