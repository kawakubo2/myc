#include <stdio.h>
#include "chapter07.h"

unsigned rrotate(unsigned x, int n)
{
    int i;
    unsigned tmp;

    for (i = 0; i < n; i++) {
        tmp = x & 1U;
        tmp <<= int_bits() - 1;
        x >>= 1;
        x = x | tmp;
    }
    return x;
}

int main(void)
{
    unsigned a, b;
    int n;

    printf("正数aを入力してください : ");
    scanf("%u", &a);

    printf("右シフト数: ");
    scanf("%d", &n);

    b = rrotate(a, n);

    printf("a:");
    print_bits(a);
    putchar('\n');

    printf("b:");
    print_bits(b);
    putchar('\n');

    return 0;
}

