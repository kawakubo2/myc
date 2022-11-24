#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;
    printf("x * 10 * 3 = %.16lf\n", x * 10 * 3);
    if (x * 10 * 3 == y * 10) {
        puts("等しい");
    }
    double epsilon = 1.0e-16;
    double a = (x * 3 - y) > 0 ? (x * 3 - y) : (y - x * 3);
    if (a < epsilon) {
        printf("等しい\n");
    }
}