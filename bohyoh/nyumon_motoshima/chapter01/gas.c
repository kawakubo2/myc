#include <stdio.h>

int main(void)
{
    int litter = 25;
    int unit_price = 182;
    printf("%dリットルのレギュラーガソリン(単価: %d)の料金は%d円です。\n", 
        litter, unit_price, litter * unit_price);

    return 0;
}