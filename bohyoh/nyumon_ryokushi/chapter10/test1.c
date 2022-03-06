#include <stdio.h>

void increment(int *n)
{
    int a = 10;
    *n = *n + 1;
    printf("n=%d\n", *n);
    // 以下は関数の呼び出しもととは関係なくなる
    n = &a;
    *n = *n + 1;
    printf("n=%d\n", *n);
}

int main(void)
{
    int m = 1;
    increment(&m);
    printf("m=%d\n", m);

    return 0;
}

