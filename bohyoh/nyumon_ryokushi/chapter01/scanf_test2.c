#include <stdio.h>

int main(void)
{
    int price;
    double tax;

    printf("価格と消費税率を半角空白で区切って入力してください : ");
    scanf("%d %lf", &price, &tax);

    int priceWithTax = price * tax;
    printf("%d円の商品の税込み金額は%d円です。\n", price, priceWithTax);

    return 0;
}

