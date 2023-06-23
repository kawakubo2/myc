#include <stdio.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;

    printf("x * 3 = %.16f\n", x * 3);
    if (x * 10 * 3 == y * 10) {
        printf("等しい\n");
    } else {
        printf("等しくない\n");
    }

    return 0;
}