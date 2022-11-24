#include <stdio.h>

int main(void)
{
    int x = 8;
    int y = 5;
    printf("x = %d, y = %d\n", x, y);
    int tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, y = %d\n", x, y);
}