#include <stdio.h>

static double total;

void add(double x)
{
    total += x;
}

void sub(double x)
{
    total -= x;
}

void mul(double x)
{
    total *= x;
}

void div(double x)
{
    total /= x;
}

int main(void)
{
    int a;
    double val;
    while (1) {
        printf("1.足算 2.引算 3.掛算 4.割算 9.終了: ");
        scanf("%d", &a);
        if (a == 9) break;
        if (a >= 1 && a <= 4) {
            printf("数値: "); scanf("%lf", &val);
        }
        switch (a) {
            case 1:
                add(val);
                break;
            case 2:
                sub(val);
                break;
            case 3:
                mul(val);
                break;
            case 4:
                div(val);
                break;
            case 5:
                printf("現在の合計: %lf\n", total);
                break;
            default:
                puts("1～5を選択してください。");
                break;
        }
        printf("現在の合計: %lf\n", total);
    }
    return 0;
}