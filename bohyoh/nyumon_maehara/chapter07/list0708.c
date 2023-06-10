#include <stdio.h>
#include "mybit.h"

int main(void)
{
    unsigned n;
    printf("非負の整数: "); fscanf(stdin, "%u", &n);

    putchar('\n');
    printf("元の値   = "); print_bits(n);       putchar('\n');
    printf("セット   = "); print_bits(n | 1U);  putchar('\n');
    printf("リセット = "); print_bits(n & ~1U); putchar('\n');
    printf("反転     = "); print_bits(n ^ 1U);  putchar('\n');

    return 0; 
}