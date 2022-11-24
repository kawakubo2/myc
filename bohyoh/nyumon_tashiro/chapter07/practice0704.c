#include <stdio.h>
#include "mybits.h"

unsigned set(unsigned x, int pos)
{
    unsigned mask = 1U << pos;
    return x | mask;
}
unsigned reset(unsigned x, int pos)
{
    unsigned mask = ~(1U << pos);
    return x & mask;
}
unsigned inverse(unsigned x, int pos)
{
    unsigned mask = 1U << pos;
    return x ^ mask;
}

int main(void)
{
    unsigned x, n, a1, a2, a3;
    printf("非負の整数: "); fscanf(stdin, "%u", &x);
    print_bits(x);
    putchar('\n');
    printf("対象となる位置: "); fscanf(stdin, "%u", &n);

    a1 = set(x, n);
    print_bits(a1);
    putchar('\n');

    a2 = reset(x, n);
    print_bits(a2);
    putchar('\n');

    a3 = inverse(x, n);
    print_bits(a3);
    putchar('\n');

    return 0;
}
