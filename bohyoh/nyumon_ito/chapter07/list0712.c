#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
        printf("x = %f\n", i / 100.0);
    return 0;
}