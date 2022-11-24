#include <stdio.h>

int main(void)
{
    int a, b;
    printf("整数A: "); scanf("%d", &a);
    printf("整数B: "); scanf("%d", &b);

    if (a > b) {
        printf("AはBより大きいです。\n");
    } else if (a < b) {
        printf("AはBより小さいです。\n");
    } else {
        printf("AとBは等しいです。\n");
    }

    return 0;
}