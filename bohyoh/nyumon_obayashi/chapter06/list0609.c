#include <stdio.h>
#include "chapter06.h"

int rev_int(int num)
{
    int result = 0;
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

int main(void)
{
    int nx = scan_pint();

    printf("反転した値は%dです。\n", rev_int(nx));

    return 0;
}

