#include <stdio.h>

int main(void)
{
    int n;
    printf("整数: "); scanf("%d", &n);

    if (n % 5) 
    {
        puts("その数は5で割り切れません。");
    } 
    else 
    {
        puts("その数は5で割り切れます。");
        puts("ではまた");
    }
    return 0;
}