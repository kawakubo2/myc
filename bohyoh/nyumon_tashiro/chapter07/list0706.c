#include <stdio.h>
#include "mybits.h"

int main(void)
{
    unsigned a, b;
    printf("非負の整数を二つ入力してください。\n");
    printf("a: "); fscanf(stdin, "%u", &a);
    printf("b: "); fscanf(stdin, "%u", &b);

    printf("\na       = "); print_bits(a);
    printf("\nb       = "); print_bits(b);
    printf("\na & b   = "); print_bits(a & b);
    printf("\na | b   = "); print_bits(a | b);
    printf("\na ^ b   = "); print_bits(a ^ b);
    printf("\n~a      = "); print_bits(~a);
    printf("\n~b      = "); print_bits(~b);
    putchar('\n');

    printf("4 << 4 ---> %u\n", 4 << 4);
}