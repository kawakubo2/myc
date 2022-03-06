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
    unsigned short int a;
    printf("非負の整数を入力してください。\n");
    printf("a > ");
    scanf("%hu", &a);
    print_bits(a);
    putchar('\n');

    while(1) {
        printf("1:左シフト 2:右シフト 3:終了 > ");
        int sw;
        scanf("%d", &sw);
        if (sw == 3) break;
        printf("ビット数 > ");
        int bits;
        scanf("%d", &bits);
        if (sw == 1) {
            a <<= bits;
            print_bits(a);
            putchar('\n');
        } else if (sw == 2) {
            a >>= bits;
            print_bits(a);
            putchar('\n');
        } else {
            puts("1から3を指定してください。");
        }
    }

    return 0;
}

