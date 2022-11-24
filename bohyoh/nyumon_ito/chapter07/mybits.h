#ifndef MYBIT_H
#define MYBIT_H
#include <stdio.h>

int count_bits(unsigned int x)
{
    int bits = 0;
    while(x) {
        if (x & 1) bits++;
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
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1) ? '1': '0');
}
unsigned set(unsigned x, int pos)
{
    unsigned mask = 1 << (int_bits() - 1);
    mask >>= pos;
    return x | mask;
}

unsigned reset(unsigned x, int pos)
{
    unsigned mask = 1 << (int_bits() - 1);
    mask >>= pos;
    mask = ~mask;
    return x & mask;
}

unsigned inverse(unsigned x, int pos)
{
    unsigned mask = 1 << (int_bits() - 1);
    mask >>= pos;
    return x ^ mask;
}

#endif