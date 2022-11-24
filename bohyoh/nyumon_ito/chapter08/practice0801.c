#include <stdio.h>

#define diff(x, y) ((x) > (y) ? (x) - (y) : (y) - (x))

int main(void)
{
    int a, b;
    double x, y;
    printf("整数1: "); scanf("%d", &a);
    printf("整数2: "); scanf("%d", &b);
    printf("整数1と整数2の差は%d\n", diff(a, b));

    printf("実数1: "); scanf("%lf", &x);
    printf("実数2: "); scanf("%lf", &y);
    printf("実数1と実数2の差は%f\n", diff(x, y));
}