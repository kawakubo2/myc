#include <stdio.h>

int main()
{
    double x, y;
    x = 0.2;
    y = 0.6;
    // printf("0.2 * 3 = %.16f\n", x * 3);
    if (x * 10 * 3 == y * 10) {
        puts("等しい");
    } else {
        puts("等しくない");
    }
    return 0;
}