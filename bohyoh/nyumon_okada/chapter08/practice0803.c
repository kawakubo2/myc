#include <stdio.h>

#define swap(type, a, b)    { type temp = a; a = b; b = temp; }

int main(void)
{
    int a = 8;
    int b = 5;

    double x = 12.3;
    double y = 7.9;

    puts("---< int型のswap >---");
    puts("--- swap前 ---");
    printf("a = %d, b = %d\n", a, b);
    swap(int, a, b);

    puts("--- swap後 ---");
    printf("a = %d, b = %d\n", a, b);
    
    puts("---< double型のswap >---");
    puts("--- swap前 ---");
    printf("x = %lf, y = %lf\n", x, y);
    swap(double, x, y);

    puts("--- swap後 ---");
    printf("x = %lf, y = %lf\n", x, y);

    return 0;
}

