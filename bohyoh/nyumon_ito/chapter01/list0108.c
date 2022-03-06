#include <stdio.h>

int main(void)
{
    int vx, vy;

    vx = 57;
    vy = vx + 10;

    printf("vxの値は%dです。\n", vx);
    printf("vyの値は%dです。\n", vy);
    printf("%d + %d = %d\n", vx, vy, (vx + vy));

    return 0;
}