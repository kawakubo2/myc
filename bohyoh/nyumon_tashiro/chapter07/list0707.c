#include <stdio.h>
#include "mybits.h"

int main(void)
{
    unsigned x, n;
    printf("非負の整数: "); fscanf(stdin, "%u", &x);
    printf("シフトするビット数: "); fscanf(stdin, "%u", &n);

    printf("\n正数       = "); print_bits(x);
    printf("\n左シフト   = "); print_bits(x << n);
    printf("\n右シフト   = "); print_bits(x >> n);
    putchar('\n');

    return 0;
}