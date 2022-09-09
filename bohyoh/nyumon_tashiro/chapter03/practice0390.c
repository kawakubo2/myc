#include <stdio.h>

int main(void)
{
    int size;
    double weight;
    int price;

    puts("配送料金を計算します。");
    printf("重さ(kg): ");
    scanf("%lf", &weight);
    printf("サイズ: ");
    scanf("%d", &size);

    if (weight <= 2) {
        if (size <= 100) {
            price = 500;
        } else if (size <= 300) {
            price = 1000;
        } else {
            price = 2000;
        }
    } else if (weight <= 5) {
        if (size <= 100) {
            price = 700;
        } else if (size <= 300) {
            price = 1200;
        } else {
            price = 2200;
        }
    } else {
        if (size <= 100) {
            price = 1000;
        } else if (size <= 300) {
            price = 1500;
        } else {
            price = 3000;
        }
    }
    printf("重さが%.1fkg、サイズが%dcmの荷物の配送料金は%d円です。\n", weight, size, price);
}