#include <stdio.h>

double power(double x, int n)
{
    double tmp = 1.0;
    for (int i = 0; i < n; i++) {
        tmp *= x;
    }
    return tmp;
}

int main(void)
{
    double a;
    int b;
    puts("aのb乗を求めます。");
    printf("実数a: "); fscanf(stdin, "%lf", &a);
    printf("整数b: "); fscanf(stdin, "%d", &b);

    printf("%fの%d乗は%.2fです。\n", a, b, power(a, b));

}