#include <stdio.h>

void set_zero(int n)
{
    n = 0;
}
void set_zero2(int *n)
{
    *n = 0;
}

int main(void)
{
    int num = 10;
    printf("set_zero関数呼び出し前: num=%d\n", num);
    set_zero(num);
    printf("set_zero関数呼び出し後: num=%d\n", num);

    printf("set_zero2関数呼び出し前: num=%d\n", num);
    set_zero2(&num);
    printf("set_zero2関数呼び出し後: num=%d\n", num);

    return 0;
}