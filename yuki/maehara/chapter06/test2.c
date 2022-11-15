#include <stdio.h>

int main(void)
{
    double upperbase, lowerbase, height;
    printf("上底: ");
    scanf("%lf", &upperbase);
    printf("下底: ");
    scanf("%lf", &lowerbase);
    printf("高さ: ");
    scanf("%lf", &height);

    printf("台形の面積は%.2f\n", (upperbase + lowerbase) * height / 2);

    return 0;
}