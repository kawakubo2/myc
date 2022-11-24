#include <stdio.h>
#include "mybits.h"

unsigned set_n(unsigned x, int pos, int n)
{
    int i;
    for (i = pos; i < pos + n; i++) {
        x = set(x, i);
    }
    return x;
}
unsigned reset_n(unsigned x, int pos, int n)
{
    int i;
    for (i = pos; i < pos + n; i++) {
        x = reset(x, i);
    }
    return x;
}
unsigned inverse_n(unsigned x, int pos, int n)
{
    int i;
    for (i = pos; i < pos + n; i++) {
        x = inverse(x, i);
    }
    return x;
}
int main(void)
{
    unsigned x, a1, a2, a3;
    int pos, n;
    printf("非負の整数: "); fscanf(stdin, "%u", &x);
    print_bits(x);
    putchar('\n');
    printf("対象となる位置: "); fscanf(stdin, "%d", &pos);
    printf("個数: "); fscanf(stdin, "%d", &n);

    a1 = set_n(x, pos, n);
    print_bits(a1);
    putchar('\n');

    a2 = reset_n(x, pos, n);
    print_bits(a2);
    putchar('\n');

    a3 = inverse_n(x, pos, n);
    print_bits(a3);
    putchar('\n');

    return 0;
}