#include <stdio.h>

int gcd(int m, int n)
{
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    int mod = m % n;
    if (mod == 0) return n;
    return gcd(n, mod);
}
int main(void)
{
    int n1, n2, answer;
    puts("2つの整数の最大公約数を求めます。");
    printf("整数1: "); scanf("%d", &n1);
    printf("整数2: "); scanf("%d", &n2);
    answer = gcd(n1, n2);
    printf("%dと%dの最大公約数は%dです。\n", n1, n2, answer);
    return 0;
}
