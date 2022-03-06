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

int main(void)
{
    unsigned short int a, b;
    printf("非負の整数を2つ入力してください。\n");
    printf("a : ");
    scanf("%hu", &a);
    printf("b : ");
    scanf("%hu", &b);

    printf("\na       = "); rprint_bits(a);
    printf("\nb       = "); rprint_bits(b);
    printf("\na & b   = "); rprint_bits(a & b);
    printf("\na | b   = "); rprint_bits(a | b);
    printf("\na ^ b   = "); rprint_bits(a ^ b);
    printf("\n~a      = "); rprint_bits(~a);
    printf("\n~b      = "); rprint_bits(~b);
    putchar('\n');

    return 0;
}

