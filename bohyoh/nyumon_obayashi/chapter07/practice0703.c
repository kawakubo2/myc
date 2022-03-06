#include <stdio.h>
#include "chapter07.h"

#define LEFT 1
#define RIGHT 2

unsigned rrotate(unsigned x, int n)
{
    int i;
    int nb_bits = int_bits();
    for (i = 0; i < n; i++) {
        unsigned lsb = x & 1U;
        unsigned msb = lsb << (nb_bits - 1);
        x >>= 1;
        x = x | msb;
    }
    return x;
}

unsigned lrotate(unsigned x, int n)
{
    int i;
    int nb_bits = int_bits();
    for (i = 0; i < n; i++) {
        unsigned msb = x & 1U << (nb_bits - 1);
        unsigned lsb = msb >> (nb_bits - 1);
        x <<= 1;
        x = x | lsb;
    }
    return x;
}

int main(void)
{
    int nb_shift, direction;
    unsigned x, y;

    printf("正の整数を入力してください : ");
    scanf("%u", &x);

    printf("1.左シフト 2.右シフト : ");
    scanf("%d", &direction);

    printf("シフトする数を入力してください : ");
    scanf("%d", &nb_shift);

    printf("roate前:");
    print_bits(x);
    printf("\n");
    
    if (direction == LEFT) {
        y = lrotate(x, nb_shift);
    } else {
        y = rrotate(x, nb_shift);
    }

    printf("roate後:");
    print_bits(y);
    printf("\n");

    return 0;
}
    
