#include <stdio.h>

int main(void)
{
    int unit_price, quantity, total, tax_rate_option;
    printf("税率を選択してください: 1-->8%% 2-->10%% : ");
    fscanf(stdin, "%d", &tax_rate_option);
    printf("単価を入力してください: ");
    fscanf(stdin, "%d", &unit_price);
    printf("数量を入力してください: ");
    fscanf(stdin, "%d", &quantity);
    total = unit_price * quantity * (tax_rate_option ? 1.08 : 1.1);
    printf("税込みの合計金額: %d円\n", total);

    return 0;
}