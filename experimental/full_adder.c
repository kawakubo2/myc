#include <stdio.h>

unsigned int full_adder(unsigned int n1, unsigned int n2, unsigned short carry_out)
{
    int i = 0;

    unsigned int mask      = 1;
    unsigned int tmp1, tmp2;
    unsigned int result    = 0;

    for (i = 0; i < 16; i++) {
        tmp1 = n1 & mask;
        tmp2 = n2 & mask;
        result = result | ((tmp1 ^ tmp2 ^ carry_out) << i);
        carry_out = tmp1 & tmp2 | tmp2 & carry_out | carry_out & tmp1;
        n1 >>= 1;
        n2 >>= 1;
    }

    return result;
}

int main(void)
{
    unsigned int a, b;
    puts("2つの符号なし整数の和を計算します。");
    printf("unsigned int a:");
    scanf("%u", &a);
    printf("unsigned int b:");
    scanf("%u", &b);

    // 加算 a + b
    unsigned int carry_out = 0;
    unsigned int c = full_adder(a, b, carry_out);
    printf("%u + %u = %u\n", a, b, c);
    
    // 減算 a - b
    carry_out = 1;
    // 本来はfull_adder関数の中でビットの反転をすべきところだが・・・
    c = full_adder(a, ~b, carry_out);
    printf("%u - %u = %u\n", a, b, c);

    return 0;
}

