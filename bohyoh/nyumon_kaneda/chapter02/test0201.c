#include <stdio.h>

int main(void)
{
    int n;
    printf("整数: "); scanf("%d", &n);
    printf("%dは16進数で%xです。\n", n, n);
    printf("%dは8進数で%oです。\n", n, n);

    return 0;
}