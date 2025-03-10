#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("整数1: "); scanf("%d", &x);
    printf("整数2: "); scanf("%d", &y);
    printf("整数3: "); scanf("%d", &z);

    if (x == y && y == z) {
        puts("3つの値は等しいです。");
    } else if (x == y || y == z || z == y) {
        puts("2つの値が等しいです。");
    } else {
        puts("3つの値は異なります。");
    }

    return 0;
}