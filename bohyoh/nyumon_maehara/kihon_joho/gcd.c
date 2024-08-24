#include <stdio.h>

int gcd(int a, int b)
{
    int mod = a % b;
    if (mod == 0) return b;
    gcd(b, mod);
}

int main(void)
{
    printf("最大公約数(gcd)\n");
    int m, n;
    fscanf(stdin, "%d%d", &m, &n);
    if (m < n) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    printf("%dと%dの最大公約数は%d\n", m, n, gcd(m, n));

    return 1;
}