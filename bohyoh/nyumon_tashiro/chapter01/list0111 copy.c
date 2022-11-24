#include <stdio.h>

int main(void)
{
    int x, y;
    printf("整数x: ");
    scanf("%d", &x);
    printf("整数y: ");
    scanf("%d", &y);
    printf("%d * %d = %d\n", x, y, x * y);

    return 0;
}