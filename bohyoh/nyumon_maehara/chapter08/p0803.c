#include <stdio.h>

#define swap(type, a, b) ({ type (t) = (a); (a) = (b); (b) = (t); })

int main(void) 
{
    int a = 8, b = 5;
    double x = 3.5, y = 4.8;
    puts("---< 置換え前 >---");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);
    swap(int, a, b);
    swap(double, x, y);
    puts("---< 置換え後 >---");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %lf, y = %lf\n", x, y);

    return 0;
}