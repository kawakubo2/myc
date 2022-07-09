#include <stdio.h>

int main(void)
{
    float weight;
    int size;
    puts("配送料金を計算します。");
    printf("重さ(kg)を入力してください: "); scanf("%f", &weight);
    if (weight <= 0) {
        puts("プラスの数値を入力してください。");
        return 1;
    }
    printf("サイズ(cm)を入力してください: "); scanf("%d", &size);
    if (size <= 0) {
        puts("プラスの整数を入力してください。");
        return 1;
    }
    int price;
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
    printf("送料は%d円です。\n", price + 200);

    return 0;
}