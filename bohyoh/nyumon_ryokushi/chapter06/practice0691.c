#include <stdio.h>

int mypow(int n, int p) {
    int i, result = 1;
    for (i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main(void)
{
    int n, m;
    puts("整数(n)の正の整数乗(m)を求めます。");
    printf("整数n: "); scanf("%d", &n);
    printf("整数m: "); scanf("%d", &m);

    printf("%dの%d乗は%dです。\n", n, m, mypow(n, m));

    return 0;
}

