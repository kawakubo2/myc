#include <stdio.h>

int main(void)
{
    int n = 10;
    int m = -n;

    int x = ~n + 1;

    printf("n = %d, m = %d, x = %d\n", n, m, x);

    return 0;
}
