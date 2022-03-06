#include <stdio.h>

int main(void)
{
    int n;
    int m;

    printf("n:");
    scanf("%d", &n);

    m = n > 10 ? n / 10 : n * 10;

    printf("n = %d, m = %d\n", n, m);

    return 0;
}
