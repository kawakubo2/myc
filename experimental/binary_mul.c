#include <stdio.h>

unsigned int full_adder(unsigned int n1, unsigned int n2, unsigned int carry_out)
{
    int i;
    unsigned int result = 0;
    unsigned int sum;
    unsigned int tmp1, tmp2;
    unsigned int mask = 1;
    for(i = 0; i < 32; i++) {
        tmp1 = n1 & mask;
        tmp2 = n2 & mask;
        sum = tmp1 ^ tmp2 ^ carry_out;
        carry_out = tmp1 & tmp2 | tmp2 & carry_out | carry_out & tmp1;
        result = result | (sum << i);
        n1 >>= 1;
        n2 >>= 1;
    }
    return result;
}

unsigned int mul(unsigned int n1, unsigned int n2)
{
    int cnt = 0;
    unsigned int result = 0;
    unsigned int tmp = n2;
    unsigned int last_bit = 1;
    while (tmp) {
        if (tmp & last_bit) {
            result = full_adder(result, n1 << cnt, 0);
        }
        tmp >>= 1;
        cnt++;
    }
    return result;
}

int main(void)
{
    unsigned int a;
    unsigned int b;
    printf("unsigned int a:");
    scanf("%u", &a);
    printf("unsigned int b:");
    scanf("%u", &b);

    unsigned int c = mul(a, b);
    printf("%u * %u = %u\n", a, b, c);

    return 0;
}
