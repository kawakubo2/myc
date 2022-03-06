#include <stdio.h>

int main(void)
{
    int n = 10;
    printf("%u\n", (unsigned)sizeof((double) - 1));
    printf("%u\n", (unsigned)sizeof(n + 2.0));

    return 0;
}

