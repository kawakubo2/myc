#include <stdio.h>
#include "put_chars.h"

int main(void)
{
    int i, len;
    puts("右下直角三角形を作ります。");
    printf("短辺: "); scanf("%d", &len);
    for (i = 1; i <= len; i++) {
        put_chars(' ', len - i);
        put_chars('*', i);
        putchar('\n');
    }
    return 0;
}