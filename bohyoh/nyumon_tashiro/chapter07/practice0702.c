#include <stdio.h>
#include "mybits.h"
int my_pow(int x, int p)
{
    int i;
    int result = 1;
    for (i = 0; i < p; i++) 
    {
        result *= x;
    }
    return result;
}
int main(void)
{

    unsigned x, n, pow, shift;
    printf("非負の正数: "); fscanf(stdin, "%u", &x);
    shift = x;
    printf("左シフトするビット数: "); fscanf(stdin, "%u", &n);
    pow = x * my_pow(2, n);
    printf("%uの%d乗は%u\n", x, n, pow);
    printf("%uを左に%uビットシフトした値は%u\n", shift, n, x <<= n);
    if (pow == x) {
        printf("シフト演算とべき乗の演算の結果が等しい\n");
    } else {
        printf("シフト演算とべき乗の演算の結果が等しくない\n");
    }
    return 0;
}