#include <stdio.h>

int main(void)
{
    int a = 5, b = 3, c = 0;
    if (a > 2 || c++ > 0) {
        ;
    }
    printf("c=%d\n", c);

    return 0;
}