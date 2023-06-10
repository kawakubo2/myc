#include <stdio.h>
#include "mybit.h"

int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
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
    for (int i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1': '0');
    }
}