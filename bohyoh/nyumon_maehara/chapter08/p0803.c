#include <stdio.h>

#define swap(type, a, b) ({ type (t) = (a), (a) = (b), (b) = (t); })

/*
    TODO 上記の関数形式マクロではswapできない
*/
int main(void) 
{
    int a = 8, b = 5;
    double x = 3.5, y = 4.8;
    int sw = 2; // 1 --- int, 2 --- double
    puts("---< 置換え前 >---");
    if (sw == 1)
        printf("a = %d, b = %d\n", a, b);
    else
        printf("x = %lf, y = %lf\n", x, y);
    if (sw == 1)
        swap(int, a, b);
    else
        swap(double, x, y);
    puts("---< 置換え後 >---");
    if (sw == 1)
        printf("a = %d, b = %d\n", a, b);
    else
        printf("x = %lf, y = %lf\n", x, y);

    return 0;
}