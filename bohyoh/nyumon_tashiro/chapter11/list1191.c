#include <stdio.h>

int main(void)
{
    int x = 10;
    int *y, *z;
    y = &x;
    z = y;
    *z = 20;
    printf("x=%d\n", x);

    return 0;
}