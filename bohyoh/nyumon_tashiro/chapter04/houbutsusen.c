#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 25; i >= 0; i--) {
        for (j = -5; j <= 5; j++) {
            if (j * j > i) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}