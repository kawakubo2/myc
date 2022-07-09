#include <stdio.h>
#include "mybits.h"

int main(void)
{
    unsigned n = 1962;

    puts("--- set関数 ---");
    print_bits(n); putchar('\n');
    unsigned result1 = set(n, 29);
    print_bits(result1); putchar('\n');
    unsigned result2 = set(n, 30);
    print_bits(result2); putchar('\n');

    puts("--- reset関数 ---");
    unsigned result3 = reset(n, 30);
    print_bits(result3); putchar('\n');
    unsigned result4 = reset(n, 31);
    print_bits(result4); putchar('\n');

    puts("--- inverse関数 ---");
    unsigned result5 = inverse(n, 30);
    print_bits(result5); putchar('\n');
    unsigned result6 = inverse(n, 31);
    print_bits(result6); putchar('\n');

    return 0;
}