#include <stdio.h>

/*
売上単価(selling price per unit) * 個数(quantity) 
    = 固定費(total fixed costs) + 変動費単価(variable cost per unit) * 個数(quantity)
*/
int main(void)
{
    int sppu, quantity, tfc, vcpu;
    tfc = 500000;
    sppu = 300;
    vcpu = 100;
    quantity = tfc / (sppu - vcpu);
    printf("損益分岐点は%d円です。\n", sppu * quantity);
}