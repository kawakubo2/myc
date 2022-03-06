#include <stdio.h>
#include "chapter07.h"

unsigned create_right_bits(int n)
{
    int i;
    unsigned m = 0U;
    unsigned lsb = 1U;
    for (i = 0; i < n; i++) {
        m = m | lsb << i;
    }
    return m;
}

unsigned create_left_bits(int n)
{
    int i;
    int m = 0U;
    unsigned msb = 1U << int_bits() - 1;
    for (i = 0; i < n; i++) {
        m = m | msb >> i;
    }
    return m;
}

unsigned rrotate(unsigned x, int n)
{
    int bits = int_bits();
    unsigned left, right, result;
    n %= bits;
    right = create_right_bits(n);
    left = ~right;

    result = ((left & x) >> n)  | ((right & x) << bits - n);
    return result;
}

unsigned lrotate(unsigned x, int n)
{
    int bits = int_bits();
    unsigned left, right, result;
    n %= bits;
    left = create_left_bits(n);
    right = ~left;
    
    result = ((right & x) << n) | ((left & x) >> bits - n);
    return result;  
}

int main(void)
{
    unsigned a, b;
    int rotate_num, direction, sw;
    do {
        puts("rrotateまたはlrotateします。");
        printf("1.rrotate 2.lrotate : ");
        do {
            scanf("%d", &direction);
        } while (direction != 1 && direction != 2);
        printf("正数を入力してください : ");
        scanf("%u", &a);
        printf("シフトするビット数 : ");
        scanf("%d", &rotate_num);
        
        puts("---< シフト前 >---");
        print_bits(a);
        putchar('\n');

        if (direction == 1) {
            b = rrotate(a, rotate_num);
        } else if (direction == 2) {
            b = lrotate(a, rotate_num);
        }

        puts("---< シフト後 >---");
        print_bits(b);
        putchar('\n');

        printf("0.終了 1.続ける : ");
        scanf("%d", &sw);
    } while (sw);
    return 0;
}

