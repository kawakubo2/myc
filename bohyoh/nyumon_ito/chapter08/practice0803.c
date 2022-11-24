#include <stdio.h>

#define swap(type, a, b) { type temp; temp = a; a = b; b = temp; }

int main(void)
{
    int n = 10;
    int m = 5;
    puts("--- swap前 ---");
    printf("n = %d, m = %d\n", n, m);
    swap(int, n, m);
    puts("--- swap後---");
    printf("n = %d, m = %d\n", n, m);

    double x = 10.0;
    double y = 5.0;
    puts("--- swap前 ---");
    printf("x = %f, y = %f\n", x, y);
    swap(double, x, y);
    puts("--- swap後 ---");
    printf("x = %f, y = %f\n", x, y);

    return 0;
}