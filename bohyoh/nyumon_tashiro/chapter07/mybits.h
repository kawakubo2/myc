#ifndef MYBITS_H
#define MYBITS_H

#include <stdio.h>
int count_bits(unsigned x)
{
    int bits = 0;
    while(x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1': '0');
    }
}

void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < i) ? n - 1: i - 1;
    for (; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

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

#endif