#include <stdio.h>
#include "mybits.h"

unsigned set_n(unsigned x, int pos, int n)
{
    unsigned result = x;
    int i, idx = pos;
    for (i = pos; i < pos + n; i++) {
        idx %= int_bits();
        result = set(result, idx);
        idx++;
    }
    return result;
}

unsigned reset_n(unsigned x, int pos, int n)
{
    unsigned result = x;
    int i, idx = pos;
    for (i = pos; i < pos + n; i++) {
        idx %= int_bits();
        result = reset(result, idx);
        idx++;
    }
    return result;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    unsigned result = x;
    int i, idx = pos;
    for (i = pos; i < n + pos; i++) {
        idx %= int_bits();
        result = inverse(result, idx);
        idx++;
    }
    return result;
}

int main(void)
{
    unsigned n = 1993;
    printf("n=");
    print_bits(n); putchar('\n');

    puts("--- set_n関数 ---");
    printf("n=");
    print_bits(set_n(n, 30, 5)); putchar('\n');

    puts("--- reset_n関数 ---");
    printf("n=");
    unsigned temp = ~0;
    print_bits(reset_n(temp, 20, 20)); putchar('\n');

    puts("--- inverse関数 ---");
    printf("n=");
    print_bits(n); putchar('\n');
    printf("n=");
    print_bits(inverse_n(n, 24, 10)); putchar('\n');

    return 0;
}