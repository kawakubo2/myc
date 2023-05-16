#include <stdio.h>

double total = 0.0;

void add(double x)
{
    extern double total;
    total += x;
}
void sub(double x)
{
    extern double total;
    total -= x;
}
void mul(double x)
{
    extern double total;
    total *= x;
}
void div(double x)
{
    extern double total;
    total /= x;
}
int main(void)
{
    puts("電卓");
    int sw;
    double x;
    while (1) {
        printf("1.加算 2.減算 3.乗算 4.除算 0.終了: "); 
        fscanf(stdin, "%d", &sw);
        if (sw == 0) break;
        printf("数値: ");
        getchar();
        fscanf(stdin, "%lf", &x);
        switch (sw) {
            case 1:
                add(x);
                break;
            case 2:
                sub(x);
                break;
            case 3:
                mul(x);
                break;
            case 4:
                div(x);
                break;
            default:
                printf("+, -, *, /の中から選択してください。\n");
                break;       
        }
        printf("合計: %.2f\n", total);
    }

}