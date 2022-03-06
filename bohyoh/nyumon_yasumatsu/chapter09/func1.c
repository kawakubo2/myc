#include <stdio.h>

void twice(int *n)
{
    *n *= 2;
}
int main(void)
{
    int a = 5;
    puts("2倍する前");
    printf("a = %d\n", a);

    twice(&a);

    puts("2倍する前");
    printf("a = %d\n", a);

    return 0;
}
