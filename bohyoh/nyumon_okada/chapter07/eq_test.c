#include <stdio.h>

int main(void)
{
    double x = 0.2;
    double y = 0.6;

    if (x * 10 * 3 == y * 10) {
        printf("○");
    } else {
        printf("×");
    }
    printf("\n");

    return 0;
}

