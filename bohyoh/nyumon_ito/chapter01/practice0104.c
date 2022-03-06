#include <stdio.h>

int main(void)
{
    // intにdouble型を代入しようとすると小数部が切り捨てられ、整数値が格納される。
    int a = 7.4;
    int b = 2.7;

    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}