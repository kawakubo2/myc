#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
int main(void)
{
    int x, y, z;
    puts("三つの整数を入力してください。");
    printf("整数1: "); fscanf(stdin, "%d", &x);
    printf("整数2: "); fscanf(stdin, "%d", &y);
    printf("整数3: "); fscanf(stdin, "%d", &z);
    
    printf("最小値は%dです。\n", min3(x, y, z));

    return 0;
}