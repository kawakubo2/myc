#include <stdio.h>
#include "my_scan.h"

int rev_int(int num)
{
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while(num > 0);
    }
    return tmp;
}

int main(void)
{
    int nx = scan_pint();
    printf("反転した値は%dです。\n", rev_int(nx));
    return 0;
}