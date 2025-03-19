#include <stdio.h>

int main(void)
{
    double x[7];

    for (int i = 0; i < 7; i++) {
        x[i] = 0.0;
    }
    for (int i = 0; i < 7; i++) {
        printf("x[%d] = %.1f\n", i, x[i]);
    }

    return 0;
}

