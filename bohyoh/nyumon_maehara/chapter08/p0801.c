#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void)
{
    int a, b;
    double x, y;
    printf("整数a: "); fscanf(stdin, "%d", &a);
    printf("整数b: "); fscanf(stdin, "%d", &b);
    printf("浮動小数点x: "); fscanf(stdin, "%lf", &x);
    printf("浮動小数点y: "); fscanf(stdin, "%lf", &y);

    printf("%d - %d = %d\n", a, b, diff(a, b));
    printf("%lf - %lf = %f\n", x, y, diff(x, y));
    printf("%d - %lf = %f\n", a, x, diff(a, x));
    printf("%lf - %d = %f\n", y, b, diff(y, b));


    return 0;
}