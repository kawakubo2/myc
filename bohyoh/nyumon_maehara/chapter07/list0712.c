#include <stdio.h>

int main(void)
{
    for (int x = 0; x <= 100; x += 1) {
        printf("x = %f\n", x / 100.0);
    }

    return 0;
}