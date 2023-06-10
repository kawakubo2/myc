#include <stdio.h>
#include "mybit.h"

int main(void)
{
    unsigned x, n;

    printf("非負の整数: "); fscanf(stdin, "%u", &x);
    printf("シフトするビット数: "); fscanf(stdin, "%u", &n);

    putchar('\n');
    printf("整数     = "); print_bits(x);      putchar('\n');
    printf("左シフト = "); print_bits(x << n); putchar('\n');
    printf("右シフト = "); print_bits(x >> n); putchar('\n');

    return 0;
}