#include <stdio.h>
#include "chapter07.h"

int my_pow(int a, int n)
{
    int i, result = 1;
    for(i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

int main(void)
{
    unsigned a, b, c;
    int shift_num;

    printf("正数を入力してください : ");
    scanf("%u", &a);

    printf("左シフトの数を入力してください : ");
    scanf("%d", &shift_num);

    b = a << shift_num;
    c = a * my_pow(2, shift_num);

    printf("シフトした数: %u, 2のべき乗を乗じた数: %u\n", b, c);


    return 0;
}
