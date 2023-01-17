#include <stdio.h>

int main(void);

int main(void)
{
    int x = 123;
    int *p = &x;
    printf("xの値は %d、アドレスは %p です\n", x, p);

    return 0;
}