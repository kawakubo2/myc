#include <stdio.h>

int calc_gas_charge(double litter, int member);

int main(void)
{
    double litter;
    int member;
    int price;
    printf("何リットル: ");
    fscanf(stdin, "%lf", &litter);
    printf("会員ですか? yes -> 1  no -> 0: ");
    fscanf(stdin, "%d", &member);
    price = calc_gas_charge(litter, member);
    printf("%.2fリットルで%d円となります。\n", litter, price);

    return 0;
}

int calc_gas_charge(double litter, int member)
{
    int unit_price = 157;
    return (int)(litter * (member == 1 ? unit_price - 3: unit_price));
}