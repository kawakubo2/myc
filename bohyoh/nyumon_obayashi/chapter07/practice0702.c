#include <stdio.h>
#include "chapter07.h"

#define LEFT 1
#define RIGHT 2

unsigned shift(unsigned n, int direction, int len)
{
    if (direction == LEFT) {
        return n << len;
    } else {
        return n >> len;
    }
}

unsigned mypow(unsigned n, int size)
{
    int i;
    unsigned result = 1;
    for (i = 0; i < size; i++) {
        result *= n;
    }
    return result;
}

int main()
{
    unsigned n1, shift_answer, pow_answer;
    int direction, len;
    printf("正の整数を入力してください : ");
    scanf("%u", &n1);

    printf("1.左シフト 2.右シフト : ");
    scanf("%d", &direction);

    printf("シフトする数 : ");
    scanf("%d", &len);

    shift_answer = shift(n1, direction, len);
    pow_answer = n1 * mypow(2, len);

    printf("%u == %u\n", shift_answer, pow_answer);

    return 0;
}

