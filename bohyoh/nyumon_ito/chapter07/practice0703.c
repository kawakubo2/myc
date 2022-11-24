#include <stdio.h>
#include "mybits.h"
unsigned lrotate(unsigned x, int n)
{
    int i;
    unsigned msb = 1 << (int_bits() - 1);
    n %= int_bits();
    for (i = 0; i < n; i++) {
        unsigned temp = x & msb;
        temp >>= (int_bits() - 1);
        x = x << 1 | temp;
    }
    return x;
}
unsigned rrotate(unsigned x, int n)
{
    unsigned lsb = 1; // Least Significant Bit(LSB)
    int i;
    n %= 32;
    for (i = 0; i < n; i++) {
        unsigned temp = x & lsb; // 最下位ビットを取り出す
        temp <<= (int_bits() - 1); // 最下位ビットを最上位ビットに移動
        x = x >> 1 | temp;
    }
    return x;
}

int main(void)
{
    unsigned n = 1962;
    print_bits(n);
    putchar('\n');
    unsigned result1 = rrotate(n, 33);
    print_bits(result1);
    putchar('\n');

    unsigned result2 = lrotate(n, 35);    
    print_bits(result2);
    putchar('\n');

    return 0;
}