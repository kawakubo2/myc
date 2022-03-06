#include <stdio.h>

int main(void)
{
    int y, x;
    for (y = 100; y >= 0; y--) {
        for (x = -10; x <= 10; x++) {
            if (y == x * x) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}

