#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    if (*n > 100)
        *n = 100;
}

int main(void)
{
    int x;
    printf("整数x: ");
    scanf("%d", &x);

    adjust_point(&x);

    printf("x = %d\n", x);

    return 0;
}

