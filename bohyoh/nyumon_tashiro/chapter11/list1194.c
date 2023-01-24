#include <stdio.h>

int add(int *p1, int *p2)
{
    return *p1 + *p2; // xと*pは同じ(*pはxのエイリアス)
}

int main(void)
{
    int *p, *q;
    int x = 10;
    int y = 20;
    int ans = add(&x, &y);
    printf("合計: %d\n", ans);

    return 0;
}