#include <stdio.h>

#define swap(type, a, b) do { type temp = a; a = b; b = temp; } while(0)

int main(void)
{
    int a = 8, b = 5;
    double x = 12.3, y = 9.8;
    
    printf("1.整数値のswap\n");
    printf("a = %d, b = %d\n", a, b);
    swap(int, a, b);
    printf("a = %d, b = %d\n", a, b);

    printf("2. 浮動小数点数のswap\n");
    printf("x = %lf, y = %lf\n", x, y);
    swap(double, x, y);
    printf("x = %lf, y = %lf\n", x, y);
    
    return 0;
}

