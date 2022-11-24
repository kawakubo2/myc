#include <stdio.h>

int count_bits(unsigned short x)
{
    int bits = 0;
    while(x) {
        if (x & 1) bits++;
        x >>= 1;
    }
    return bits;
}

int short_bits(void) 
{
    return count_bits(~0);
}

void print_bits(unsigned x)
{
    int i;
    for (i = short_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1) ? '1': '0');
}

int main(void)
{
    unsigned short a, b;
    printf("非負の整数を二つ入力してください。\n");
    printf("a : "); scanf("%hd", &a);
    printf("b : "); scanf("%hd", &b);

    printf("\na     = "); print_bits(a);
    printf("\nb     = "); print_bits(b);
    printf("\na & b = "); print_bits(a & b);
    printf("\na | b = "); print_bits(a & b);
    printf("\na ^ b = "); print_bits(a & b);
    printf("\n~a    = "); print_bits(~a);
    printf("\n~b    = "); print_bits(~b);
    putchar('\n');

    return 0;
}