#include <stdio.h>

int main(void)
{
    int n;
    double x;

    n = 9.99; // double型をint型へ代入できるが、小数点は切り捨て
    x = 9.99;

    printf("int   型の変数 nの値  : %d\n", n);
    printf("      型の変数 n / 2 : %d\n", n / 2);

    printf("double型の変数 xの値  : %f\n", x);
    printf("      型の変数 x / 2 : %f\n", x / 2);

    return 0;
}