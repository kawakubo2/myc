#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? (x) - (y) : (y) - (x))

int main(void)
{
    int n1, n2;
    double x1, x2;
    printf("整数1を入力してください: ");
    fscanf(stdin, "%d", &n1);
    printf("整数2を入力してください: ");
    fscanf(stdin, "%d", &n2);
    printf("その数の差は%dです。\n", diff(n1, n2));

    printf("実数1を入力してください: ");
    fscanf(stdin, "%lf", &x1);
    printf("実数2を入力してください: ");
    fscanf(stdin, "%lf", &x2);
    printf("その数の差は%fです。\n", diff(x1, x2));

    return 0;
}