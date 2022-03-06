#include <stdio.h>
#include "chapter07.h"

unsigned set(unsigned x, int pos)
{
    unsigned pos_bit = 1U << (pos - 1);
    return x | pos_bit;
}

unsigned reset(unsigned x, int pos)
{
    unsigned pos_bit = ~(1U << (pos - 1));
    return x & pos_bit;
}

unsigned inverse(unsigned x, int pos)
{
    unsigned pos_bit = 1U << (pos - 1);
    unsigned tmp = x & pos_bit;
    tmp >>= (pos  - 1);

    if (tmp == 1) {
        return reset(x, pos);
    } else {
        return set(x, pos);
    }
}

int main(void)
{
    int pos;
    unsigned x, answer;

    printf("正の整数を入力してください : ");
    scanf("%u", &x);

    printf("セットしたいビットの位置 : ");
    scanf("%d", &pos);

    printf("---< set前 >---");
    print_bits(x);
    printf("\n");

    answer = set(x, pos);

    printf("---< set後 >---");
    print_bits(answer);
    printf("\n");

    printf("正の整数を入力してください : ");
    scanf("%u", &x);

    printf("リセットしたいビットの位置 : ");
    scanf("%d", &pos);
    
    printf("---< reset前 >---");
    print_bits(x);
    printf("\n");

    answer = reset(x, pos);

    printf("---< reset後 >---");
    print_bits(answer);
    printf("\n");
    
    printf("正の整数を入力してください : ");
    scanf("%u", &x);

    printf("反転したいビットの位置 : ");
    scanf("%d", &pos);
    
    printf("---< 反転前 >---");
    print_bits(x);
    printf("\n");

    answer = inverse(x, pos);

    printf("---< 反転後 >---");
    print_bits(answer);
    printf("\n");
    return 0;
}

