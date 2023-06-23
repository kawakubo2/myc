#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int a, b;
    unsigned long int x, y = UINT_MAX + 1LU;
    a = 100000;
    x = 10000000000;
    printf("%u x %u = %u\n", a, a, a * a); // 符号無し整数はオーバーフローしてもエラーは発生しない
    printf("%lu %% %lu = %lu\n", x, y, x % y);

    return 0;
}