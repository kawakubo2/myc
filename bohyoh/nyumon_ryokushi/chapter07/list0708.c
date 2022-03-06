#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    unsigned last_bit = 1U;
    while (x) {
        if (x & last_bit) bits++;
        x >>= 1;  // x = x >> 1
    }
    return bits;
}

int int_bits(void)
{
    unsigned x = 0U;
    return count_bits(~x);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < i) ? n - 1 : i - 1;
    for ( ; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1': '0');
    }
}
int main(void)
{
    unsigned i;

    for(i = 0; i <= 65535U; i++) {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf(" %06o %04x\n", i, i);
    }

    return 0;
}

