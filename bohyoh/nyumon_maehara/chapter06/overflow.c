#include <stdio.h>

int main(void)
{
    int max_int = 2147483647; // 32ビットの符号付整数が表すことができる最大値
    printf("%dに1を加えると%dとなる。\n", max_int, max_int + 1);

    return 0;
}