#include <stdio.h>

#define sqr(n) ((n) * (n))

int main(void)
{
    int n;
    double x;
    printf("整数を入力してください: ");
    fscanf(stdin, "%d", &n);
    printf("その数の2乗は%dです。\n", sqr(n));
    printf("n = %d\n", n);

    printf("実数を入力してください: ");
    fscanf(stdin, "%lf", &x);
    printf("その数の2乗は%fです。\n", sqr(x));

    return 0;
}