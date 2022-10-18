#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char型で扱える最小値は %d です。\n", CHAR_MIN);
    printf("char型で扱える最大値は %d です。\n", CHAR_MAX);
    printf("\n");

    printf("int型で扱える最小値は %d です。\n", INT_MIN);
    printf("int型で扱える最大値は %d です。\n", INT_MAX);
    printf("\n");

    printf("long型で扱える最小値は %ld です。\n", LONG_MIN);
    printf("long型で扱える最大値は %ld です。\n", LONG_MAX);
    printf("\n");

    return 0;
}