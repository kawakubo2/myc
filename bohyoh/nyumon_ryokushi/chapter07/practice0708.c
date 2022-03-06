#include <stdio.h>

int main(void)
{
    printf("float: %u\n", (unsigned)sizeof(float));
    printf("double: %u\n", (unsigned)sizeof(double));
    printf("long double: %u\n", (unsigned)sizeof(long double));

    return 0;
}
