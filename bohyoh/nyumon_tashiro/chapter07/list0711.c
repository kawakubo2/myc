#include <stdio.h>

int main(void)
{
    float x;
    for (x = 0.0; x <= 1.0; x += 0.01) {
        printf("x = %f\n", x);
    }
    float y;
    for (y = 0.0; y <= 100; y++) {
        printf("y = %f\n", y / 100.0);
    }

    return 0;
}