#include <stdio.h>

int main(void)
{
    int n = 10;
    int m = n;
    int ans;

    ans = m / 4;
    printf("%d / 4 = %d\n", m, ans);

    m = n;
    m = m >> 2;
    printf("%d >> 2 = %d\n", n, m);

    return 0;
}

