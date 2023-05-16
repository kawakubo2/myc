#include <stdio.h>

double add(double total, double x)
{
    total += x;
}
double sub(double total, double x)
{
    total -= x;
}
double mul(double total, double x)
{
    total *= x;
}
double div(double total, double x)
{
    total /= x;
}
int main(void)
{
    puts("電卓");
    int sw;
    double x, total = 0.0;
    while (1) {
        printf("1.加算 2.減算 3.乗算 4.除算 0.終了: "); 
        fscanf(stdin, "%d", &sw);
        if (sw == 0) break;
        printf("数値: ");
        getchar();
        fscanf(stdin, "%lf", &x);
        switch (sw) {
            case 1:
                total = add(total, x);
                break;
            case 2:
                total = sub(total, x);
                break;
            case 3:
                total = mul(total, x);
                break;
            case 4:
                total = div(total, x);
                break;
            default:
                printf("+, -, *, /の中から選択してください。\n");
                break;       
        }
        printf("合計: %.2f\n", total);
    }

}