#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;
    double epsilon = 10e-9; // 0.000000001

    printf("x * 3 = %.16f\n", x * 3);
    if (abs(x * 3 - y) < epsilon) {
        puts("等しい");
    } else {
        puts("等しくない");
    }

    return 0;
}