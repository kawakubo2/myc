#include <stdio.h>

int count_bits(unsigned short int x)
{
    int bits = 0;
    unsigned short int last_bit = 1U;
    while (x) {
        if (x & last_bit) bits++;
        x >>= 1;  // x = x >> 1
    }
    return bits;
}

int short_int_bits(void)
{
    unsigned short int x = 0U;
    return count_bits(~x);
}

void print_bits(unsigned short int x)
{
    int i;
    for (i = short_int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

void rprint_bits(unsigned short int x)
{
    int i;
    int size = short_int_bits();
    unsigned short int mask = 1U;
    for (i = 0; i  < size; i++) {
        putchar((x & (mask << (size - i - 1))) ? '1' : '0');
    }
}

unsigned short int rrotate(unsigned short int n, int bits)
{
    int i;
    unsigned short int mask = 1U;
    for (i = 0; i < bits; i++) {
        unsigned short int last_bit = n & mask;
        n >>= 1;
        n = n | (last_bit << short_int_bits() - 1);
    }
    return n;
}

unsigned short int lrotate(unsigned short int n, int bits)
{
    int i;
    unsigned short int mask = 1U;
    mask = mask << short_int_bits() - 1;
    for (i = 0; i < bits; i++) {
        unsigned short int first_bit = n & mask;
        n <<= 1;
        n = n | (first_bit >> short_int_bits() - 1);
    }
    return n;
}

int main(void)
{
    int bits;
    unsigned short int a;
    printf("非負の整数を入力してください。\n");
    printf("a > ");
    scanf("%hu", &a);
    print_bits(a);
    putchar('\n');

    printf("ビット数 > ");
    scanf("%d", &bits);

    puts("------< 右回転 >------");
    print_bits(rrotate(a, bits));
    putchar('\n');
    
    puts("------< 左回転 >------");
    print_bits(lrotate(a, bits));
    putchar('\n');

    return 0;
}

