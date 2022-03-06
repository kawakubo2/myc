#include <stdio.h>

int main(void)
{
    int i, total = 1;
    for (i = 5; i >= 1; i--) {
        total *= i;
    }
    printf("%dの階乗は%dです。\n", 5, total);

    return 0;

}
