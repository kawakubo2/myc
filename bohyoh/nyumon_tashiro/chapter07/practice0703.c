#include <stdio.h>
#include "mybits.h"

unsigned rrotate(unsigned x, unsigned n)
{
    int i;
    unsigned left = 1U;
    unsigned tmp;
    for (i = 0; i < n; i++) {
        tmp = x & left; // 最下位ビットを取り出す
        tmp <<= int_bits() - 1; // 最下位ビットを最上位ビットへシフト
        x >>= 1; // 元の数を1つ右シフト
        x = x | tmp; // ビット和
    }
    return x;
}

int main(void)
{
    unsigned x, n, ans;
    printf("非負の整数: "); fscanf(stdin, "%u", &x);
    print_bits(x);
    putchar('\n');
    printf("右シフトするビット数: "); fscanf(stdin, "%u", &n);
    ans = rrotate(x, n);
    print_bits(ans);
    putchar('\n');

    return 0;
}