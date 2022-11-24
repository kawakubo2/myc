#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++) {
        printf("%.15f\n", i / 100.0);
    }
    printf("\n");
}