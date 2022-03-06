#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0) *n = 0;
    if (*n > 100) *n= 100;
}

int main(void)
{
    // 正常値 0, 50, 100;
    int n1 = 0, n2 = 50, n3 = 100;
    // 外れ値 -1, 101
    int n4 = -1, n5 = 101;

    puts("----------< 調整前 >---------");
    printf("n1 = %d, n2 = %d, n3 = %d, n4 = %d, n5 = %d\n", n1, n2, n3, n4, n5);

    adjust_point(&n1);
    adjust_point(&n2);
    adjust_point(&n3);
    adjust_point(&n4);
    adjust_point(&n5);

    puts("----------< 調整後 >---------");
    printf("n1 = %d, n2 = %d, n3 = %d, n4 = %d, n5 = %d\n", n1, n2, n3, n4, n5);
    
    return 0;
}

