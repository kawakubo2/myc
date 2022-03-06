#include <stdio.h>

#define swap(type, a, b) do { type temp = a; a = b; b = temp; } while(0)

int main(void)
{
    int a = 8, b = 5;
    double x = 12.3, y = 9.8;

    int sw;
    printf("1.整数値のswap 2.浮動小数点数のswap : ");
    scanf("%d", &sw);

    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);
    if (sw == 1) 
        swap(int, a, b);
    else if (sw == 2)
        swap(double, x, y);
    else
        printf("1まはた2を選択してください。\n");
    

    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);

    return 0;
}

