#include <stdio.h>
#include "mybit.h"

int main(void)
{
    unsigned a, b;

    printf("非負の整数を二つ入力してください。\n");
    printf("a : "); fscanf(stdin, "%u", &a);
    printf("b : "); fscanf(stdin, "%u", &b);

    putchar('\n');
    printf("a     = "); print_bits(a);     putchar('\n');
    printf("b     = "); print_bits(b);     putchar('\n');
    printf("a & b = "); print_bits(a & b); putchar('\n');
    printf("a | b = "); print_bits(a | b); putchar('\n');
    printf("a ^ b = "); print_bits(a ^ b); putchar('\n');
    printf("~a    = "); print_bits(~a);    putchar('\n');
    printf("~b    = "); print_bits(~b);    putchar('\n');

    return 0;

}

