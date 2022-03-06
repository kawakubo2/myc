#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 5;
    int z;
    if (x > 5 && (y *= 2) >= 10) {
        z = 100;
    } else {
        z = 10;
    }

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

